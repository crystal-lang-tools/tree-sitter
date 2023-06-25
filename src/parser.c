#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 222
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
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
  anon_sym_COMMA = 48,
  anon_sym_of = 49,
  anon_sym_COLON_COLON = 50,
  sym__constant_segment = 51,
  sym_source_file = 52,
  sym__terminator = 53,
  sym__statements = 54,
  sym__statement = 55,
  sym_string = 56,
  sym_chained_string = 57,
  sym_quoted_string = 58,
  sym_percent_string = 59,
  sym_integer = 60,
  sym_float = 61,
  sym_array = 62,
  sym_constant = 63,
  aux_sym__statements_repeat1 = 64,
  aux_sym_chained_string_repeat1 = 65,
  aux_sym_quoted_string_repeat1 = 66,
  aux_sym_percent_string_repeat1 = 67,
  aux_sym_integer_repeat1 = 68,
  aux_sym_integer_repeat2 = 69,
  aux_sym_integer_repeat3 = 70,
  aux_sym_integer_repeat4 = 71,
  aux_sym_array_repeat1 = 72,
  aux_sym_constant_repeat1 = 73,
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
  [anon_sym_COMMA] = ",",
  [anon_sym_of] = "of",
  [anon_sym_COLON_COLON] = "::",
  [sym__constant_segment] = "_constant_segment",
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
  [sym_array] = "array",
  [sym_constant] = "constant",
  [aux_sym__statements_repeat1] = "_statements_repeat1",
  [aux_sym_chained_string_repeat1] = "chained_string_repeat1",
  [aux_sym_quoted_string_repeat1] = "quoted_string_repeat1",
  [aux_sym_percent_string_repeat1] = "percent_string_repeat1",
  [aux_sym_integer_repeat1] = "integer_repeat1",
  [aux_sym_integer_repeat2] = "integer_repeat2",
  [aux_sym_integer_repeat3] = "integer_repeat3",
  [aux_sym_integer_repeat4] = "integer_repeat4",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_constant_repeat1] = "constant_repeat1",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [sym__constant_segment] = sym__constant_segment,
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
  [sym_array] = sym_array,
  [sym_constant] = sym_constant,
  [aux_sym__statements_repeat1] = aux_sym__statements_repeat1,
  [aux_sym_chained_string_repeat1] = aux_sym_chained_string_repeat1,
  [aux_sym_quoted_string_repeat1] = aux_sym_quoted_string_repeat1,
  [aux_sym_percent_string_repeat1] = aux_sym_percent_string_repeat1,
  [aux_sym_integer_repeat1] = aux_sym_integer_repeat1,
  [aux_sym_integer_repeat2] = aux_sym_integer_repeat2,
  [aux_sym_integer_repeat3] = aux_sym_integer_repeat3,
  [aux_sym_integer_repeat4] = aux_sym_integer_repeat4,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_constant_repeat1] = aux_sym_constant_repeat1,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__constant_segment] = {
    .visible = false,
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
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
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
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_repeat1] = {
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
  [6] = 4,
  [7] = 7,
  [8] = 8,
  [9] = 8,
  [10] = 8,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 11,
  [17] = 17,
  [18] = 12,
  [19] = 11,
  [20] = 13,
  [21] = 12,
  [22] = 22,
  [23] = 23,
  [24] = 14,
  [25] = 17,
  [26] = 26,
  [27] = 22,
  [28] = 28,
  [29] = 14,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 22,
  [35] = 17,
  [36] = 33,
  [37] = 23,
  [38] = 30,
  [39] = 31,
  [40] = 26,
  [41] = 23,
  [42] = 31,
  [43] = 32,
  [44] = 26,
  [45] = 32,
  [46] = 33,
  [47] = 30,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 48,
  [54] = 50,
  [55] = 49,
  [56] = 52,
  [57] = 50,
  [58] = 48,
  [59] = 52,
  [60] = 49,
  [61] = 51,
  [62] = 51,
  [63] = 63,
  [64] = 63,
  [65] = 65,
  [66] = 65,
  [67] = 67,
  [68] = 65,
  [69] = 63,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 67,
  [77] = 67,
  [78] = 71,
  [79] = 74,
  [80] = 75,
  [81] = 72,
  [82] = 74,
  [83] = 72,
  [84] = 71,
  [85] = 75,
  [86] = 73,
  [87] = 73,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 90,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 90,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 98,
  [102] = 89,
  [103] = 92,
  [104] = 100,
  [105] = 89,
  [106] = 106,
  [107] = 95,
  [108] = 92,
  [109] = 96,
  [110] = 88,
  [111] = 99,
  [112] = 100,
  [113] = 93,
  [114] = 95,
  [115] = 98,
  [116] = 116,
  [117] = 96,
  [118] = 93,
  [119] = 99,
  [120] = 120,
  [121] = 121,
  [122] = 94,
  [123] = 88,
  [124] = 124,
  [125] = 125,
  [126] = 94,
  [127] = 127,
  [128] = 128,
  [129] = 106,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 128,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 125,
  [139] = 127,
  [140] = 137,
  [141] = 141,
  [142] = 136,
  [143] = 143,
  [144] = 116,
  [145] = 121,
  [146] = 141,
  [147] = 131,
  [148] = 133,
  [149] = 121,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 135,
  [154] = 116,
  [155] = 130,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 131,
  [160] = 137,
  [161] = 132,
  [162] = 162,
  [163] = 130,
  [164] = 136,
  [165] = 127,
  [166] = 106,
  [167] = 167,
  [168] = 168,
  [169] = 133,
  [170] = 170,
  [171] = 141,
  [172] = 132,
  [173] = 135,
  [174] = 128,
  [175] = 175,
  [176] = 125,
  [177] = 177,
  [178] = 178,
  [179] = 175,
  [180] = 150,
  [181] = 181,
  [182] = 152,
  [183] = 162,
  [184] = 158,
  [185] = 151,
  [186] = 186,
  [187] = 150,
  [188] = 162,
  [189] = 168,
  [190] = 175,
  [191] = 152,
  [192] = 168,
  [193] = 193,
  [194] = 177,
  [195] = 193,
  [196] = 143,
  [197] = 156,
  [198] = 181,
  [199] = 157,
  [200] = 151,
  [201] = 158,
  [202] = 156,
  [203] = 193,
  [204] = 157,
  [205] = 143,
  [206] = 177,
  [207] = 181,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 208,
  [212] = 212,
  [213] = 210,
  [214] = 209,
  [215] = 212,
  [216] = 209,
  [217] = 212,
  [218] = 208,
  [219] = 219,
  [220] = 210,
  [221] = 221,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '%') ADVANCE(42);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '+') ADVANCE(92);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == '1') ADVANCE(58);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == 'E') ADVANCE(91);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(98);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '|') ADVANCE(47);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(63);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '~' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '%') ADVANCE(42);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'E') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(66);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == '1') ADVANCE(58);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead > '^' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(60);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead > '^' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == '|') ADVANCE(47);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(92);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == 'E') ADVANCE(91);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(66);
      END_STATE();
    case 9:
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == '1') ADVANCE(58);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead > '^' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 10:
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 11:
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(60);
      END_STATE();
    case 12:
      if (lookahead == '1') ADVANCE(15);
      if (lookahead == '3') ADVANCE(16);
      if (lookahead == '6') ADVANCE(21);
      if (lookahead == '8') ADVANCE(68);
      END_STATE();
    case 13:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(22);
      if (lookahead == '8') ADVANCE(78);
      END_STATE();
    case 14:
      if (lookahead == '2') ADVANCE(94);
      END_STATE();
    case 15:
      if (lookahead == '2') ADVANCE(23);
      if (lookahead == '6') ADVANCE(70);
      END_STATE();
    case 16:
      if (lookahead == '2') ADVANCE(72);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(82);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(24);
      if (lookahead == '6') ADVANCE(80);
      END_STATE();
    case 19:
      if (lookahead == '3') ADVANCE(14);
      if (lookahead == '6') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '4') ADVANCE(95);
      END_STATE();
    case 21:
      if (lookahead == '4') ADVANCE(74);
      END_STATE();
    case 22:
      if (lookahead == '4') ADVANCE(84);
      END_STATE();
    case 23:
      if (lookahead == '8') ADVANCE(76);
      END_STATE();
    case 24:
      if (lookahead == '8') ADVANCE(86);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(108);
      END_STATE();
    case 26:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '%') ADVANCE(42);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'E') ADVANCE(91);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(66);
      END_STATE();
    case 27:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == '1') ADVANCE(58);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(27)
      if (lookahead != 0 &&
          lookahead > '^' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 28:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(60);
      END_STATE();
    case 29:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 30:
      if (eof) ADVANCE(32);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(5);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(30)
      if (lookahead != 0 &&
          lookahead > '^' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '%') ADVANCE(42);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '0') ADVANCE(56);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == ']') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead > '^' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__terminator_token1);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__terminator_token1);
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__terminator_token1);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '\r') ADVANCE(3);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__terminator_token1);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__terminator_token1);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(5);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_percent_string_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_percent_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_0b);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 'b') ADVANCE(54);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'x') ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'x') ADVANCE(62);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_0o);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_0_);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_i8);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_i16);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_i32);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_i64);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_i128);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_u8);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_u16);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_u32);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_u64);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_u128);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(99);
      if (lookahead == '3') ADVANCE(100);
      if (lookahead == '6') ADVANCE(103);
      if (lookahead == '8') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(102);
      if (lookahead == '3') ADVANCE(101);
      if (lookahead == '6') ADVANCE(104);
      if (lookahead == '8') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(105);
      if (lookahead == '6') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(106);
      if (lookahead == '6') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__constant_segment);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(109);
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
      if (lookahead == 'o') ADVANCE(4);
      if (lookahead == 't') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'f') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 31},
  [2] = {.lex_state = 31},
  [3] = {.lex_state = 31},
  [4] = {.lex_state = 31},
  [5] = {.lex_state = 31},
  [6] = {.lex_state = 31},
  [7] = {.lex_state = 31},
  [8] = {.lex_state = 26},
  [9] = {.lex_state = 26},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 26},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 29},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 31},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 29},
  [31] = {.lex_state = 28},
  [32] = {.lex_state = 29},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 26},
  [36] = {.lex_state = 28},
  [37] = {.lex_state = 28},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 29},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 29},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 29},
  [48] = {.lex_state = 26},
  [49] = {.lex_state = 26},
  [50] = {.lex_state = 26},
  [51] = {.lex_state = 26},
  [52] = {.lex_state = 26},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 26},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 26},
  [59] = {.lex_state = 26},
  [60] = {.lex_state = 26},
  [61] = {.lex_state = 26},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 26},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 26},
  [72] = {.lex_state = 26},
  [73] = {.lex_state = 26},
  [74] = {.lex_state = 26},
  [75] = {.lex_state = 26},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 26},
  [78] = {.lex_state = 26},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 26},
  [82] = {.lex_state = 26},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 26},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 26},
  [88] = {.lex_state = 26},
  [89] = {.lex_state = 26},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 26},
  [93] = {.lex_state = 26},
  [94] = {.lex_state = 26},
  [95] = {.lex_state = 26},
  [96] = {.lex_state = 26},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 26},
  [99] = {.lex_state = 26},
  [100] = {.lex_state = 26},
  [101] = {.lex_state = 26},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 26},
  [104] = {.lex_state = 26},
  [105] = {.lex_state = 26},
  [106] = {.lex_state = 30},
  [107] = {.lex_state = 26},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 26},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 26},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 30},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 26},
  [120] = {.lex_state = 26},
  [121] = {.lex_state = 30},
  [122] = {.lex_state = 26},
  [123] = {.lex_state = 26},
  [124] = {.lex_state = 26},
  [125] = {.lex_state = 26},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 31},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 31},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 31},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 31},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 31},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 26},
  [144] = {.lex_state = 31},
  [145] = {.lex_state = 30},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 31},
  [150] = {.lex_state = 26},
  [151] = {.lex_state = 26},
  [152] = {.lex_state = 26},
  [153] = {.lex_state = 31},
  [154] = {.lex_state = 30},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 26},
  [157] = {.lex_state = 26},
  [158] = {.lex_state = 26},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 31},
  [162] = {.lex_state = 26},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 31},
  [166] = {.lex_state = 30},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 26},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 31},
  [173] = {.lex_state = 31},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 26},
  [176] = {.lex_state = 26},
  [177] = {.lex_state = 26},
  [178] = {.lex_state = 26},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 26},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 26},
  [185] = {.lex_state = 26},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 26},
  [188] = {.lex_state = 26},
  [189] = {.lex_state = 26},
  [190] = {.lex_state = 26},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 8},
  [194] = {.lex_state = 26},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 8},
  [199] = {.lex_state = 26},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 26},
  [203] = {.lex_state = 8},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 26},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 8},
  [208] = {.lex_state = 8},
  [209] = {.lex_state = 8},
  [210] = {.lex_state = 31},
  [211] = {.lex_state = 8},
  [212] = {.lex_state = 31},
  [213] = {.lex_state = 31},
  [214] = {.lex_state = 8},
  [215] = {.lex_state = 31},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 31},
  [218] = {.lex_state = 8},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 31},
  [221] = {.lex_state = 0},
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(221),
    [sym__statements] = STATE(219),
    [sym__statement] = STATE(124),
    [sym_string] = STATE(49),
    [sym_chained_string] = STATE(124),
    [sym_quoted_string] = STATE(92),
    [sym_percent_string] = STATE(92),
    [sym_integer] = STATE(124),
    [sym_float] = STATE(124),
    [sym_array] = STATE(124),
    [aux_sym__statements_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_0b] = ACTIONS(15),
    [anon_sym_0] = ACTIONS(17),
    [anon_sym_0o] = ACTIONS(19),
    [anon_sym_0x] = ACTIONS(21),
    [aux_sym_integer_token3] = ACTIONS(23),
    [anon_sym_0_] = ACTIONS(23),
    [sym_nil] = ACTIONS(5),
    [sym_true] = ACTIONS(5),
    [sym_false] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      anon_sym_SEMI,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(36), 1,
      anon_sym_PERCENT,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(42), 1,
      anon_sym_0b,
    ACTIONS(45), 1,
      anon_sym_0,
    ACTIONS(48), 1,
      anon_sym_0o,
    ACTIONS(51), 1,
      anon_sym_0x,
    STATE(2), 1,
      aux_sym__statements_repeat1,
    STATE(60), 1,
      sym_string,
    ACTIONS(54), 2,
      aux_sym_integer_token3,
      anon_sym_0_,
    STATE(103), 2,
      sym_quoted_string,
      sym_percent_string,
    ACTIONS(27), 4,
      sym_nil,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(178), 5,
      sym__statement,
      sym_chained_string,
      sym_integer,
      sym_float,
      sym_array,
  [55] = 15,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_0b,
    ACTIONS(17), 1,
      anon_sym_0,
    ACTIONS(19), 1,
      anon_sym_0o,
    ACTIONS(21), 1,
      anon_sym_0x,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_SEMI,
    STATE(2), 1,
      aux_sym__statements_repeat1,
    STATE(49), 1,
      sym_string,
    ACTIONS(23), 2,
      aux_sym_integer_token3,
      anon_sym_0_,
    STATE(92), 2,
      sym_quoted_string,
      sym_percent_string,
    ACTIONS(59), 4,
      sym_nil,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(120), 5,
      sym__statement,
      sym_chained_string,
      sym_integer,
      sym_float,
      sym_array,
  [110] = 13,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_PERCENT,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    ACTIONS(73), 1,
      anon_sym_0b,
    ACTIONS(75), 1,
      anon_sym_0,
    ACTIONS(77), 1,
      anon_sym_0o,
    ACTIONS(79), 1,
      anon_sym_0x,
    STATE(55), 1,
      sym_string,
    ACTIONS(81), 2,
      aux_sym_integer_token3,
      anon_sym_0_,
    STATE(108), 2,
      sym_quoted_string,
      sym_percent_string,
    ACTIONS(63), 4,
      sym_nil,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(140), 5,
      sym__statement,
      sym_chained_string,
      sym_integer,
      sym_float,
      sym_array,
  [159] = 13,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_PERCENT,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_0b,
    ACTIONS(75), 1,
      anon_sym_0,
    ACTIONS(77), 1,
      anon_sym_0o,
    ACTIONS(79), 1,
      anon_sym_0x,
    ACTIONS(85), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      sym_string,
    ACTIONS(81), 2,
      aux_sym_integer_token3,
      anon_sym_0_,
    STATE(108), 2,
      sym_quoted_string,
      sym_percent_string,
    ACTIONS(83), 4,
      sym_nil,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(160), 5,
      sym__statement,
      sym_chained_string,
      sym_integer,
      sym_float,
      sym_array,
  [208] = 13,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_PERCENT,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_0b,
    ACTIONS(75), 1,
      anon_sym_0,
    ACTIONS(77), 1,
      anon_sym_0o,
    ACTIONS(79), 1,
      anon_sym_0x,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      sym_string,
    ACTIONS(81), 2,
      aux_sym_integer_token3,
      anon_sym_0_,
    STATE(108), 2,
      sym_quoted_string,
      sym_percent_string,
    ACTIONS(87), 4,
      sym_nil,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(137), 5,
      sym__statement,
      sym_chained_string,
      sym_integer,
      sym_float,
      sym_array,
  [257] = 12,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_PERCENT,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      anon_sym_0b,
    ACTIONS(75), 1,
      anon_sym_0,
    ACTIONS(77), 1,
      anon_sym_0o,
    ACTIONS(79), 1,
      anon_sym_0x,
    STATE(55), 1,
      sym_string,
    ACTIONS(81), 2,
      aux_sym_integer_token3,
      anon_sym_0_,
    STATE(108), 2,
      sym_quoted_string,
      sym_percent_string,
    ACTIONS(91), 4,
      sym_nil,
      sym_true,
      sym_false,
      sym_identifier,
    STATE(186), 5,
      sym__statement,
      sym_chained_string,
      sym_integer,
      sym_float,
      sym_array,
  [303] = 4,
    ACTIONS(97), 1,
      aux_sym_integer_token4,
    STATE(8), 1,
      aux_sym_integer_repeat4,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(95), 16,
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
  [332] = 4,
    ACTIONS(93), 1,
      aux_sym__terminator_token1,
    ACTIONS(100), 1,
      aux_sym_integer_token4,
    STATE(9), 1,
      aux_sym_integer_repeat4,
    ACTIONS(95), 16,
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
  [360] = 3,
    ACTIONS(103), 1,
      aux_sym_integer_token4,
    STATE(10), 1,
      aux_sym_integer_repeat4,
    ACTIONS(93), 17,
      anon_sym_RBRACK,
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
      anon_sym_COMMA,
  [386] = 5,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    STATE(13), 1,
      aux_sym_integer_repeat1,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(110), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(112), 10,
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
  [414] = 4,
    STATE(12), 1,
      aux_sym_integer_repeat1,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(118), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(116), 11,
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
  [440] = 5,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    STATE(12), 1,
      aux_sym_integer_repeat1,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(125), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(127), 10,
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
  [468] = 6,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(129), 1,
      aux_sym_integer_token4,
    ACTIONS(131), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_integer_repeat4,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(112), 10,
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
  [497] = 5,
    ACTIONS(121), 1,
      aux_sym__terminator_token1,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      aux_sym_integer_repeat1,
    ACTIONS(133), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(135), 10,
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
  [524] = 4,
    STATE(20), 1,
      aux_sym_integer_repeat1,
    ACTIONS(106), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(137), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(139), 10,
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
  [549] = 6,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(131), 1,
      anon_sym_DOT,
    ACTIONS(141), 1,
      aux_sym_integer_token4,
    STATE(163), 1,
      aux_sym_integer_repeat4,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(112), 10,
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
  [578] = 4,
    ACTIONS(114), 1,
      aux_sym__terminator_token1,
    STATE(18), 1,
      aux_sym_integer_repeat1,
    ACTIONS(143), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(116), 11,
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
  [603] = 5,
    ACTIONS(106), 1,
      aux_sym__terminator_token1,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      aux_sym_integer_repeat1,
    ACTIONS(146), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(148), 10,
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
  [630] = 4,
    STATE(21), 1,
      aux_sym_integer_repeat1,
    ACTIONS(121), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(150), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(152), 10,
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
  [655] = 3,
    STATE(21), 1,
      aux_sym_integer_repeat1,
    ACTIONS(154), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(114), 12,
      anon_sym_RBRACK,
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
      anon_sym_COMMA,
  [678] = 6,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    ACTIONS(157), 1,
      aux_sym_integer_token4,
    ACTIONS(159), 1,
      anon_sym_DOT,
    STATE(8), 1,
      aux_sym_integer_repeat4,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(127), 10,
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
  [707] = 5,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    ACTIONS(161), 1,
      aux_sym_integer_token1,
    STATE(33), 1,
      aux_sym_integer_repeat2,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(127), 10,
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
  [733] = 6,
    ACTIONS(106), 1,
      aux_sym__terminator_token1,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(163), 1,
      aux_sym_integer_token4,
    ACTIONS(165), 1,
      anon_sym_DOT,
    STATE(27), 1,
      aux_sym_integer_repeat4,
    ACTIONS(148), 10,
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
  [761] = 5,
    ACTIONS(167), 1,
      aux_sym_integer_token4,
    ACTIONS(169), 1,
      anon_sym_DOT,
    STATE(155), 1,
      aux_sym_integer_repeat4,
    ACTIONS(106), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(139), 10,
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
  [787] = 5,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    ACTIONS(171), 1,
      aux_sym_integer_token2,
    STATE(32), 1,
      aux_sym_integer_repeat3,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(127), 10,
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
  [813] = 6,
    ACTIONS(121), 1,
      aux_sym__terminator_token1,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    ACTIONS(173), 1,
      aux_sym_integer_token4,
    ACTIONS(175), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_integer_repeat4,
    ACTIONS(135), 10,
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
  [841] = 2,
    ACTIONS(177), 5,
      anon_sym_0,
      sym_nil,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(25), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
      anon_sym_LBRACK,
      anon_sym_0b,
      anon_sym_0o,
      anon_sym_0x,
      aux_sym_integer_token3,
      anon_sym_0_,
  [861] = 5,
    ACTIONS(169), 1,
      anon_sym_DOT,
    ACTIONS(179), 1,
      aux_sym_integer_token4,
    STATE(34), 1,
      aux_sym_integer_repeat4,
    ACTIONS(106), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(139), 10,
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
  [887] = 5,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(181), 1,
      aux_sym_integer_token2,
    STATE(26), 1,
      aux_sym_integer_repeat3,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(112), 10,
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
  [913] = 5,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(183), 1,
      aux_sym_integer_token1,
    STATE(23), 1,
      aux_sym_integer_repeat2,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(112), 10,
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
  [939] = 4,
    ACTIONS(189), 1,
      aux_sym_integer_token2,
    STATE(32), 1,
      aux_sym_integer_repeat3,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(187), 11,
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
  [963] = 4,
    ACTIONS(196), 1,
      aux_sym_integer_token1,
    STATE(33), 1,
      aux_sym_integer_repeat2,
    ACTIONS(192), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(194), 11,
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
  [987] = 5,
    ACTIONS(199), 1,
      aux_sym_integer_token4,
    ACTIONS(201), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_integer_repeat4,
    ACTIONS(121), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(152), 10,
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
  [1013] = 6,
    ACTIONS(106), 1,
      aux_sym__terminator_token1,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(165), 1,
      anon_sym_DOT,
    ACTIONS(203), 1,
      aux_sym_integer_token4,
    STATE(130), 1,
      aux_sym_integer_repeat4,
    ACTIONS(148), 10,
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
  [1041] = 4,
    ACTIONS(192), 1,
      aux_sym__terminator_token1,
    ACTIONS(205), 1,
      aux_sym_integer_token1,
    STATE(36), 1,
      aux_sym_integer_repeat2,
    ACTIONS(194), 11,
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
  [1064] = 5,
    ACTIONS(121), 1,
      aux_sym__terminator_token1,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    ACTIONS(208), 1,
      aux_sym_integer_token1,
    STATE(36), 1,
      aux_sym_integer_repeat2,
    ACTIONS(135), 10,
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
  [1089] = 4,
    ACTIONS(210), 1,
      aux_sym_integer_token2,
    STATE(44), 1,
      aux_sym_integer_repeat3,
    ACTIONS(106), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(139), 10,
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
  [1112] = 4,
    ACTIONS(212), 1,
      aux_sym_integer_token1,
    STATE(41), 1,
      aux_sym_integer_repeat2,
    ACTIONS(106), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(139), 10,
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
  [1135] = 5,
    ACTIONS(121), 1,
      aux_sym__terminator_token1,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    ACTIONS(214), 1,
      aux_sym_integer_token2,
    STATE(43), 1,
      aux_sym_integer_repeat3,
    ACTIONS(135), 10,
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
  [1160] = 4,
    ACTIONS(216), 1,
      aux_sym_integer_token1,
    STATE(46), 1,
      aux_sym_integer_repeat2,
    ACTIONS(121), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(152), 10,
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
  [1183] = 5,
    ACTIONS(106), 1,
      aux_sym__terminator_token1,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(218), 1,
      aux_sym_integer_token1,
    STATE(37), 1,
      aux_sym_integer_repeat2,
    ACTIONS(148), 10,
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
  [1208] = 4,
    ACTIONS(185), 1,
      aux_sym__terminator_token1,
    ACTIONS(220), 1,
      aux_sym_integer_token2,
    STATE(43), 1,
      aux_sym_integer_repeat3,
    ACTIONS(187), 11,
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
  [1231] = 4,
    ACTIONS(223), 1,
      aux_sym_integer_token2,
    STATE(45), 1,
      aux_sym_integer_repeat3,
    ACTIONS(121), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(152), 10,
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
  [1254] = 3,
    ACTIONS(225), 1,
      aux_sym_integer_token2,
    STATE(45), 1,
      aux_sym_integer_repeat3,
    ACTIONS(185), 12,
      anon_sym_RBRACK,
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
      anon_sym_COMMA,
  [1275] = 3,
    ACTIONS(228), 1,
      aux_sym_integer_token1,
    STATE(46), 1,
      aux_sym_integer_repeat2,
    ACTIONS(192), 12,
      anon_sym_RBRACK,
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
      anon_sym_COMMA,
  [1296] = 5,
    ACTIONS(106), 1,
      aux_sym__terminator_token1,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(231), 1,
      aux_sym_integer_token2,
    STATE(40), 1,
      aux_sym_integer_repeat3,
    ACTIONS(148), 10,
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
  [1321] = 6,
    ACTIONS(235), 1,
      anon_sym_SEMI,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_PERCENT,
    ACTIONS(233), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    STATE(51), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(92), 2,
      sym_quoted_string,
      sym_percent_string,
  [1343] = 6,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      anon_sym_PERCENT,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    STATE(48), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(92), 2,
      sym_quoted_string,
      sym_percent_string,
  [1365] = 6,
    ACTIONS(157), 1,
      aux_sym_integer_token4,
    ACTIONS(247), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      aux_sym_integer_repeat4,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(249), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(251), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1387] = 6,
    ACTIONS(255), 1,
      anon_sym_SEMI,
    ACTIONS(257), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_PERCENT,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    STATE(51), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(92), 2,
      sym_quoted_string,
      sym_percent_string,
  [1409] = 6,
    ACTIONS(157), 1,
      aux_sym_integer_token4,
    ACTIONS(265), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      aux_sym_integer_repeat4,
    ACTIONS(263), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(267), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(269), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1431] = 5,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_PERCENT,
    ACTIONS(233), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(62), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(108), 2,
      sym_quoted_string,
      sym_percent_string,
  [1450] = 6,
    ACTIONS(173), 1,
      aux_sym_integer_token4,
    ACTIONS(245), 1,
      aux_sym__terminator_token1,
    ACTIONS(247), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      aux_sym_integer_repeat4,
    ACTIONS(271), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(273), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1471] = 5,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_PERCENT,
    ACTIONS(241), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(53), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(108), 2,
      sym_quoted_string,
      sym_percent_string,
  [1490] = 5,
    ACTIONS(199), 1,
      aux_sym_integer_token4,
    STATE(10), 1,
      aux_sym_integer_repeat4,
    ACTIONS(263), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(275), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(277), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1509] = 5,
    ACTIONS(199), 1,
      aux_sym_integer_token4,
    STATE(10), 1,
      aux_sym_integer_repeat4,
    ACTIONS(245), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(279), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(281), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1528] = 6,
    ACTIONS(233), 1,
      aux_sym__terminator_token1,
    ACTIONS(235), 1,
      anon_sym_SEMI,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(285), 1,
      anon_sym_PERCENT,
    STATE(61), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(103), 2,
      sym_quoted_string,
      sym_percent_string,
  [1549] = 6,
    ACTIONS(173), 1,
      aux_sym_integer_token4,
    ACTIONS(263), 1,
      aux_sym__terminator_token1,
    ACTIONS(265), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      aux_sym_integer_repeat4,
    ACTIONS(287), 2,
      anon_sym_e,
      anon_sym_E,
    ACTIONS(289), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1570] = 6,
    ACTIONS(241), 1,
      aux_sym__terminator_token1,
    ACTIONS(243), 1,
      anon_sym_SEMI,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
    ACTIONS(285), 1,
      anon_sym_PERCENT,
    STATE(58), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(103), 2,
      sym_quoted_string,
      sym_percent_string,
  [1591] = 6,
    ACTIONS(253), 1,
      aux_sym__terminator_token1,
    ACTIONS(255), 1,
      anon_sym_SEMI,
    ACTIONS(291), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_PERCENT,
    STATE(61), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(103), 2,
      sym_quoted_string,
      sym_percent_string,
  [1612] = 5,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
    ACTIONS(300), 1,
      anon_sym_PERCENT,
    ACTIONS(253), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    STATE(62), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(108), 2,
      sym_quoted_string,
      sym_percent_string,
  [1631] = 3,
    ACTIONS(305), 1,
      aux_sym_percent_string_token1,
    STATE(66), 1,
      aux_sym_percent_string_repeat1,
    ACTIONS(303), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1645] = 3,
    ACTIONS(309), 1,
      aux_sym_percent_string_token1,
    STATE(68), 1,
      aux_sym_percent_string_repeat1,
    ACTIONS(307), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1659] = 3,
    ACTIONS(313), 1,
      aux_sym_percent_string_token1,
    STATE(70), 1,
      aux_sym_percent_string_repeat1,
    ACTIONS(311), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1673] = 3,
    ACTIONS(313), 1,
      aux_sym_percent_string_token1,
    STATE(70), 1,
      aux_sym_percent_string_repeat1,
    ACTIONS(315), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1687] = 5,
    ACTIONS(319), 1,
      anon_sym_SEMI,
    ACTIONS(321), 1,
      aux_sym_integer_token4,
    STATE(71), 1,
      aux_sym_integer_repeat4,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(323), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1705] = 3,
    ACTIONS(313), 1,
      aux_sym_percent_string_token1,
    STATE(70), 1,
      aux_sym_percent_string_repeat1,
    ACTIONS(325), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1719] = 3,
    ACTIONS(329), 1,
      aux_sym_percent_string_token1,
    STATE(65), 1,
      aux_sym_percent_string_repeat1,
    ACTIONS(327), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1733] = 3,
    ACTIONS(333), 1,
      aux_sym_percent_string_token1,
    STATE(70), 1,
      aux_sym_percent_string_repeat1,
    ACTIONS(331), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [1747] = 5,
    ACTIONS(157), 1,
      aux_sym_integer_token4,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      aux_sym_integer_repeat4,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(340), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1765] = 5,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    ACTIONS(342), 1,
      aux_sym_integer_token4,
    STATE(74), 1,
      aux_sym_integer_repeat4,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(340), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1783] = 5,
    ACTIONS(157), 1,
      aux_sym_integer_token4,
    ACTIONS(346), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      aux_sym_integer_repeat4,
    ACTIONS(344), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(348), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1801] = 5,
    ACTIONS(157), 1,
      aux_sym_integer_token4,
    ACTIONS(352), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      aux_sym_integer_repeat4,
    ACTIONS(350), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(354), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1819] = 5,
    ACTIONS(352), 1,
      anon_sym_SEMI,
    ACTIONS(356), 1,
      aux_sym_integer_token4,
    STATE(73), 1,
      aux_sym_integer_repeat4,
    ACTIONS(350), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(354), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1837] = 4,
    ACTIONS(358), 1,
      aux_sym_integer_token4,
    STATE(84), 1,
      aux_sym_integer_repeat4,
    ACTIONS(317), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(360), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1852] = 5,
    ACTIONS(317), 1,
      aux_sym__terminator_token1,
    ACTIONS(319), 1,
      anon_sym_SEMI,
    ACTIONS(362), 1,
      aux_sym_integer_token4,
    STATE(78), 1,
      aux_sym_integer_repeat4,
    ACTIONS(364), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1869] = 5,
    ACTIONS(173), 1,
      aux_sym_integer_token4,
    ACTIONS(336), 1,
      aux_sym__terminator_token1,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      aux_sym_integer_repeat4,
    ACTIONS(366), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1886] = 4,
    ACTIONS(199), 1,
      aux_sym_integer_token4,
    STATE(10), 1,
      aux_sym_integer_repeat4,
    ACTIONS(350), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(368), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1901] = 4,
    ACTIONS(370), 1,
      aux_sym_integer_token4,
    STATE(86), 1,
      aux_sym_integer_repeat4,
    ACTIONS(350), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(368), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1916] = 5,
    ACTIONS(336), 1,
      aux_sym__terminator_token1,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    ACTIONS(372), 1,
      aux_sym_integer_token4,
    STATE(82), 1,
      aux_sym_integer_repeat4,
    ACTIONS(366), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1933] = 5,
    ACTIONS(173), 1,
      aux_sym_integer_token4,
    ACTIONS(350), 1,
      aux_sym__terminator_token1,
    ACTIONS(352), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      aux_sym_integer_repeat4,
    ACTIONS(374), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1950] = 4,
    ACTIONS(376), 1,
      aux_sym_integer_token4,
    STATE(79), 1,
      aux_sym_integer_repeat4,
    ACTIONS(336), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(378), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1965] = 4,
    ACTIONS(199), 1,
      aux_sym_integer_token4,
    STATE(10), 1,
      aux_sym_integer_repeat4,
    ACTIONS(336), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(378), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1980] = 5,
    ACTIONS(350), 1,
      aux_sym__terminator_token1,
    ACTIONS(352), 1,
      anon_sym_SEMI,
    ACTIONS(380), 1,
      aux_sym_integer_token4,
    STATE(87), 1,
      aux_sym_integer_repeat4,
    ACTIONS(374), 2,
      anon_sym_f32,
      anon_sym_f64,
  [1997] = 4,
    ACTIONS(199), 1,
      aux_sym_integer_token4,
    STATE(10), 1,
      aux_sym_integer_repeat4,
    ACTIONS(344), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(382), 2,
      anon_sym_f32,
      anon_sym_f64,
  [2012] = 5,
    ACTIONS(173), 1,
      aux_sym_integer_token4,
    ACTIONS(344), 1,
      aux_sym__terminator_token1,
    ACTIONS(346), 1,
      anon_sym_SEMI,
    STATE(9), 1,
      aux_sym_integer_repeat4,
    ACTIONS(384), 2,
      anon_sym_f32,
      anon_sym_f64,
  [2029] = 2,
    ACTIONS(386), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(388), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [2039] = 4,
    ACTIONS(392), 1,
      anon_sym_SEMI,
    ACTIONS(394), 1,
      anon_sym_COLON_COLON,
    STATE(96), 1,
      aux_sym_constant_repeat1,
    ACTIONS(390), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [2053] = 1,
    ACTIONS(396), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_PIPE,
  [2061] = 1,
    ACTIONS(398), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_PIPE,
  [2069] = 2,
    ACTIONS(400), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(402), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [2079] = 4,
    ACTIONS(406), 1,
      anon_sym_SEMI,
    ACTIONS(408), 1,
      anon_sym_COLON_COLON,
    STATE(93), 1,
      aux_sym_constant_repeat1,
    ACTIONS(404), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [2093] = 2,
    ACTIONS(411), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(413), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [2103] = 2,
    ACTIONS(415), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(417), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [2113] = 4,
    ACTIONS(394), 1,
      anon_sym_COLON_COLON,
    ACTIONS(421), 1,
      anon_sym_SEMI,
    STATE(93), 1,
      aux_sym_constant_repeat1,
    ACTIONS(419), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [2127] = 1,
    ACTIONS(423), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_PIPE,
  [2135] = 4,
    ACTIONS(392), 1,
      anon_sym_SEMI,
    ACTIONS(394), 1,
      anon_sym_COLON_COLON,
    STATE(93), 1,
      aux_sym_constant_repeat1,
    ACTIONS(390), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [2149] = 2,
    ACTIONS(425), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(427), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [2159] = 4,
    ACTIONS(394), 1,
      anon_sym_COLON_COLON,
    ACTIONS(431), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_constant_repeat1,
    ACTIONS(429), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [2173] = 4,
    ACTIONS(390), 1,
      aux_sym__terminator_token1,
    ACTIONS(392), 1,
      anon_sym_SEMI,
    ACTIONS(433), 1,
      anon_sym_COLON_COLON,
    STATE(113), 1,
      aux_sym_constant_repeat1,
  [2186] = 3,
    ACTIONS(435), 1,
      anon_sym_COLON_COLON,
    STATE(117), 1,
      aux_sym_constant_repeat1,
    ACTIONS(390), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2197] = 2,
    ACTIONS(400), 1,
      aux_sym__terminator_token1,
    ACTIONS(402), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [2206] = 4,
    ACTIONS(429), 1,
      aux_sym__terminator_token1,
    ACTIONS(431), 1,
      anon_sym_SEMI,
    ACTIONS(433), 1,
      anon_sym_COLON_COLON,
    STATE(101), 1,
      aux_sym_constant_repeat1,
  [2219] = 4,
    ACTIONS(390), 1,
      aux_sym__terminator_token1,
    ACTIONS(392), 1,
      anon_sym_SEMI,
    ACTIONS(433), 1,
      anon_sym_COLON_COLON,
    STATE(109), 1,
      aux_sym_constant_repeat1,
  [2232] = 3,
    ACTIONS(439), 1,
      anon_sym_SEMI,
    ACTIONS(441), 1,
      anon_sym_of,
    ACTIONS(437), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [2243] = 2,
    ACTIONS(415), 1,
      aux_sym__terminator_token1,
    ACTIONS(417), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [2252] = 1,
    ACTIONS(400), 4,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2259] = 4,
    ACTIONS(419), 1,
      aux_sym__terminator_token1,
    ACTIONS(421), 1,
      anon_sym_SEMI,
    ACTIONS(433), 1,
      anon_sym_COLON_COLON,
    STATE(113), 1,
      aux_sym_constant_repeat1,
  [2272] = 1,
    ACTIONS(386), 4,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2279] = 1,
    ACTIONS(425), 4,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2286] = 3,
    ACTIONS(435), 1,
      anon_sym_COLON_COLON,
    STATE(115), 1,
      aux_sym_constant_repeat1,
    ACTIONS(429), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2297] = 4,
    ACTIONS(404), 1,
      aux_sym__terminator_token1,
    ACTIONS(406), 1,
      anon_sym_SEMI,
    ACTIONS(443), 1,
      anon_sym_COLON_COLON,
    STATE(113), 1,
      aux_sym_constant_repeat1,
  [2310] = 1,
    ACTIONS(415), 4,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2317] = 3,
    ACTIONS(435), 1,
      anon_sym_COLON_COLON,
    STATE(118), 1,
      aux_sym_constant_repeat1,
    ACTIONS(390), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2328] = 3,
    ACTIONS(448), 1,
      anon_sym_SEMI,
    ACTIONS(450), 1,
      anon_sym_of,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [2339] = 3,
    ACTIONS(435), 1,
      anon_sym_COLON_COLON,
    STATE(118), 1,
      aux_sym_constant_repeat1,
    ACTIONS(419), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2350] = 3,
    ACTIONS(452), 1,
      anon_sym_COLON_COLON,
    STATE(118), 1,
      aux_sym_constant_repeat1,
    ACTIONS(404), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2361] = 2,
    ACTIONS(425), 1,
      aux_sym__terminator_token1,
    ACTIONS(427), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [2370] = 4,
    ACTIONS(455), 1,
      ts_builtin_sym_end,
    ACTIONS(457), 1,
      aux_sym__terminator_token1,
    ACTIONS(459), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      sym__terminator,
  [2383] = 3,
    ACTIONS(463), 1,
      anon_sym_SEMI,
    ACTIONS(465), 1,
      anon_sym_of,
    ACTIONS(461), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [2394] = 2,
    ACTIONS(411), 1,
      aux_sym__terminator_token1,
    ACTIONS(413), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [2403] = 2,
    ACTIONS(386), 1,
      aux_sym__terminator_token1,
    ACTIONS(388), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [2412] = 4,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(457), 1,
      aux_sym__terminator_token1,
    ACTIONS(459), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      sym__terminator,
  [2425] = 2,
    ACTIONS(404), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(406), 2,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [2434] = 1,
    ACTIONS(411), 4,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2441] = 3,
    ACTIONS(467), 1,
      anon_sym_COLON_COLON,
    ACTIONS(469), 1,
      sym__constant_segment,
    STATE(162), 1,
      sym_constant,
  [2451] = 3,
    ACTIONS(471), 1,
      anon_sym_RBRACK,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_array_repeat1,
  [2461] = 2,
    ACTIONS(475), 1,
      anon_sym_of,
    ACTIONS(437), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2469] = 3,
    ACTIONS(199), 1,
      aux_sym_integer_token4,
    ACTIONS(477), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_integer_repeat4,
  [2479] = 2,
    ACTIONS(479), 1,
      aux_sym_integer_token4,
    ACTIONS(481), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2487] = 3,
    ACTIONS(483), 1,
      anon_sym_COLON_COLON,
    ACTIONS(485), 1,
      sym__constant_segment,
    STATE(204), 1,
      sym_constant,
  [2497] = 2,
    ACTIONS(487), 1,
      aux_sym_integer_token4,
    ACTIONS(489), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2505] = 3,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_RBRACK,
    STATE(170), 1,
      aux_sym_array_repeat1,
  [2515] = 3,
    ACTIONS(493), 1,
      anon_sym_COLON_COLON,
    ACTIONS(495), 1,
      sym__constant_segment,
    STATE(190), 1,
      sym_constant,
  [2525] = 3,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      aux_sym_quoted_string_token1,
    STATE(167), 1,
      aux_sym_quoted_string_repeat1,
  [2535] = 3,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym_array_repeat1,
  [2545] = 1,
    ACTIONS(404), 3,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_COLON_COLON,
  [2551] = 3,
    ACTIONS(483), 1,
      anon_sym_COLON_COLON,
    ACTIONS(485), 1,
      sym__constant_segment,
    STATE(183), 1,
      sym_constant,
  [2561] = 3,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      aux_sym_array_repeat1,
  [2571] = 3,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      aux_sym_quoted_string_token1,
    STATE(136), 1,
      aux_sym_quoted_string_repeat1,
  [2581] = 3,
    ACTIONS(499), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(509), 1,
      anon_sym_DQUOTE,
    STATE(167), 1,
      aux_sym_quoted_string_repeat1,
  [2591] = 2,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [2599] = 2,
    ACTIONS(511), 1,
      anon_sym_of,
    ACTIONS(446), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2607] = 3,
    ACTIONS(461), 1,
      aux_sym__terminator_token1,
    ACTIONS(463), 1,
      anon_sym_SEMI,
    ACTIONS(513), 1,
      anon_sym_of,
  [2617] = 3,
    ACTIONS(515), 1,
      anon_sym_DQUOTE,
    ACTIONS(517), 1,
      aux_sym_quoted_string_token1,
    STATE(142), 1,
      aux_sym_quoted_string_repeat1,
  [2627] = 2,
    ACTIONS(519), 1,
      aux_sym_integer_token4,
    ACTIONS(521), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2635] = 2,
    ACTIONS(523), 1,
      aux_sym_integer_token4,
    ACTIONS(525), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2643] = 2,
    ACTIONS(527), 1,
      anon_sym_of,
    ACTIONS(461), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2651] = 2,
    ACTIONS(531), 1,
      anon_sym_SEMI,
    ACTIONS(529), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [2659] = 2,
    ACTIONS(346), 1,
      anon_sym_SEMI,
    ACTIONS(344), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [2667] = 2,
    ACTIONS(352), 1,
      anon_sym_SEMI,
    ACTIONS(350), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [2675] = 3,
    ACTIONS(483), 1,
      anon_sym_COLON_COLON,
    ACTIONS(485), 1,
      sym__constant_segment,
    STATE(179), 1,
      sym_constant,
  [2685] = 3,
    ACTIONS(446), 1,
      aux_sym__terminator_token1,
    ACTIONS(448), 1,
      anon_sym_SEMI,
    ACTIONS(533), 1,
      anon_sym_of,
  [2695] = 3,
    ACTIONS(199), 1,
      aux_sym_integer_token4,
    ACTIONS(201), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_integer_repeat4,
  [2705] = 2,
    ACTIONS(338), 1,
      anon_sym_SEMI,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [2713] = 2,
    ACTIONS(537), 1,
      anon_sym_SEMI,
    ACTIONS(535), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [2721] = 2,
    ACTIONS(319), 1,
      anon_sym_SEMI,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [2729] = 2,
    ACTIONS(539), 1,
      aux_sym_integer_token4,
    ACTIONS(541), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2737] = 3,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    ACTIONS(543), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      aux_sym_array_repeat1,
  [2747] = 3,
    ACTIONS(467), 1,
      anon_sym_COLON_COLON,
    ACTIONS(469), 1,
      sym__constant_segment,
    STATE(157), 1,
      sym_constant,
  [2757] = 2,
    ACTIONS(547), 1,
      anon_sym_SEMI,
    ACTIONS(545), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [2765] = 3,
    ACTIONS(199), 1,
      aux_sym_integer_token4,
    ACTIONS(549), 1,
      anon_sym_DOT,
    STATE(10), 1,
      aux_sym_integer_repeat4,
  [2775] = 3,
    ACTIONS(499), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(551), 1,
      anon_sym_DQUOTE,
    STATE(167), 1,
      aux_sym_quoted_string_repeat1,
  [2785] = 3,
    ACTIONS(493), 1,
      anon_sym_COLON_COLON,
    ACTIONS(495), 1,
      sym__constant_segment,
    STATE(188), 1,
      sym_constant,
  [2795] = 3,
    ACTIONS(437), 1,
      aux_sym__terminator_token1,
    ACTIONS(439), 1,
      anon_sym_SEMI,
    ACTIONS(553), 1,
      anon_sym_of,
  [2805] = 3,
    ACTIONS(555), 1,
      anon_sym_DQUOTE,
    ACTIONS(557), 1,
      aux_sym_quoted_string_token1,
    STATE(167), 1,
      aux_sym_quoted_string_repeat1,
  [2815] = 2,
    ACTIONS(265), 1,
      anon_sym_SEMI,
    ACTIONS(263), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [2823] = 2,
    ACTIONS(560), 1,
      aux_sym_integer_token4,
    ACTIONS(562), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2831] = 3,
    ACTIONS(564), 1,
      anon_sym_RBRACK,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_array_repeat1,
  [2841] = 3,
    ACTIONS(569), 1,
      anon_sym_DQUOTE,
    ACTIONS(571), 1,
      aux_sym_quoted_string_token1,
    STATE(164), 1,
      aux_sym_quoted_string_repeat1,
  [2851] = 3,
    ACTIONS(493), 1,
      anon_sym_COLON_COLON,
    ACTIONS(495), 1,
      sym__constant_segment,
    STATE(199), 1,
      sym_constant,
  [2861] = 3,
    ACTIONS(467), 1,
      anon_sym_COLON_COLON,
    ACTIONS(469), 1,
      sym__constant_segment,
    STATE(175), 1,
      sym_constant,
  [2871] = 3,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    ACTIONS(573), 1,
      anon_sym_RBRACK,
    STATE(170), 1,
      aux_sym_array_repeat1,
  [2881] = 2,
    ACTIONS(439), 1,
      anon_sym_SEMI,
    ACTIONS(437), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [2889] = 2,
    ACTIONS(404), 1,
      aux_sym__terminator_token1,
    ACTIONS(406), 2,
      anon_sym_SEMI,
      anon_sym_COLON_COLON,
  [2897] = 2,
    ACTIONS(577), 1,
      anon_sym_SEMI,
    ACTIONS(575), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [2905] = 3,
    ACTIONS(457), 1,
      aux_sym__terminator_token1,
    ACTIONS(459), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      sym__terminator,
  [2915] = 1,
    ACTIONS(437), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2920] = 1,
    ACTIONS(529), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2925] = 2,
    ACTIONS(579), 1,
      aux_sym_integer_token4,
    STATE(52), 1,
      aux_sym_integer_repeat4,
  [2932] = 2,
    ACTIONS(350), 1,
      aux_sym__terminator_token1,
    ACTIONS(352), 1,
      anon_sym_SEMI,
  [2939] = 1,
    ACTIONS(545), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2944] = 2,
    ACTIONS(317), 1,
      aux_sym__terminator_token1,
    ACTIONS(319), 1,
      anon_sym_SEMI,
  [2951] = 2,
    ACTIONS(344), 1,
      aux_sym__terminator_token1,
    ACTIONS(346), 1,
      anon_sym_SEMI,
  [2958] = 1,
    ACTIONS(564), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2963] = 2,
    ACTIONS(529), 1,
      aux_sym__terminator_token1,
    ACTIONS(531), 1,
      anon_sym_SEMI,
  [2970] = 2,
    ACTIONS(545), 1,
      aux_sym__terminator_token1,
    ACTIONS(547), 1,
      anon_sym_SEMI,
  [2977] = 2,
    ACTIONS(263), 1,
      aux_sym__terminator_token1,
    ACTIONS(265), 1,
      anon_sym_SEMI,
  [2984] = 2,
    ACTIONS(437), 1,
      aux_sym__terminator_token1,
    ACTIONS(439), 1,
      anon_sym_SEMI,
  [2991] = 1,
    ACTIONS(350), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [2996] = 1,
    ACTIONS(263), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3001] = 2,
    ACTIONS(581), 1,
      aux_sym_integer_token4,
    STATE(54), 1,
      aux_sym_integer_repeat4,
  [3008] = 2,
    ACTIONS(575), 1,
      aux_sym__terminator_token1,
    ACTIONS(577), 1,
      anon_sym_SEMI,
  [3015] = 2,
    ACTIONS(583), 1,
      aux_sym_integer_token4,
    STATE(50), 1,
      aux_sym_integer_repeat4,
  [3022] = 1,
    ACTIONS(121), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3027] = 1,
    ACTIONS(336), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3032] = 2,
    ACTIONS(585), 1,
      aux_sym_integer_token4,
    STATE(59), 1,
      aux_sym_integer_repeat4,
  [3039] = 2,
    ACTIONS(535), 1,
      aux_sym__terminator_token1,
    ACTIONS(537), 1,
      anon_sym_SEMI,
  [3046] = 1,
    ACTIONS(344), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3051] = 1,
    ACTIONS(317), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3056] = 2,
    ACTIONS(336), 1,
      aux_sym__terminator_token1,
    ACTIONS(338), 1,
      anon_sym_SEMI,
  [3063] = 2,
    ACTIONS(587), 1,
      aux_sym_integer_token4,
    STATE(57), 1,
      aux_sym_integer_repeat4,
  [3070] = 1,
    ACTIONS(535), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3075] = 2,
    ACTIONS(121), 1,
      aux_sym__terminator_token1,
    ACTIONS(123), 1,
      anon_sym_SEMI,
  [3082] = 1,
    ACTIONS(575), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [3087] = 2,
    ACTIONS(589), 1,
      aux_sym_integer_token4,
    STATE(56), 1,
      aux_sym_integer_repeat4,
  [3094] = 1,
    ACTIONS(591), 1,
      aux_sym_integer_token4,
  [3098] = 1,
    ACTIONS(519), 1,
      aux_sym_integer_token4,
  [3102] = 1,
    ACTIONS(593), 1,
      sym__constant_segment,
  [3106] = 1,
    ACTIONS(595), 1,
      aux_sym_integer_token4,
  [3110] = 1,
    ACTIONS(597), 1,
      sym__constant_segment,
  [3114] = 1,
    ACTIONS(599), 1,
      sym__constant_segment,
  [3118] = 1,
    ACTIONS(539), 1,
      aux_sym_integer_token4,
  [3122] = 1,
    ACTIONS(601), 1,
      sym__constant_segment,
  [3126] = 1,
    ACTIONS(479), 1,
      aux_sym_integer_token4,
  [3130] = 1,
    ACTIONS(603), 1,
      sym__constant_segment,
  [3134] = 1,
    ACTIONS(605), 1,
      aux_sym_integer_token4,
  [3138] = 1,
    ACTIONS(607), 1,
      ts_builtin_sym_end,
  [3142] = 1,
    ACTIONS(609), 1,
      sym__constant_segment,
  [3146] = 1,
    ACTIONS(611), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 110,
  [SMALL_STATE(5)] = 159,
  [SMALL_STATE(6)] = 208,
  [SMALL_STATE(7)] = 257,
  [SMALL_STATE(8)] = 303,
  [SMALL_STATE(9)] = 332,
  [SMALL_STATE(10)] = 360,
  [SMALL_STATE(11)] = 386,
  [SMALL_STATE(12)] = 414,
  [SMALL_STATE(13)] = 440,
  [SMALL_STATE(14)] = 468,
  [SMALL_STATE(15)] = 497,
  [SMALL_STATE(16)] = 524,
  [SMALL_STATE(17)] = 549,
  [SMALL_STATE(18)] = 578,
  [SMALL_STATE(19)] = 603,
  [SMALL_STATE(20)] = 630,
  [SMALL_STATE(21)] = 655,
  [SMALL_STATE(22)] = 678,
  [SMALL_STATE(23)] = 707,
  [SMALL_STATE(24)] = 733,
  [SMALL_STATE(25)] = 761,
  [SMALL_STATE(26)] = 787,
  [SMALL_STATE(27)] = 813,
  [SMALL_STATE(28)] = 841,
  [SMALL_STATE(29)] = 861,
  [SMALL_STATE(30)] = 887,
  [SMALL_STATE(31)] = 913,
  [SMALL_STATE(32)] = 939,
  [SMALL_STATE(33)] = 963,
  [SMALL_STATE(34)] = 987,
  [SMALL_STATE(35)] = 1013,
  [SMALL_STATE(36)] = 1041,
  [SMALL_STATE(37)] = 1064,
  [SMALL_STATE(38)] = 1089,
  [SMALL_STATE(39)] = 1112,
  [SMALL_STATE(40)] = 1135,
  [SMALL_STATE(41)] = 1160,
  [SMALL_STATE(42)] = 1183,
  [SMALL_STATE(43)] = 1208,
  [SMALL_STATE(44)] = 1231,
  [SMALL_STATE(45)] = 1254,
  [SMALL_STATE(46)] = 1275,
  [SMALL_STATE(47)] = 1296,
  [SMALL_STATE(48)] = 1321,
  [SMALL_STATE(49)] = 1343,
  [SMALL_STATE(50)] = 1365,
  [SMALL_STATE(51)] = 1387,
  [SMALL_STATE(52)] = 1409,
  [SMALL_STATE(53)] = 1431,
  [SMALL_STATE(54)] = 1450,
  [SMALL_STATE(55)] = 1471,
  [SMALL_STATE(56)] = 1490,
  [SMALL_STATE(57)] = 1509,
  [SMALL_STATE(58)] = 1528,
  [SMALL_STATE(59)] = 1549,
  [SMALL_STATE(60)] = 1570,
  [SMALL_STATE(61)] = 1591,
  [SMALL_STATE(62)] = 1612,
  [SMALL_STATE(63)] = 1631,
  [SMALL_STATE(64)] = 1645,
  [SMALL_STATE(65)] = 1659,
  [SMALL_STATE(66)] = 1673,
  [SMALL_STATE(67)] = 1687,
  [SMALL_STATE(68)] = 1705,
  [SMALL_STATE(69)] = 1719,
  [SMALL_STATE(70)] = 1733,
  [SMALL_STATE(71)] = 1747,
  [SMALL_STATE(72)] = 1765,
  [SMALL_STATE(73)] = 1783,
  [SMALL_STATE(74)] = 1801,
  [SMALL_STATE(75)] = 1819,
  [SMALL_STATE(76)] = 1837,
  [SMALL_STATE(77)] = 1852,
  [SMALL_STATE(78)] = 1869,
  [SMALL_STATE(79)] = 1886,
  [SMALL_STATE(80)] = 1901,
  [SMALL_STATE(81)] = 1916,
  [SMALL_STATE(82)] = 1933,
  [SMALL_STATE(83)] = 1950,
  [SMALL_STATE(84)] = 1965,
  [SMALL_STATE(85)] = 1980,
  [SMALL_STATE(86)] = 1997,
  [SMALL_STATE(87)] = 2012,
  [SMALL_STATE(88)] = 2029,
  [SMALL_STATE(89)] = 2039,
  [SMALL_STATE(90)] = 2053,
  [SMALL_STATE(91)] = 2061,
  [SMALL_STATE(92)] = 2069,
  [SMALL_STATE(93)] = 2079,
  [SMALL_STATE(94)] = 2093,
  [SMALL_STATE(95)] = 2103,
  [SMALL_STATE(96)] = 2113,
  [SMALL_STATE(97)] = 2127,
  [SMALL_STATE(98)] = 2135,
  [SMALL_STATE(99)] = 2149,
  [SMALL_STATE(100)] = 2159,
  [SMALL_STATE(101)] = 2173,
  [SMALL_STATE(102)] = 2186,
  [SMALL_STATE(103)] = 2197,
  [SMALL_STATE(104)] = 2206,
  [SMALL_STATE(105)] = 2219,
  [SMALL_STATE(106)] = 2232,
  [SMALL_STATE(107)] = 2243,
  [SMALL_STATE(108)] = 2252,
  [SMALL_STATE(109)] = 2259,
  [SMALL_STATE(110)] = 2272,
  [SMALL_STATE(111)] = 2279,
  [SMALL_STATE(112)] = 2286,
  [SMALL_STATE(113)] = 2297,
  [SMALL_STATE(114)] = 2310,
  [SMALL_STATE(115)] = 2317,
  [SMALL_STATE(116)] = 2328,
  [SMALL_STATE(117)] = 2339,
  [SMALL_STATE(118)] = 2350,
  [SMALL_STATE(119)] = 2361,
  [SMALL_STATE(120)] = 2370,
  [SMALL_STATE(121)] = 2383,
  [SMALL_STATE(122)] = 2394,
  [SMALL_STATE(123)] = 2403,
  [SMALL_STATE(124)] = 2412,
  [SMALL_STATE(125)] = 2425,
  [SMALL_STATE(126)] = 2434,
  [SMALL_STATE(127)] = 2441,
  [SMALL_STATE(128)] = 2451,
  [SMALL_STATE(129)] = 2461,
  [SMALL_STATE(130)] = 2469,
  [SMALL_STATE(131)] = 2479,
  [SMALL_STATE(132)] = 2487,
  [SMALL_STATE(133)] = 2497,
  [SMALL_STATE(134)] = 2505,
  [SMALL_STATE(135)] = 2515,
  [SMALL_STATE(136)] = 2525,
  [SMALL_STATE(137)] = 2535,
  [SMALL_STATE(138)] = 2545,
  [SMALL_STATE(139)] = 2551,
  [SMALL_STATE(140)] = 2561,
  [SMALL_STATE(141)] = 2571,
  [SMALL_STATE(142)] = 2581,
  [SMALL_STATE(143)] = 2591,
  [SMALL_STATE(144)] = 2599,
  [SMALL_STATE(145)] = 2607,
  [SMALL_STATE(146)] = 2617,
  [SMALL_STATE(147)] = 2627,
  [SMALL_STATE(148)] = 2635,
  [SMALL_STATE(149)] = 2643,
  [SMALL_STATE(150)] = 2651,
  [SMALL_STATE(151)] = 2659,
  [SMALL_STATE(152)] = 2667,
  [SMALL_STATE(153)] = 2675,
  [SMALL_STATE(154)] = 2685,
  [SMALL_STATE(155)] = 2695,
  [SMALL_STATE(156)] = 2705,
  [SMALL_STATE(157)] = 2713,
  [SMALL_STATE(158)] = 2721,
  [SMALL_STATE(159)] = 2729,
  [SMALL_STATE(160)] = 2737,
  [SMALL_STATE(161)] = 2747,
  [SMALL_STATE(162)] = 2757,
  [SMALL_STATE(163)] = 2765,
  [SMALL_STATE(164)] = 2775,
  [SMALL_STATE(165)] = 2785,
  [SMALL_STATE(166)] = 2795,
  [SMALL_STATE(167)] = 2805,
  [SMALL_STATE(168)] = 2815,
  [SMALL_STATE(169)] = 2823,
  [SMALL_STATE(170)] = 2831,
  [SMALL_STATE(171)] = 2841,
  [SMALL_STATE(172)] = 2851,
  [SMALL_STATE(173)] = 2861,
  [SMALL_STATE(174)] = 2871,
  [SMALL_STATE(175)] = 2881,
  [SMALL_STATE(176)] = 2889,
  [SMALL_STATE(177)] = 2897,
  [SMALL_STATE(178)] = 2905,
  [SMALL_STATE(179)] = 2915,
  [SMALL_STATE(180)] = 2920,
  [SMALL_STATE(181)] = 2925,
  [SMALL_STATE(182)] = 2932,
  [SMALL_STATE(183)] = 2939,
  [SMALL_STATE(184)] = 2944,
  [SMALL_STATE(185)] = 2951,
  [SMALL_STATE(186)] = 2958,
  [SMALL_STATE(187)] = 2963,
  [SMALL_STATE(188)] = 2970,
  [SMALL_STATE(189)] = 2977,
  [SMALL_STATE(190)] = 2984,
  [SMALL_STATE(191)] = 2991,
  [SMALL_STATE(192)] = 2996,
  [SMALL_STATE(193)] = 3001,
  [SMALL_STATE(194)] = 3008,
  [SMALL_STATE(195)] = 3015,
  [SMALL_STATE(196)] = 3022,
  [SMALL_STATE(197)] = 3027,
  [SMALL_STATE(198)] = 3032,
  [SMALL_STATE(199)] = 3039,
  [SMALL_STATE(200)] = 3046,
  [SMALL_STATE(201)] = 3051,
  [SMALL_STATE(202)] = 3056,
  [SMALL_STATE(203)] = 3063,
  [SMALL_STATE(204)] = 3070,
  [SMALL_STATE(205)] = 3075,
  [SMALL_STATE(206)] = 3082,
  [SMALL_STATE(207)] = 3087,
  [SMALL_STATE(208)] = 3094,
  [SMALL_STATE(209)] = 3098,
  [SMALL_STATE(210)] = 3102,
  [SMALL_STATE(211)] = 3106,
  [SMALL_STATE(212)] = 3110,
  [SMALL_STATE(213)] = 3114,
  [SMALL_STATE(214)] = 3118,
  [SMALL_STATE(215)] = 3122,
  [SMALL_STATE(216)] = 3126,
  [SMALL_STATE(217)] = 3130,
  [SMALL_STATE(218)] = 3134,
  [SMALL_STATE(219)] = 3138,
  [SMALL_STATE(220)] = 3142,
  [SMALL_STATE(221)] = 3146,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(178),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(146),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(97),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(6),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(19),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(35),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(42),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(47),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(24),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat4, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat4, 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat4, 2), SHIFT_REPEAT(8),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat4, 2), SHIFT_REPEAT(9),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat4, 2), SHIFT_REPEAT(10),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(12),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(18),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(21),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat3, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat3, 2),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat3, 2), SHIFT_REPEAT(32),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat2, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat2, 2),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat2, 2), SHIFT_REPEAT(33),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat2, 2), SHIFT_REPEAT(36),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat3, 2), SHIFT_REPEAT(43),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat3, 2), SHIFT_REPEAT(45),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat2, 2), SHIFT_REPEAT(46),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chained_string, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chained_string, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chained_string_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_chained_string_repeat1, 2),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_chained_string_repeat1, 2), SHIFT_REPEAT(141),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_chained_string_repeat1, 2), SHIFT_REPEAT(90),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 4),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_chained_string_repeat1, 2), SHIFT_REPEAT(146),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_chained_string_repeat1, 2), SHIFT_REPEAT(97),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chained_string_repeat1, 2), SHIFT_REPEAT(171),
  [300] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chained_string_repeat1, 2), SHIFT_REPEAT(91),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 5),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 5),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_percent_string_repeat1, 2),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_percent_string_repeat1, 2), SHIFT_REPEAT(70),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 6),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 6),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 8),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 8),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 7),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 7),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_constant_repeat1, 2),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constant_repeat1, 2), SHIFT_REPEAT(217),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_percent_string, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_percent_string, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_percent_string, 4),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_percent_string, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [443] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_constant_repeat1, 2), SHIFT_REPEAT(215),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constant_repeat1, 2), SHIFT_REPEAT(212),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 9),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 9),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 6),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 6),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 5),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(167),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(7),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 3),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [611] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
