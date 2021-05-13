#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 1
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_EQ = 1,
  anon_sym_COLON_EQ = 2,
  anon_sym_COLON_COLON_EQ = 3,
  anon_sym_QMARK_EQ = 4,
  anon_sym_PLUS_EQ = 5,
  anon_sym_export = 6,
  anon_sym_unexport = 7,
  anon_sym_override = 8,
  anon_sym_private = 9,
  anon_sym_COLON = 10,
  anon_sym_SEMI = 11,
  aux_sym__until_newline_token1 = 12,
  sym_comment = 13,
  sym__NL = 14,
  sym__var_name = 15,
  sym_makefile = 16,
  sym__thing = 17,
  sym__assignments = 18,
  sym_variable_assignment = 19,
  sym__var_modifier = 20,
  sym_var_name = 21,
  aux_sym__until_newline = 22,
  aux_sym_makefile_repeat1 = 23,
  aux_sym_var_name_repeat1 = 24,
  alias_sym_text = 25,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_COLON_COLON_EQ] = "::=",
  [anon_sym_QMARK_EQ] = "\?=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_export] = "export",
  [anon_sym_unexport] = "unexport",
  [anon_sym_override] = "override",
  [anon_sym_private] = "private",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [aux_sym__until_newline_token1] = "_until_newline_token1",
  [sym_comment] = "comment",
  [sym__NL] = "_NL",
  [sym__var_name] = "_var_name",
  [sym_makefile] = "makefile",
  [sym__thing] = "_thing",
  [sym__assignments] = "_assignments",
  [sym_variable_assignment] = "variable_assignment",
  [sym__var_modifier] = "_var_modifier",
  [sym_var_name] = "var_name",
  [aux_sym__until_newline] = "_until_newline",
  [aux_sym_makefile_repeat1] = "makefile_repeat1",
  [aux_sym_var_name_repeat1] = "var_name_repeat1",
  [alias_sym_text] = "text",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_COLON_COLON_EQ] = anon_sym_COLON_COLON_EQ,
  [anon_sym_QMARK_EQ] = anon_sym_QMARK_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_unexport] = anon_sym_unexport,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym__until_newline_token1] = aux_sym__until_newline_token1,
  [sym_comment] = sym_comment,
  [sym__NL] = sym__NL,
  [sym__var_name] = sym__var_name,
  [sym_makefile] = sym_makefile,
  [sym__thing] = sym__thing,
  [sym__assignments] = sym__assignments,
  [sym_variable_assignment] = sym_variable_assignment,
  [sym__var_modifier] = sym__var_modifier,
  [sym_var_name] = sym_var_name,
  [aux_sym__until_newline] = aux_sym__until_newline,
  [aux_sym_makefile_repeat1] = aux_sym_makefile_repeat1,
  [aux_sym_var_name_repeat1] = aux_sym_var_name_repeat1,
  [alias_sym_text] = alias_sym_text,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unexport] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_override] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__until_newline_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__NL] = {
    .visible = false,
    .named = true,
  },
  [sym__var_name] = {
    .visible = true,
    .named = true,
  },
  [sym_makefile] = {
    .visible = true,
    .named = true,
  },
  [sym__thing] = {
    .visible = false,
    .named = true,
  },
  [sym__assignments] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__var_modifier] = {
    .visible = false,
    .named = true,
  },
  [sym_var_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__until_newline] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_makefile_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_var_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_text] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_modifier = 1,
  field_name = 2,
  field_operator = 3,
  field_value = 4,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_modifier] = "modifier",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_modifier, 0},
    {field_name, 1},
    {field_operator, 2},
  [3] =
    {field_modifier, 0},
    {field_name, 1},
    {field_operator, 2},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [3] = alias_sym_text,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__until_newline, 2,
    aux_sym__until_newline,
    alias_sym_text,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(43);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == ';') ADVANCE(54);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == '\\') SKIP(41)
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == 'p') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(7)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(58);
      if (lookahead == '\r') SKIP(8)
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(56);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(8)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(5)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(56);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 35:
      if (lookahead == 'v') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == 'v') ADVANCE(14);
      END_STATE();
    case 37:
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 38:
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 39:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 40:
      if (eof) ADVANCE(43);
      if (lookahead == '\n') SKIP(42)
      END_STATE();
    case 41:
      if (eof) ADVANCE(43);
      if (lookahead == '\n') SKIP(42)
      if (lookahead == '\r') SKIP(40)
      END_STATE();
    case 42:
      if (eof) ADVANCE(43);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '?') ADVANCE(12);
      if (lookahead == '\\') SKIP(41)
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == 'p') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_unexport);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(45);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__until_newline_token1);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ',') ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__until_newline_token1);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ',') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__NL);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 7, .external_lex_state = 1},
  [5] = {.lex_state = 7, .external_lex_state = 1},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 0},
};

