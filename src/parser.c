#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 111
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  aux_sym__terminator_token1 = 2,
  anon_sym_SEMI = 3,
  anon_sym_DQUOTE = 4,
  aux_sym_quoted_string_token1 = 5,
  anon_sym_PERCENT = 6,
  anon_sym_LPAREN = 7,
  anon_sym_LBRACK = 8,
  anon_sym_LBRACE = 9,
  anon_sym_LT = 10,
  anon_sym_PIPE = 11,
  aux_sym_percent_string_token1 = 12,
  anon_sym_RPAREN = 13,
  anon_sym_RBRACK = 14,
  anon_sym_RBRACE = 15,
  anon_sym_GT = 16,
  anon_sym_0b = 17,
  anon_sym_0 = 18,
  anon_sym_1 = 19,
  anon_sym__ = 20,
  anon_sym_0o = 21,
  aux_sym_integer_token1 = 22,
  anon_sym_0x = 23,
  aux_sym_integer_token2 = 24,
  aux_sym_integer_token3 = 25,
  aux_sym_integer_token4 = 26,
  anon_sym_0_ = 27,
  anon_sym_i8 = 28,
  anon_sym_i16 = 29,
  anon_sym_i32 = 30,
  anon_sym_i64 = 31,
  anon_sym_i128 = 32,
  anon_sym_u8 = 33,
  anon_sym_u16 = 34,
  anon_sym_u32 = 35,
  anon_sym_u64 = 36,
  anon_sym_u128 = 37,
  anon_sym_DOT = 38,
  anon_sym_e = 39,
  anon_sym_E = 40,
  anon_sym_PLUS = 41,
  anon_sym_DASH = 42,
  anon_sym_f32 = 43,
  anon_sym_f64 = 44,
  sym_nil = 45,
  sym_true = 46,
  sym_false = 47,
  sym_source_file = 48,
  sym__terminator = 49,
  sym__statements = 50,
  sym__statement = 51,
  sym_string = 52,
  sym_chained_string = 53,
  sym_quoted_string = 54,
  sym_percent_string = 55,
  sym_integer = 56,
  sym_float = 57,
  aux_sym__statements_repeat1 = 58,
  aux_sym_chained_string_repeat1 = 59,
  aux_sym_quoted_string_repeat1 = 60,
  aux_sym_percent_string_repeat1 = 61,
  aux_sym_integer_repeat1 = 62,
  aux_sym_integer_repeat2 = 63,
  aux_sym_integer_repeat3 = 64,
  aux_sym_integer_repeat4 = 65,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym__terminator_token1] = "_terminator_token1",
  [anon_sym_SEMI] = ";",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LPAREN] = "(",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LBRACE] = "{",
  [anon_sym_LT] = "<",
  [anon_sym_PIPE] = "|",
  [aux_sym_percent_string_token1] = "percent_string_token1",
  [anon_sym_RPAREN] = ")",
  [anon_sym_RBRACK] = "]",
  [anon_sym_RBRACE] = "}",
  [anon_sym_GT] = ">",
  [anon_sym_0b] = "0b",
  [anon_sym_0] = "0",
  [anon_sym_1] = "1",
  [anon_sym__] = "_",
  [anon_sym_0o] = "0o",
  [aux_sym_integer_token1] = "integer_token1",
  [anon_sym_0x] = "0x",
  [aux_sym_integer_token2] = "integer_token2",
  [aux_sym_integer_token3] = "integer_token3",
  [aux_sym_integer_token4] = "integer_token4",
  [anon_sym_0_] = "0_",
  [anon_sym_i8] = "i8",
  [anon_sym_i16] = "i16",
  [anon_sym_i32] = "i32",
  [anon_sym_i64] = "i64",
  [anon_sym_i128] = "i128",
  [anon_sym_u8] = "u8",
  [anon_sym_u16] = "u16",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_u128] = "u128",
  [anon_sym_DOT] = ".",
  [anon_sym_e] = "e",
  [anon_sym_E] = "E",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [sym_nil] = "nil",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_source_file] = "source_file",
  [sym__terminator] = "_terminator",
  [sym__statements] = "_statements",
  [sym__statement] = "_statement",
  [sym_string] = "string",
  [sym_chained_string] = "chained_string",
  [sym_quoted_string] = "quoted_string",
  [sym_percent_string] = "percent_string",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [aux_sym__statements_repeat1] = "_statements_repeat1",
  [aux_sym_chained_string_repeat1] = "chained_string_repeat1",
  [aux_sym_quoted_string_repeat1] = "quoted_string_repeat1",
  [aux_sym_percent_string_repeat1] = "percent_string_repeat1",
  [aux_sym_integer_repeat1] = "integer_repeat1",
  [aux_sym_integer_repeat2] = "integer_repeat2",
  [aux_sym_integer_repeat3] = "integer_repeat3",
  [aux_sym_integer_repeat4] = "integer_repeat4",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym__terminator_token1] = aux_sym__terminator_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_token1] = aux_sym_quoted_string_token1,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym_percent_string_token1] = aux_sym_percent_string_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_0b] = anon_sym_0b,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_1] = anon_sym_1,
  [anon_sym__] = anon_sym__,
  [anon_sym_0o] = anon_sym_0o,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [anon_sym_0x] = anon_sym_0x,
  [aux_sym_integer_token2] = aux_sym_integer_token2,
  [aux_sym_integer_token3] = aux_sym_integer_token3,
  [aux_sym_integer_token4] = aux_sym_integer_token4,
  [anon_sym_0_] = anon_sym_0_,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_i128] = anon_sym_i128,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_u128] = anon_sym_u128,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_f64] = anon_sym_f64,
  [sym_nil] = sym_nil,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_source_file] = sym_source_file,
  [sym__terminator] = sym__terminator,
  [sym__statements] = sym__statements,
  [sym__statement] = sym__statement,
  [sym_string] = sym_string,
  [sym_chained_string] = sym_chained_string,
  [sym_quoted_string] = sym_quoted_string,
  [sym_percent_string] = sym_percent_string,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [aux_sym__statements_repeat1] = aux_sym__statements_repeat1,
  [aux_sym_chained_string_repeat1] = aux_sym_chained_string_repeat1,
  [aux_sym_quoted_string_repeat1] = aux_sym_quoted_string_repeat1,
  [aux_sym_percent_string_repeat1] = aux_sym_percent_string_repeat1,
  [aux_sym_integer_repeat1] = aux_sym_integer_repeat1,
  [aux_sym_integer_repeat2] = aux_sym_integer_repeat2,
  [aux_sym_integer_repeat3] = aux_sym_integer_repeat3,
  [aux_sym_integer_repeat4] = aux_sym_integer_repeat4,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__terminator_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_percent_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_0o] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0x] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_integer_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token4] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__terminator] = {
    .visible = false,
    .named = true,
  },
  [sym__statements] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_chained_string] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_percent_string] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_chained_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_percent_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_repeat4] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 6,
  [12] = 12,
  [13] = 7,
  [14] = 14,
  [15] = 15,
  [16] = 12,
  [17] = 10,
  [18] = 18,
  [19] = 19,
  [20] = 14,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 15,
  [26] = 18,
  [27] = 21,
  [28] = 19,
  [29] = 29,
  [30] = 23,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 33,
  [37] = 34,
  [38] = 31,
  [39] = 32,
  [40] = 35,
  [41] = 41,
  [42] = 42,
  [43] = 42,
  [44] = 41,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 47,
  [53] = 50,
  [54] = 48,
  [55] = 45,
  [56] = 51,
  [57] = 49,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 59,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 58,
  [66] = 66,
  [67] = 67,
  [68] = 63,
  [69] = 64,
  [70] = 62,
  [71] = 60,
  [72] = 72,
  [73] = 72,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 74,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 4,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 79,
  [87] = 87,
  [88] = 88,
  [89] = 81,
  [90] = 90,
  [91] = 77,
  [92] = 92,
  [93] = 84,
  [94] = 83,
  [95] = 87,
  [96] = 80,
  [97] = 90,
  [98] = 92,
  [99] = 99,
  [100] = 100,
  [101] = 100,
  [102] = 76,
  [103] = 99,
  [104] = 75,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 105,
  [110] = 106,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '0') ADVANCE(50);
      if (lookahead == '1') ADVANCE(51);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(44);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(40);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '~' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == '1') ADVANCE(51);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead > '^' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(43);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == ']') ADVANCE(44);
      if (lookahead == '|') ADVANCE(40);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 7:
      if (lookahead == '+') ADVANCE(85);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '3') ADVANCE(12);
      if (lookahead == '6') ADVANCE(17);
      if (lookahead == '8') ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(14);
      if (lookahead == '3') ADVANCE(13);
      if (lookahead == '6') ADVANCE(18);
      if (lookahead == '8') ADVANCE(71);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(87);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(19);
      if (lookahead == '6') ADVANCE(63);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(65);
      END_STATE();
    case 13:
      if (lookahead == '2') ADVANCE(75);
      END_STATE();
    case 14:
      if (lookahead == '2') ADVANCE(20);
      if (lookahead == '6') ADVANCE(73);
      END_STATE();
    case 15:
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '4') ADVANCE(88);
      END_STATE();
    case 17:
      if (lookahead == '4') ADVANCE(67);
      END_STATE();
    case 18:
      if (lookahead == '4') ADVANCE(77);
      END_STATE();
    case 19:
      if (lookahead == '8') ADVANCE(69);
      END_STATE();
    case 20:
      if (lookahead == '8') ADVANCE(79);
      END_STATE();
    case 21:
      if (eof) ADVANCE(26);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(59);
      END_STATE();
    case 22:
      if (eof) ADVANCE(26);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == '1') ADVANCE(51);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(22)
      if (lookahead != 0 &&
          lookahead > '^' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 23:
      if (eof) ADVANCE(26);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 24:
      if (eof) ADVANCE(26);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(24)
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(53);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '%') ADVANCE(35);
      if (lookahead == '0') ADVANCE(49);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead != 0 &&
          lookahead > '^' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__terminator_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__terminator_token1);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__terminator_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(3);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym__terminator_token1);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_percent_string_token1);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_percent_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_0b);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '_') ADVANCE(60);
      if (lookahead == 'b') ADVANCE(47);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_0o);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_0_);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_i8);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_i16);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_i32);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_i64);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_i128);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_u8);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_u16);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_u32);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_u64);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_u128);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(91);
      if (lookahead == '3') ADVANCE(92);
      if (lookahead == '6') ADVANCE(95);
      if (lookahead == '8') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(94);
      if (lookahead == '3') ADVANCE(93);
      if (lookahead == '6') ADVANCE(96);
      if (lookahead == '8') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(97);
      if (lookahead == '6') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(98);
      if (lookahead == '6') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(99);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '_') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(3);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 25},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 21},
  [5] = {.lex_state = 21},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 21},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 23},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 23},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 25},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 21},
  [36] = {.lex_state = 21},
  [37] = {.lex_state = 21},
  [38] = {.lex_state = 21},
  [39] = {.lex_state = 21},
  [40] = {.lex_state = 21},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 21},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 21},
  [48] = {.lex_state = 21},
  [49] = {.lex_state = 21},
  [50] = {.lex_state = 21},
  [51] = {.lex_state = 21},
  [52] = {.lex_state = 21},
  [53] = {.lex_state = 21},
  [54] = {.lex_state = 21},
  [55] = {.lex_state = 21},
  [56] = {.lex_state = 21},
  [57] = {.lex_state = 21},
  [58] = {.lex_state = 21},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 21},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 21},
  [63] = {.lex_state = 21},
  [64] = {.lex_state = 21},
  [65] = {.lex_state = 21},
  [66] = {.lex_state = 21},
  [67] = {.lex_state = 21},
  [68] = {.lex_state = 21},
  [69] = {.lex_state = 21},
  [70] = {.lex_state = 21},
  [71] = {.lex_state = 21},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 21},
  [76] = {.lex_state = 21},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 21},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 21},
  [84] = {.lex_state = 21},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 21},
  [88] = {.lex_state = 21},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 21},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 21},
  [93] = {.lex_state = 21},
  [94] = {.lex_state = 21},
  [95] = {.lex_state = 21},
  [96] = {.lex_state = 21},
  [97] = {.lex_state = 21},
  [98] = {.lex_state = 21},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 21},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 21},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_0o] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [anon_sym_0x] = ACTIONS(1),
    [aux_sym_integer_token2] = ACTIONS(1),
    [aux_sym_integer_token3] = ACTIONS(1),
    [aux_sym_integer_token4] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_i128] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_u128] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(107),
    [sym__statements] = STATE(108),
    [sym__statement] = STATE(66),
    [sym_string] = STATE(34),
    [sym_chained_string] = STATE(66),
    [sym_quoted_string] = STATE(62),
    [sym_percent_string] = STATE(62),
    [sym_integer] = STATE(66),
    [sym_float] = STATE(66),
    [aux_sym__statements_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_0b] = ACTIONS(13),
    [anon_sym_0] = ACTIONS(15),
    [anon_sym_0o] = ACTIONS(17),
    [anon_sym_0x] = ACTIONS(19),
    [aux_sym_integer_token3] = ACTIONS(21),
    [anon_sym_0_] = ACTIONS(21),
    [sym_nil] = ACTIONS(5),
    [sym_true] = ACTIONS(5),
    [sym_false] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      anon_sym_SEMI,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(34), 1,
      anon_sym_PERCENT,
    ACTIONS(37), 1,
      anon_sym_0b,
    ACTIONS(40), 1,
      anon_sym_0,
    ACTIONS(43), 1,
      anon_sym_0o,
    ACTIONS(46), 1,
      anon_sym_0x,
    STATE(2), 1,
      aux_sym__statements_repeat1,
    STATE(37), 1,
      sym_string,
    ACTIONS(49), 2,
      aux_sym_integer_token3,
      anon_sym_0_,
    STATE(70), 2,
      sym_quoted_string,
      sym_percent_string,
    ACTIONS(25), 4,
      sym_nil,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(88), 4,
      sym__statement,
      sym_chained_string,
      sym_integer,
      sym_float,
  [51] = 14,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      anon_sym_0b,
    ACTIONS(15), 1,
      anon_sym_0,
    ACTIONS(17), 1,
      anon_sym_0o,
    ACTIONS(19), 1,
      anon_sym_0x,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      anon_sym_SEMI,
    STATE(2), 1,
      aux_sym__statements_repeat1,
    STATE(34), 1,
      sym_string,
    ACTIONS(21), 2,
      aux_sym_integer_token3,
      anon_sym_0_,
    STATE(62), 2,
      sym_quoted_string,
      sym_percent_string,
    ACTIONS(54), 4,
      sym_nil,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(67), 4,
      sym__statement,
      sym_chained_string,
      sym_integer,
      sym_float,
  [102] = 4,
    ACTIONS(62), 1,
      aux_sym_integer_token4,
    STATE(4), 1,
      aux_sym_integer_repeat4,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(60), 16,
      anon_sym_SEMI,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      anon_sym_f32,
      anon_sym_f64,
  [131] = 4,
    ACTIONS(58), 1,
      aux_sym__terminator_token1,
    ACTIONS(65), 1,
      aux_sym_integer_token4,
    STATE(5), 1,
      aux_sym_integer_repeat4,
    ACTIONS(60), 16,
      anon_sym_SEMI,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
      anon_sym_DOT,
      anon_sym_e,
      anon_sym_E,
      anon_sym_f32,
      anon_sym_f64,
  [159] = 5,
    ACTIONS(70), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(72), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(74), 10,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [187] = 4,
    STATE(7), 1,
      aux_sym_integer_repeat1,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(80), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(78), 11,
      anon_sym_SEMI,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [213] = 5,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      aux_sym_integer_repeat1,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(87), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(89), 10,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [241] = 5,
    ACTIONS(83), 1,
      aux_sym__terminator_token1,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    STATE(13), 1,
      aux_sym_integer_repeat1,
    ACTIONS(91), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(93), 10,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [268] = 6,
    ACTIONS(70), 1,
      anon_sym_SEMI,
    ACTIONS(95), 1,
      aux_sym_integer_token4,
    ACTIONS(97), 1,
      anon_sym_DOT,
    STATE(78), 1,
      aux_sym_integer_repeat4,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(74), 10,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [297] = 5,
    ACTIONS(68), 1,
      aux_sym__terminator_token1,
    ACTIONS(70), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      aux_sym_integer_repeat1,
    ACTIONS(99), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(101), 10,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [324] = 6,
    ACTIONS(70), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(103), 1,
      aux_sym_integer_token4,
    STATE(14), 1,
      aux_sym_integer_repeat4,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(74), 10,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [353] = 4,
    ACTIONS(76), 1,
      aux_sym__terminator_token1,
    STATE(13), 1,
      aux_sym_integer_repeat1,
    ACTIONS(105), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(78), 11,
      anon_sym_SEMI,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [378] = 6,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(108), 1,
      aux_sym_integer_token4,
    ACTIONS(110), 1,
      anon_sym_DOT,
    STATE(4), 1,
      aux_sym_integer_repeat4,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(89), 10,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [407] = 5,
    ACTIONS(70), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      aux_sym_integer_token2,
    STATE(19), 1,
      aux_sym_integer_repeat3,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(74), 10,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [433] = 6,
    ACTIONS(68), 1,
      aux_sym__terminator_token1,
    ACTIONS(70), 1,
      anon_sym_SEMI,
    ACTIONS(114), 1,
      aux_sym_integer_token4,
    ACTIONS(116), 1,
      anon_sym_DOT,
    STATE(20), 1,
      aux_sym_integer_repeat4,
    ACTIONS(101), 10,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [461] = 6,
    ACTIONS(68), 1,
      aux_sym__terminator_token1,
    ACTIONS(70), 1,
      anon_sym_SEMI,
    ACTIONS(116), 1,
      anon_sym_DOT,
    ACTIONS(118), 1,
      aux_sym_integer_token4,
    STATE(74), 1,
      aux_sym_integer_repeat4,
    ACTIONS(101), 10,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [489] = 5,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(120), 1,
      aux_sym_integer_token1,
    STATE(23), 1,
      aux_sym_integer_repeat2,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(89), 10,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [515] = 5,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(122), 1,
      aux_sym_integer_token2,
    STATE(22), 1,
      aux_sym_integer_repeat3,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(89), 10,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [541] = 6,
    ACTIONS(83), 1,
      aux_sym__terminator_token1,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(124), 1,
      aux_sym_integer_token4,
    ACTIONS(126), 1,
      anon_sym_DOT,
    STATE(5), 1,
      aux_sym_integer_repeat4,
    ACTIONS(93), 10,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [569] = 5,
    ACTIONS(70), 1,
      anon_sym_SEMI,
    ACTIONS(128), 1,
      aux_sym_integer_token1,
    STATE(18), 1,
      aux_sym_integer_repeat2,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(74), 10,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [595] = 4,
    ACTIONS(134), 1,
      aux_sym_integer_token2,
    STATE(22), 1,
      aux_sym_integer_repeat3,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(132), 11,
      anon_sym_SEMI,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [619] = 4,
    ACTIONS(141), 1,
      aux_sym_integer_token1,
    STATE(23), 1,
      aux_sym_integer_repeat2,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(139), 11,
      anon_sym_SEMI,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [643] = 4,
    ACTIONS(130), 1,
      aux_sym__terminator_token1,
    ACTIONS(144), 1,
      aux_sym_integer_token2,
    STATE(24), 1,
      aux_sym_integer_repeat3,
    ACTIONS(132), 11,
      anon_sym_SEMI,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [666] = 5,
    ACTIONS(68), 1,
      aux_sym__terminator_token1,
    ACTIONS(70), 1,
      anon_sym_SEMI,
    ACTIONS(147), 1,
      aux_sym_integer_token2,
    STATE(28), 1,
      aux_sym_integer_repeat3,
    ACTIONS(101), 10,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [691] = 5,
    ACTIONS(83), 1,
      aux_sym__terminator_token1,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(149), 1,
      aux_sym_integer_token1,
    STATE(30), 1,
      aux_sym_integer_repeat2,
    ACTIONS(93), 10,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [716] = 5,
    ACTIONS(68), 1,
      aux_sym__terminator_token1,
    ACTIONS(70), 1,
      anon_sym_SEMI,
    ACTIONS(151), 1,
      aux_sym_integer_token1,
    STATE(26), 1,
      aux_sym_integer_repeat2,
    ACTIONS(101), 10,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [741] = 5,
    ACTIONS(83), 1,
      aux_sym__terminator_token1,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(153), 1,
      aux_sym_integer_token2,
    STATE(24), 1,
      aux_sym_integer_repeat3,
    ACTIONS(93), 10,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [766] = 2,
    ACTIONS(155), 5,
      anon_sym_0,
      sym_nil,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(23), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
      anon_sym_0b,
      anon_sym_0o,
      anon_sym_0x,
      aux_sym_integer_token3,
      anon_sym_0_,
  [785] = 4,
    ACTIONS(137), 1,
      aux_sym__terminator_token1,
    ACTIONS(157), 1,
      aux_sym_integer_token1,
    STATE(30), 1,
      aux_sym_integer_repeat2,
    ACTIONS(139), 11,
      anon_sym_SEMI,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_i128,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_u128,
  [808] = 6,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      anon_sym_PERCENT,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    STATE(33), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(62), 2,
      sym_quoted_string,
      sym_percent_string,
  [830] = 6,
    ACTIONS(108), 1,
      aux_sym_integer_token4,
    ACTIONS(170), 1,
      anon_sym_SEMI,
    STATE(4), 1,
      aux_sym_integer_repeat4,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(172), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(174), 2,
      anon_sym_f32,
      anon_sym_f64,
  [852] = 6,
    ACTIONS(178), 1,
      anon_sym_SEMI,
    ACTIONS(180), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      anon_sym_PERCENT,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    STATE(33), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(62), 2,
      sym_quoted_string,
      sym_percent_string,
  [874] = 6,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(166), 1,
      anon_sym_PERCENT,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    STATE(31), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(62), 2,
      sym_quoted_string,
      sym_percent_string,
  [896] = 6,
    ACTIONS(108), 1,
      aux_sym_integer_token4,
    ACTIONS(192), 1,
      anon_sym_SEMI,
    STATE(4), 1,
      aux_sym_integer_repeat4,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(194), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(196), 2,
      anon_sym_f32,
      anon_sym_f64,
  [918] = 6,
    ACTIONS(176), 1,
      aux_sym__terminator_token1,
    ACTIONS(178), 1,
      anon_sym_SEMI,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_PERCENT,
    STATE(36), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(70), 2,
      sym_quoted_string,
      sym_percent_string,
  [939] = 6,
    ACTIONS(186), 1,
      aux_sym__terminator_token1,
    ACTIONS(188), 1,
      anon_sym_SEMI,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_PERCENT,
    STATE(38), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(70), 2,
      sym_quoted_string,
      sym_percent_string,
  [960] = 6,
    ACTIONS(160), 1,
      aux_sym__terminator_token1,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      anon_sym_PERCENT,
    STATE(36), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(70), 2,
      sym_quoted_string,
      sym_percent_string,
  [981] = 6,
    ACTIONS(124), 1,
      aux_sym_integer_token4,
    ACTIONS(168), 1,
      aux_sym__terminator_token1,
    ACTIONS(170), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      aux_sym_integer_repeat4,
    ACTIONS(208), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(210), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1002] = 6,
    ACTIONS(124), 1,
      aux_sym_integer_token4,
    ACTIONS(190), 1,
      aux_sym__terminator_token1,
    ACTIONS(192), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      aux_sym_integer_repeat4,
    ACTIONS(212), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(214), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1023] = 3,
    ACTIONS(218), 1,
      aux_sym_percent_string_token1,
    STATE(42), 1,
      aux_sym_percent_string_repeat1,
    ACTIONS(216), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1037] = 3,
    ACTIONS(222), 1,
      aux_sym_percent_string_token1,
    STATE(46), 1,
      aux_sym_percent_string_repeat1,
    ACTIONS(220), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1051] = 3,
    ACTIONS(222), 1,
      aux_sym_percent_string_token1,
    STATE(46), 1,
      aux_sym_percent_string_repeat1,
    ACTIONS(224), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1065] = 3,
    ACTIONS(228), 1,
      aux_sym_percent_string_token1,
    STATE(43), 1,
      aux_sym_percent_string_repeat1,
    ACTIONS(226), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1079] = 5,
    ACTIONS(108), 1,
      aux_sym_integer_token4,
    ACTIONS(232), 1,
      anon_sym_SEMI,
    STATE(4), 1,
      aux_sym_integer_repeat4,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(234), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1097] = 3,
    ACTIONS(238), 1,
      aux_sym_percent_string_token1,
    STATE(46), 1,
      aux_sym_percent_string_repeat1,
    ACTIONS(236), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1111] = 5,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    ACTIONS(245), 1,
      aux_sym_integer_token4,
    STATE(45), 1,
      aux_sym_integer_repeat4,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(247), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1129] = 5,
    ACTIONS(251), 1,
      anon_sym_SEMI,
    ACTIONS(253), 1,
      aux_sym_integer_token4,
    STATE(50), 1,
      aux_sym_integer_repeat4,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(255), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1147] = 5,
    ACTIONS(108), 1,
      aux_sym_integer_token4,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    STATE(4), 1,
      aux_sym_integer_repeat4,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(247), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1165] = 5,
    ACTIONS(108), 1,
      aux_sym_integer_token4,
    ACTIONS(259), 1,
      anon_sym_SEMI,
    STATE(4), 1,
      aux_sym_integer_repeat4,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(261), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1183] = 5,
    ACTIONS(259), 1,
      anon_sym_SEMI,
    ACTIONS(263), 1,
      aux_sym_integer_token4,
    STATE(49), 1,
      aux_sym_integer_repeat4,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(261), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1201] = 5,
    ACTIONS(241), 1,
      aux_sym__terminator_token1,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    ACTIONS(265), 1,
      aux_sym_integer_token4,
    STATE(55), 1,
      aux_sym_integer_repeat4,
    ACTIONS(267), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1218] = 5,
    ACTIONS(124), 1,
      aux_sym_integer_token4,
    ACTIONS(257), 1,
      aux_sym__terminator_token1,
    ACTIONS(259), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      aux_sym_integer_repeat4,
    ACTIONS(269), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1235] = 5,
    ACTIONS(249), 1,
      aux_sym__terminator_token1,
    ACTIONS(251), 1,
      anon_sym_SEMI,
    ACTIONS(271), 1,
      aux_sym_integer_token4,
    STATE(53), 1,
      aux_sym_integer_repeat4,
    ACTIONS(273), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1252] = 5,
    ACTIONS(124), 1,
      aux_sym_integer_token4,
    ACTIONS(230), 1,
      aux_sym__terminator_token1,
    ACTIONS(232), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      aux_sym_integer_repeat4,
    ACTIONS(275), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1269] = 5,
    ACTIONS(257), 1,
      aux_sym__terminator_token1,
    ACTIONS(259), 1,
      anon_sym_SEMI,
    ACTIONS(277), 1,
      aux_sym_integer_token4,
    STATE(57), 1,
      aux_sym_integer_repeat4,
    ACTIONS(269), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1286] = 5,
    ACTIONS(124), 1,
      aux_sym_integer_token4,
    ACTIONS(241), 1,
      aux_sym__terminator_token1,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      aux_sym_integer_repeat4,
    ACTIONS(267), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1303] = 2,
    ACTIONS(279), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(281), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [1313] = 1,
    ACTIONS(283), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_PIPE,
  [1321] = 2,
    ACTIONS(285), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(287), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [1331] = 1,
    ACTIONS(289), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_PIPE,
  [1339] = 2,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(293), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [1349] = 2,
    ACTIONS(295), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(297), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [1359] = 2,
    ACTIONS(299), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(301), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [1369] = 2,
    ACTIONS(279), 1,
      aux_sym__terminator_token1,
    ACTIONS(281), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [1378] = 4,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(303), 1,
      aux_sym__terminator_token1,
    ACTIONS(305), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      sym__terminator,
  [1391] = 4,
    ACTIONS(303), 1,
      aux_sym__terminator_token1,
    ACTIONS(305), 1,
      anon_sym_SEMI,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym__terminator,
  [1404] = 2,
    ACTIONS(295), 1,
      aux_sym__terminator_token1,
    ACTIONS(297), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [1413] = 2,
    ACTIONS(299), 1,
      aux_sym__terminator_token1,
    ACTIONS(301), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [1422] = 2,
    ACTIONS(291), 1,
      aux_sym__terminator_token1,
    ACTIONS(293), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [1431] = 2,
    ACTIONS(285), 1,
      aux_sym__terminator_token1,
    ACTIONS(287), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [1440] = 3,
    ACTIONS(309), 1,
      anon_sym_DQUOTE,
    ACTIONS(311), 1,
      aux_sym_quoted_string_token1,
    STATE(85), 1,
      aux_sym_quoted_string_repeat1,
  [1450] = 3,
    ACTIONS(311), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    STATE(85), 1,
      aux_sym_quoted_string_repeat1,
  [1460] = 3,
    ACTIONS(315), 1,
      aux_sym_integer_token4,
    ACTIONS(317), 1,
      anon_sym_DOT,
    STATE(82), 1,
      aux_sym_integer_repeat4,
  [1470] = 2,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [1478] = 2,
    ACTIONS(321), 1,
      anon_sym_SEMI,
    ACTIONS(319), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [1486] = 2,
    ACTIONS(323), 1,
      aux_sym_integer_token4,
    ACTIONS(325), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1494] = 3,
    ACTIONS(315), 1,
      aux_sym_integer_token4,
    ACTIONS(327), 1,
      anon_sym_DOT,
    STATE(82), 1,
      aux_sym_integer_repeat4,
  [1504] = 3,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      aux_sym_quoted_string_token1,
    STATE(72), 1,
      aux_sym_quoted_string_repeat1,
  [1514] = 2,
    ACTIONS(335), 1,
      anon_sym_SEMI,
    ACTIONS(333), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [1522] = 2,
    ACTIONS(337), 1,
      aux_sym_integer_token4,
    ACTIONS(339), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1530] = 3,
    ACTIONS(58), 1,
      anon_sym_DOT,
    ACTIONS(341), 1,
      aux_sym_integer_token4,
    STATE(82), 1,
      aux_sym_integer_repeat4,
  [1540] = 2,
    ACTIONS(232), 1,
      anon_sym_SEMI,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [1548] = 2,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [1556] = 3,
    ACTIONS(344), 1,
      anon_sym_DQUOTE,
    ACTIONS(346), 1,
      aux_sym_quoted_string_token1,
    STATE(85), 1,
      aux_sym_quoted_string_repeat1,
  [1566] = 3,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    ACTIONS(351), 1,
      aux_sym_quoted_string_token1,
    STATE(73), 1,
      aux_sym_quoted_string_repeat1,
  [1576] = 2,
    ACTIONS(259), 1,
      anon_sym_SEMI,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [1584] = 3,
    ACTIONS(303), 1,
      aux_sym__terminator_token1,
    ACTIONS(305), 1,
      anon_sym_SEMI,
    STATE(29), 1,
      sym__terminator,
  [1594] = 2,
    ACTIONS(353), 1,
      aux_sym_integer_token4,
    ACTIONS(355), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1602] = 2,
    ACTIONS(251), 1,
      anon_sym_SEMI,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [1610] = 2,
    ACTIONS(357), 1,
      aux_sym_integer_token4,
    ACTIONS(359), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1618] = 2,
    ACTIONS(192), 1,
      anon_sym_SEMI,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [1626] = 2,
    ACTIONS(241), 1,
      aux_sym__terminator_token1,
    ACTIONS(243), 1,
      anon_sym_SEMI,
  [1633] = 2,
    ACTIONS(230), 1,
      aux_sym__terminator_token1,
    ACTIONS(232), 1,
      anon_sym_SEMI,
  [1640] = 2,
    ACTIONS(257), 1,
      aux_sym__terminator_token1,
    ACTIONS(259), 1,
      anon_sym_SEMI,
  [1647] = 2,
    ACTIONS(333), 1,
      aux_sym__terminator_token1,
    ACTIONS(335), 1,
      anon_sym_SEMI,
  [1654] = 2,
    ACTIONS(249), 1,
      aux_sym__terminator_token1,
    ACTIONS(251), 1,
      anon_sym_SEMI,
  [1661] = 2,
    ACTIONS(190), 1,
      aux_sym__terminator_token1,
    ACTIONS(192), 1,
      anon_sym_SEMI,
  [1668] = 2,
    ACTIONS(361), 1,
      aux_sym_integer_token4,
    STATE(39), 1,
      aux_sym_integer_repeat4,
  [1675] = 2,
    ACTIONS(363), 1,
      aux_sym_integer_token4,
    STATE(35), 1,
      aux_sym_integer_repeat4,
  [1682] = 2,
    ACTIONS(365), 1,
      aux_sym_integer_token4,
    STATE(40), 1,
      aux_sym_integer_repeat4,
  [1689] = 2,
    ACTIONS(319), 1,
      aux_sym__terminator_token1,
    ACTIONS(321), 1,
      anon_sym_SEMI,
  [1696] = 2,
    ACTIONS(367), 1,
      aux_sym_integer_token4,
    STATE(32), 1,
      aux_sym_integer_repeat4,
  [1703] = 2,
    ACTIONS(83), 1,
      aux_sym__terminator_token1,
    ACTIONS(85), 1,
      anon_sym_SEMI,
  [1710] = 1,
    ACTIONS(357), 1,
      aux_sym_integer_token4,
  [1714] = 1,
    ACTIONS(369), 1,
      aux_sym_integer_token4,
  [1718] = 1,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
  [1722] = 1,
    ACTIONS(373), 1,
      ts_builtin_sym_end,
  [1726] = 1,
    ACTIONS(323), 1,
      aux_sym_integer_token4,
  [1730] = 1,
    ACTIONS(375), 1,
      aux_sym_integer_token4,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 131,
  [SMALL_STATE(6)] = 159,
  [SMALL_STATE(7)] = 187,
  [SMALL_STATE(8)] = 213,
  [SMALL_STATE(9)] = 241,
  [SMALL_STATE(10)] = 268,
  [SMALL_STATE(11)] = 297,
  [SMALL_STATE(12)] = 324,
  [SMALL_STATE(13)] = 353,
  [SMALL_STATE(14)] = 378,
  [SMALL_STATE(15)] = 407,
  [SMALL_STATE(16)] = 433,
  [SMALL_STATE(17)] = 461,
  [SMALL_STATE(18)] = 489,
  [SMALL_STATE(19)] = 515,
  [SMALL_STATE(20)] = 541,
  [SMALL_STATE(21)] = 569,
  [SMALL_STATE(22)] = 595,
  [SMALL_STATE(23)] = 619,
  [SMALL_STATE(24)] = 643,
  [SMALL_STATE(25)] = 666,
  [SMALL_STATE(26)] = 691,
  [SMALL_STATE(27)] = 716,
  [SMALL_STATE(28)] = 741,
  [SMALL_STATE(29)] = 766,
  [SMALL_STATE(30)] = 785,
  [SMALL_STATE(31)] = 808,
  [SMALL_STATE(32)] = 830,
  [SMALL_STATE(33)] = 852,
  [SMALL_STATE(34)] = 874,
  [SMALL_STATE(35)] = 896,
  [SMALL_STATE(36)] = 918,
  [SMALL_STATE(37)] = 939,
  [SMALL_STATE(38)] = 960,
  [SMALL_STATE(39)] = 981,
  [SMALL_STATE(40)] = 1002,
  [SMALL_STATE(41)] = 1023,
  [SMALL_STATE(42)] = 1037,
  [SMALL_STATE(43)] = 1051,
  [SMALL_STATE(44)] = 1065,
  [SMALL_STATE(45)] = 1079,
  [SMALL_STATE(46)] = 1097,
  [SMALL_STATE(47)] = 1111,
  [SMALL_STATE(48)] = 1129,
  [SMALL_STATE(49)] = 1147,
  [SMALL_STATE(50)] = 1165,
  [SMALL_STATE(51)] = 1183,
  [SMALL_STATE(52)] = 1201,
  [SMALL_STATE(53)] = 1218,
  [SMALL_STATE(54)] = 1235,
  [SMALL_STATE(55)] = 1252,
  [SMALL_STATE(56)] = 1269,
  [SMALL_STATE(57)] = 1286,
  [SMALL_STATE(58)] = 1303,
  [SMALL_STATE(59)] = 1313,
  [SMALL_STATE(60)] = 1321,
  [SMALL_STATE(61)] = 1331,
  [SMALL_STATE(62)] = 1339,
  [SMALL_STATE(63)] = 1349,
  [SMALL_STATE(64)] = 1359,
  [SMALL_STATE(65)] = 1369,
  [SMALL_STATE(66)] = 1378,
  [SMALL_STATE(67)] = 1391,
  [SMALL_STATE(68)] = 1404,
  [SMALL_STATE(69)] = 1413,
  [SMALL_STATE(70)] = 1422,
  [SMALL_STATE(71)] = 1431,
  [SMALL_STATE(72)] = 1440,
  [SMALL_STATE(73)] = 1450,
  [SMALL_STATE(74)] = 1460,
  [SMALL_STATE(75)] = 1470,
  [SMALL_STATE(76)] = 1478,
  [SMALL_STATE(77)] = 1486,
  [SMALL_STATE(78)] = 1494,
  [SMALL_STATE(79)] = 1504,
  [SMALL_STATE(80)] = 1514,
  [SMALL_STATE(81)] = 1522,
  [SMALL_STATE(82)] = 1530,
  [SMALL_STATE(83)] = 1540,
  [SMALL_STATE(84)] = 1548,
  [SMALL_STATE(85)] = 1556,
  [SMALL_STATE(86)] = 1566,
  [SMALL_STATE(87)] = 1576,
  [SMALL_STATE(88)] = 1584,
  [SMALL_STATE(89)] = 1594,
  [SMALL_STATE(90)] = 1602,
  [SMALL_STATE(91)] = 1610,
  [SMALL_STATE(92)] = 1618,
  [SMALL_STATE(93)] = 1626,
  [SMALL_STATE(94)] = 1633,
  [SMALL_STATE(95)] = 1640,
  [SMALL_STATE(96)] = 1647,
  [SMALL_STATE(97)] = 1654,
  [SMALL_STATE(98)] = 1661,
  [SMALL_STATE(99)] = 1668,
  [SMALL_STATE(100)] = 1675,
  [SMALL_STATE(101)] = 1682,
  [SMALL_STATE(102)] = 1689,
  [SMALL_STATE(103)] = 1696,
  [SMALL_STATE(104)] = 1703,
  [SMALL_STATE(105)] = 1710,
  [SMALL_STATE(106)] = 1714,
  [SMALL_STATE(107)] = 1718,
  [SMALL_STATE(108)] = 1722,
  [SMALL_STATE(109)] = 1726,
  [SMALL_STATE(110)] = 1730,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(88),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(86),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(59),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(11),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(17),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(27),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(25),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(16),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat4, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat4, 2),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat4, 2), SHIFT_REPEAT(4),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat4, 2), SHIFT_REPEAT(5),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(7),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(13),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat3, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat3, 2),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat3, 2), SHIFT_REPEAT(22),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat2, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat2, 2),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat2, 2), SHIFT_REPEAT(23),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat3, 2), SHIFT_REPEAT(24),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat2, 2), SHIFT_REPEAT(30),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chained_string, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chained_string, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chained_string_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_chained_string_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_chained_string_repeat1, 2), SHIFT_REPEAT(79),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_chained_string_repeat1, 2), SHIFT_REPEAT(61),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 4),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_chained_string_repeat1, 2), SHIFT_REPEAT(86),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_chained_string_repeat1, 2), SHIFT_REPEAT(59),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 8),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 8),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_percent_string_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_percent_string_repeat1, 2), SHIFT_REPEAT(46),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 7),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 7),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 5),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 5),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 6),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 6),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_percent_string, 4),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_percent_string, 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_percent_string, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_percent_string, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 2),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 3),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 9),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 9),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat4, 2), SHIFT_REPEAT(82),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(85),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [371] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_crystal(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
