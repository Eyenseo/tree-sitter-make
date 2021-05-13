#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <tree_sitter/parser.h>

#define YYCTYPE int32_t

#define BUFFER_SIZE (4*1024)

#define EAT_LEADING_WHITESPACE(lexer) \
    while (isspace(lexer->lookahead)) \
        lexer->advance(lexer,true)

enum TokenType {
  VAR_NAME,
  RECIPEPREFIX_DEF,
};

typedef struct {
    int cursor;
    int irq;
} Scanner_t;

static
bool scanner_has_action(Scanner_t *scanner) {
    return (scanner->irq != 0);
}

static
bool scanner_var_name_handler(
    Scanner_t *scanner,
    TSLexer *lexer,
    const bool *valid_symbols)
{
    assert(valid_symbols[VAR_NAME]);

    for (int i=0; i<scanner->cursor; i++) {
        lexer->advance(lexer, false);
    }

    scanner->irq ^= (1 << VAR_NAME);
    scanner->cursor = 0;

    lexer->result_symbol = VAR_NAME;
    return true;

}

static
bool scanner_do_action(
    Scanner_t *scanner,
    TSLexer *lexer,
    const bool *valid_symbols)
{
    assert(!isspace(lexer->lookahead));

    if (scanner->cursor && (1 << VAR_NAME))
        return scanner_var_name_handler(scanner, lexer, valid_symbols);

}


// Fill a buffer calling lexer->lookahead multiple times until "=" (inclusive).
// Lines splits (\\\n) are replaced with whitespaces.
// If end of file or newline is found, return -1
static
int fill_buffer(TSLexer * lexer, YYCTYPE * buffer)
{
    int n = 0;

    assert (isascii(lexer->lookahead) && "EAT_LEADING_WHITESPACE shall be called before fill_buffer");
    assert (!isspace(lexer->lookahead));

loop:
    assert (n < BUFFER_SIZE);
/*!re2c
    re2c:indent:string = "    ";
    re2c:indent:top = 1;

    re2c:define:YYCTYPE = YYCTYPE;
    re2c:yyfill:enable = 0;

    re2c:api:style = free-form;
    re2c:flags:input = custom;

    re2c:define:YYPEEK = "lexer->lookahead";
    re2c:define:YYSKIP = "buffer[n++] = lexer->lookahead; lexer->advance(lexer, false);";

    delim  = "=";

    eof   = [\000];
    cmt   = "#";

    // Check for line split and replace them with white spaces
    "\n"
        {
            assert(buffer[n-1] == '\n');

            if (n >= 3 && buffer[n-3] == '\\' && buffer[n-2] == '\r') {
                buffer[n-3] = ' ';
                buffer[n-2] = ' ';
                buffer[n-1] = ' ';

                goto loop;
            }

            if (n >= 2 && buffer[n-2] == '\\') {
                buffer[n-2] = ' ';
                buffer[n-1] = ' ';

                goto loop;
            }

            goto reject;
        }

    delim { goto accept; }

    eof | cmt { goto reject; }

    * { goto loop; }
*/

assert(false && "missing goto in the lexer rules");

accept:
    buffer[n] = '\0';
    return n;

reject:
    for (int i=0; i<n; i++)
        buffer[i] = '\0';

    return -1;
}

// assume the buffer does line split
static
int lex_variable(const YYCTYPE *YYCURSOR)
{

    const YYCTYPE *YYMARKER_START = YYCURSOR;
    const YYCTYPE *YYMARKER, *YYCTXMARKER;

/*!re2c
    re2c:define:YYCTYPE = YYCTYPE;
    re2c:yyfill:enable = 0;

    re2c:flags:input = default;

    wsp     = [ \t];
    char    = [^:=] \ wsp \ eof;

    ops     = "::=" | ":=" | "?=" | "!=" | "+=" | "=";

    char+ / wsp+ ops { return YYCURSOR-YYMARKER_START; }

    char+ / "::=" { return YYCURSOR-YYMARKER_START; }
    char+ /  ":=" { return YYCURSOR-YYMARKER_START; }
    char+ /  "?=" { return YYCURSOR-YYMARKER_START; }
    char+ /  "!=" { return YYCURSOR-YYMARKER_START; }
    char+ /  "+=" { return YYCURSOR-YYMARKER_START; }
    char+ /   "=" { return YYCURSOR-YYMARKER_START; }

    * { return -1; }

*/
}

static
bool scan_variable_name(TSLexer* lexer, Scanner_t *scanner)
{
    YYCTYPE buffer[BUFFER_SIZE];
    int len = 0;

    assert(!isspace(lexer->lookahead));

    lexer->mark_end(lexer);

    len = fill_buffer(lexer, buffer);

    if (len <= 1)
        return false;

    len = lex_variable(buffer);

    if (len < 1)
        return false;

    scanner->irq |= (1 << VAR_NAME);
    scanner->cursor = len;

    lexer->result_symbol = VAR_NAME;
    return true;

}

bool tree_sitter_make_external_scanner_scan(
        void *payload,
        TSLexer *lexer,
        const bool *valid_symbols) {

    Scanner_t * scanner = payload;
    const YYCTYPE * cur;

    if (scanner_has_action(scanner))
        return scanner_do_action(scanner, lexer, valid_symbols);

    EAT_LEADING_WHITESPACE(lexer);

    if (valid_symbols[VAR_NAME])
        return scan_variable_name(lexer, scanner);

    return false;

}

void *tree_sitter_make_external_scanner_create() {
    Scanner_t *scanner = calloc(1,sizeof(Scanner_t));
    assert(scanner);

    assert(!(scanner->cursor));
    assert(!(scanner->irq));
    //scanner->recipeprefix = (YYCTYPE) '>';

    return scanner;
}

void tree_sitter_make_external_scanner_destroy(void *payload) {
    free(payload);
}

unsigned tree_sitter_make_external_scanner_serialize(
    void *payload,
    char *buffer) {

    memcpy(&payload, &buffer, sizeof(Scanner_t));

    return sizeof(Scanner_t);
}

void tree_sitter_make_external_scanner_deserialize(
    void *payload,
    const char *buffer,
    unsigned length) {

    memcpy(&buffer, payload, sizeof(Scanner_t));

}