enum {
  ts_external_token__var_name = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__var_name] = sym__var_name,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__var_name] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_QMARK_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_unexport] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__var_name] = ACTIONS(1),
  },
  [1] = {
    [sym_makefile] = STATE(14),
    [sym__thing] = STATE(2),
    [sym__assignments] = STATE(2),
    [sym_variable_assignment] = STATE(2),
    [sym__var_modifier] = STATE(9),
    [aux_sym_makefile_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_export] = ACTIONS(7),
    [anon_sym_unexport] = ACTIONS(7),
    [anon_sym_override] = ACTIONS(7),
    [anon_sym_private] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym__var_modifier,
    ACTIONS(7), 4,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_private,
    STATE(3), 4,
      sym__thing,
      sym__assignments,
      sym_variable_assignment,
      aux_sym_makefile_repeat1,
  [22] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym__var_modifier,
    ACTIONS(13), 4,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_private,
    STATE(3), 4,
      sym__thing,
      sym__assignments,
      sym_variable_assignment,
      aux_sym_makefile_repeat1,
  [44] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(18), 1,
      sym__var_name,
    STATE(5), 1,
      aux_sym_var_name_repeat1,
    ACTIONS(16), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [61] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 1,
      sym__var_name,
    STATE(5), 1,
      aux_sym_var_name_repeat1,
    ACTIONS(20), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [78] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 5,
      anon_sym_EQ,
      anon_sym_COLON_EQ,
      anon_sym_COLON_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_PLUS_EQ,
  [89] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 5,
      ts_builtin_sym_end,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_private,
  [100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      anon_sym_export,
      anon_sym_unexport,
      anon_sym_override,
      anon_sym_private,
  [111] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym__var_name,
    STATE(4), 1,
      aux_sym_var_name_repeat1,
    STATE(6), 1,
      sym_var_name,
  [124] = 4,
    ACTIONS(33), 1,
      aux_sym__until_newline_token1,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym__NL,
    STATE(11), 1,
      aux_sym__until_newline,
  [137] = 4,
    ACTIONS(33), 1,
      aux_sym__until_newline_token1,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym__NL,
    STATE(12), 1,
      aux_sym__until_newline,
  [150] = 4,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(41), 1,
      aux_sym__until_newline_token1,
    ACTIONS(44), 1,
      sym__NL,
    STATE(12), 1,
      aux_sym__until_newline,
  [163] = 3,
    ACTIONS(35), 1,
      sym_comment,
    ACTIONS(46), 1,
      aux_sym__until_newline_token1,
    ACTIONS(48), 1,
      sym__NL,
  [173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 61,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 89,
  [SMALL_STATE(8)] = 100,
  [SMALL_STATE(9)] = 111,
  [SMALL_STATE(10)] = 124,
  [SMALL_STATE(11)] = 137,
  [SMALL_STATE(12)] = 150,
  [SMALL_STATE(13)] = 163,
  [SMALL_STATE(14)] = 173,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makefile, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_makefile_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_makefile_repeat1, 2), SHIFT_REPEAT(9),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_name, 1),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_name_repeat1, 2),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_name_repeat1, 2), SHIFT_REPEAT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 4, .production_id = 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment, 5, .production_id = 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__until_newline, 2), SHIFT_REPEAT(13),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__until_newline, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__until_newline, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__until_newline, 1),
  [50] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_make_external_scanner_create(void);
void tree_sitter_make_external_scanner_destroy(void *);
bool tree_sitter_make_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_make_external_scanner_serialize(void *, char *);
void tree_sitter_make_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_make(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_make_external_scanner_create,
      tree_sitter_make_external_scanner_destroy,
      tree_sitter_make_external_scanner_scan,
      tree_sitter_make_external_scanner_serialize,
      tree_sitter_make_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
