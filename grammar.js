const NEWLINE_REGEX = '(\\n|\\r\\n)';
const SPLIT_REGEX = '\\\\'+NEWLINE_REGEX;
const WHITESPACE_REGEX = '[ \\t\\f]'

const DEFINE_OPS = ['=', ':=', '::=', '?=', '+='];

module.exports = grammar({
    name: 'make',

    externals: $ => [
        $._var_name,
        //$.RECIPEPREFIX,
    ],

    extras: $ => [ 
        /[\s]/,
        alias(/\\(\n|\r\n)/, "\\\n"),
        $.comment
    ],

    conflicts: $ => [],

    rules: {

        makefile: $ => repeat($._thing),

        _thing: $ => choice(
            $._assignments
        ),

        _assignments: $ => choice(
            $.variable_assignment,
            //$.PATH_assignment,
            //$.RECIPEPREFIX_assignment,
        ),

        variable_assignment: $ => seq(
            field('modifier',$._var_modifier),
            field('name',choice(
                $.var_name,
                // $.variable_expansion
            )),
            field('operator',choice(...DEFINE_OPS)),
            optional(field('value',
                alias($._until_newline, $.text)
            )),
            $._NL
        ),

        _var_modifier: $ => choice(
            // aliases for debug only
            alias('export', $.export),
            alias('unexport', $.unexport),
            alias('override', $.override),
            alias('private', $.private)
        ),

        //RECIPEPREFIX_assignment: $ => seq(
        //    field('name','.RECIPEPREFIX'),
        //    field('operator',choice(...DEFINE_OPS)),
        //    optional(field('value',
        //        alias($.RECIPEPREFIX, '.RECIPEPREFIX')
        //    )),
        //    $._NL
        //),

        //PATH_assignment: $ => seq(
        //    field('name','VPATH'),
        //    field('operator',choice(...DEFINE_OPS)),
        //    optional(field('value', $.paths)),
        //    $._NL
        //),

        // Lists
        paths: $ => seq(
            $._primary,
            repeat(seq(
                choice(...[':',';'].map(c=>token.immediate(c))),
                $._primary
            )),
        ),

        _primary: $ => choice(
            $.name,
            //$.archive_file
        ),

        // Names
        name: $ => repeat1(choice(
            '\\',
            token(/[^\s=\\]*[^\s:=\\]/)
        )),

        var_name: $ => repeat1(
            alias(
                $._var_name,
                $._var_name
            )
        ),

        // Match until...
        _until_newline: $ => repeat1(choice(
            text($,[]),
        )),

        // TODO Fix precedence, "#" is allowed on some contexts
        comment: $ => token(seq(
            '#', repeat(/[^\n]/)
        )),

        // Delimiters (higher precedence than extras)
        _WS: $ => token.immediate(prec(1,new RegExp(WHITESPACE_REGEX))),

        _NL: $ => token.immediate(prec(1,new RegExp(NEWLINE_REGEX))),

        _SPLIT: $ => alias(
            token.immediate(new RegExp(SPLIT_REGEX)),
            '\\\n'
        ),

    }

});

function noneOf(...characters) {
  const negatedString = characters.map(c => c == '\\' ? '\\\\' : c).join('')
  return new RegExp('[^' + negatedString + ']')
}

function text($, exclude, allow_comment=true) {

    // allow_comment
    // comments are allowed in the text region,
    // pound symbol in the text shall be escaped

    //const negatedDefault = ['\\$','\\n','\\r','\\\\'].concat(exclude)
    const negatedDefault = ['\\n','\\r','\\\\'].concat(exclude)

    return token(repeat1(choice(
        noneOf(
            negatedDefault.concat(allow_comment?'#':'')
        ),
        seq(
            '\\',
            noneOf(negatedDefault.concat(allow_comment? '' : '#'))
        ),
    )))
}


