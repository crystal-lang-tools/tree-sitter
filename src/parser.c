#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
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
  sym_nil = 38,
  sym_true = 39,
  sym_false = 40,
  sym_source_file = 41,
  sym__terminator = 42,
  sym__statements = 43,
  sym__statement = 44,
  sym_string = 45,
  sym_chained_string = 46,
  sym_quoted_string = 47,
  sym_percent_string = 48,
  sym_integer = 49,
  aux_sym__statements_repeat1 = 50,
  aux_sym_chained_string_repeat1 = 51,
  aux_sym_quoted_string_repeat1 = 52,
  aux_sym_percent_string_repeat1 = 53,
  aux_sym_integer_repeat1 = 54,
  aux_sym_integer_repeat2 = 55,
  aux_sym_integer_repeat3 = 56,
  aux_sym_integer_repeat4 = 57,
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
  [5] = 5,
  [6] = 6,
  [7] = 6,
  [8] = 4,
  [9] = 5,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 17,
  [20] = 16,
  [21] = 15,
  [22] = 13,
  [23] = 23,
  [24] = 10,
  [25] = 14,
  [26] = 18,
  [27] = 11,
  [28] = 12,
  [29] = 29,
  [30] = 29,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 32,
  [35] = 33,
  [36] = 31,
  [37] = 37,
  [38] = 38,
  [39] = 37,
  [40] = 40,
  [41] = 38,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 43,
  [49] = 49,
  [50] = 44,
  [51] = 45,
  [52] = 42,
  [53] = 47,
  [54] = 46,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 56,
  [60] = 57,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 63,
  [65] = 61,
  [66] = 66,
  [67] = 67,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '0') ADVANCE(46);
      if (lookahead == '1') ADVANCE(47);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == '{') ADVANCE(34);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '~' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == '1') ADVANCE(47);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead > '^' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(9);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(13);
      if (lookahead == '8') ADVANCE(57);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(12);
      if (lookahead == '3') ADVANCE(11);
      if (lookahead == '6') ADVANCE(14);
      if (lookahead == '8') ADVANCE(67);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(15);
      if (lookahead == '6') ADVANCE(59);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(61);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(71);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(16);
      if (lookahead == '6') ADVANCE(69);
      END_STATE();
    case 13:
      if (lookahead == '4') ADVANCE(63);
      END_STATE();
    case 14:
      if (lookahead == '4') ADVANCE(73);
      END_STATE();
    case 15:
      if (lookahead == '8') ADVANCE(65);
      END_STATE();
    case 16:
      if (lookahead == '8') ADVANCE(75);
      END_STATE();
    case 17:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == '1') ADVANCE(47);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(17)
      if (lookahead != 0 &&
          lookahead > '^' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 18:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 19:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(3);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 20:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(7);
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(55);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '%') ADVANCE(31);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead != 0 &&
          lookahead > '^' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__terminator_token1);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(1);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__terminator_token1);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\r') ADVANCE(2);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__terminator_token1);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\r') ADVANCE(3);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__terminator_token1);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(4);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_percent_string_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_percent_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_0b);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(43);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == 'x') ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == 'x') ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_0o);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_0_);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_i8);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_i16);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_i32);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_i64);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_i128);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_u8);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_u16);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_u32);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_u64);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_u128);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(79);
      if (lookahead == '3') ADVANCE(80);
      if (lookahead == '6') ADVANCE(83);
      if (lookahead == '8') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(82);
      if (lookahead == '3') ADVANCE(81);
      if (lookahead == '6') ADVANCE(84);
      if (lookahead == '8') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(85);
      if (lookahead == '6') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(86);
      if (lookahead == '6') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(87);
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
  [1] = {.lex_state = 21},
  [2] = {.lex_state = 21},
  [3] = {.lex_state = 21},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 18},
  [32] = {.lex_state = 18},
  [33] = {.lex_state = 18},
  [34] = {.lex_state = 18},
  [35] = {.lex_state = 18},
  [36] = {.lex_state = 18},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 18},
  [45] = {.lex_state = 18},
  [46] = {.lex_state = 18},
  [47] = {.lex_state = 18},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 18},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 18},
  [54] = {.lex_state = 18},
  [55] = {.lex_state = 18},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 18},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 18},
  [64] = {.lex_state = 18},
  [65] = {.lex_state = 18},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
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
    [sym_nil] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(66),
    [sym__statements] = STATE(67),
    [sym__statement] = STATE(49),
    [sym_string] = STATE(32),
    [sym_chained_string] = STATE(49),
    [sym_quoted_string] = STATE(44),
    [sym_percent_string] = STATE(44),
    [sym_integer] = STATE(49),
    [aux_sym__statements_repeat1] = STATE(2),
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
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_SEMI,
    STATE(3), 1,
      aux_sym__statements_repeat1,
    STATE(32), 1,
      sym_string,
    ACTIONS(21), 2,
      aux_sym_integer_token3,
      anon_sym_0_,
    STATE(44), 2,
      sym_quoted_string,
      sym_percent_string,
    STATE(55), 3,
      sym__statement,
      sym_chained_string,
      sym_integer,
    ACTIONS(25), 4,
      sym_nil,
      sym_true,
      sym_false,
      sym_identifier,
  [50] = 14,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_PERCENT,
    ACTIONS(43), 1,
      anon_sym_0b,
    ACTIONS(46), 1,
      anon_sym_0,
    ACTIONS(49), 1,
      anon_sym_0o,
    ACTIONS(52), 1,
      anon_sym_0x,
    STATE(3), 1,
      aux_sym__statements_repeat1,
    STATE(34), 1,
      sym_string,
    ACTIONS(55), 2,
      aux_sym_integer_token3,
      anon_sym_0_,
    STATE(50), 2,
      sym_quoted_string,
      sym_percent_string,
    STATE(58), 3,
      sym__statement,
      sym_chained_string,
      sym_integer,
    ACTIONS(31), 4,
      sym_nil,
      sym_true,
      sym_false,
      sym_identifier,
  [100] = 5,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(62), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(64), 10,
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
  [128] = 5,
    ACTIONS(68), 1,
      anon_sym_SEMI,
    STATE(4), 1,
      aux_sym_integer_repeat1,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(70), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(72), 10,
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
  [156] = 4,
    STATE(6), 1,
      aux_sym_integer_repeat1,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(78), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(76), 11,
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
  [182] = 4,
    ACTIONS(74), 1,
      aux_sym__terminator_token1,
    STATE(7), 1,
      aux_sym_integer_repeat1,
    ACTIONS(81), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(76), 11,
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
  [207] = 5,
    ACTIONS(58), 1,
      aux_sym__terminator_token1,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      aux_sym_integer_repeat1,
    ACTIONS(84), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(86), 10,
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
  [234] = 5,
    ACTIONS(66), 1,
      aux_sym__terminator_token1,
    ACTIONS(68), 1,
      anon_sym_SEMI,
    STATE(8), 1,
      aux_sym_integer_repeat1,
    ACTIONS(88), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(90), 10,
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
  [261] = 5,
    ACTIONS(68), 1,
      anon_sym_SEMI,
    ACTIONS(92), 1,
      aux_sym_integer_token1,
    STATE(16), 1,
      aux_sym_integer_repeat2,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(72), 10,
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
  [287] = 5,
    ACTIONS(68), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      aux_sym_integer_token2,
    STATE(17), 1,
      aux_sym_integer_repeat3,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(72), 10,
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
  [313] = 5,
    ACTIONS(68), 1,
      anon_sym_SEMI,
    ACTIONS(96), 1,
      aux_sym_integer_token4,
    STATE(18), 1,
      aux_sym_integer_repeat4,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(72), 10,
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
  [339] = 4,
    ACTIONS(102), 1,
      aux_sym_integer_token4,
    STATE(13), 1,
      aux_sym_integer_repeat4,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(100), 11,
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
  [363] = 4,
    ACTIONS(109), 1,
      aux_sym_integer_token2,
    STATE(14), 1,
      aux_sym_integer_repeat3,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(107), 11,
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
  [387] = 4,
    ACTIONS(116), 1,
      aux_sym_integer_token1,
    STATE(15), 1,
      aux_sym_integer_repeat2,
    ACTIONS(112), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(114), 11,
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
  [411] = 5,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(119), 1,
      aux_sym_integer_token1,
    STATE(15), 1,
      aux_sym_integer_repeat2,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(64), 10,
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
  [437] = 5,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(121), 1,
      aux_sym_integer_token2,
    STATE(14), 1,
      aux_sym_integer_repeat3,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(64), 10,
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
  [463] = 5,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(123), 1,
      aux_sym_integer_token4,
    STATE(13), 1,
      aux_sym_integer_repeat4,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(64), 10,
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
    ACTIONS(58), 1,
      aux_sym__terminator_token1,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(125), 1,
      aux_sym_integer_token2,
    STATE(25), 1,
      aux_sym_integer_repeat3,
    ACTIONS(86), 10,
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
  [514] = 5,
    ACTIONS(58), 1,
      aux_sym__terminator_token1,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(127), 1,
      aux_sym_integer_token1,
    STATE(21), 1,
      aux_sym_integer_repeat2,
    ACTIONS(86), 10,
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
  [539] = 4,
    ACTIONS(112), 1,
      aux_sym__terminator_token1,
    ACTIONS(129), 1,
      aux_sym_integer_token1,
    STATE(21), 1,
      aux_sym_integer_repeat2,
    ACTIONS(114), 11,
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
  [562] = 4,
    ACTIONS(98), 1,
      aux_sym__terminator_token1,
    ACTIONS(132), 1,
      aux_sym_integer_token4,
    STATE(22), 1,
      aux_sym_integer_repeat4,
    ACTIONS(100), 11,
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
  [585] = 2,
    ACTIONS(135), 5,
      anon_sym_0,
      sym_nil,
      sym_true,
      sym_false,
      sym_identifier,
    ACTIONS(29), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
      anon_sym_0b,
      anon_sym_0o,
      anon_sym_0x,
      aux_sym_integer_token3,
      anon_sym_0_,
  [604] = 5,
    ACTIONS(66), 1,
      aux_sym__terminator_token1,
    ACTIONS(68), 1,
      anon_sym_SEMI,
    ACTIONS(137), 1,
      aux_sym_integer_token1,
    STATE(20), 1,
      aux_sym_integer_repeat2,
    ACTIONS(90), 10,
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
  [629] = 4,
    ACTIONS(105), 1,
      aux_sym__terminator_token1,
    ACTIONS(139), 1,
      aux_sym_integer_token2,
    STATE(25), 1,
      aux_sym_integer_repeat3,
    ACTIONS(107), 11,
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
  [652] = 5,
    ACTIONS(58), 1,
      aux_sym__terminator_token1,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(142), 1,
      aux_sym_integer_token4,
    STATE(22), 1,
      aux_sym_integer_repeat4,
    ACTIONS(86), 10,
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
  [677] = 5,
    ACTIONS(66), 1,
      aux_sym__terminator_token1,
    ACTIONS(68), 1,
      anon_sym_SEMI,
    ACTIONS(144), 1,
      aux_sym_integer_token2,
    STATE(19), 1,
      aux_sym_integer_repeat3,
    ACTIONS(90), 10,
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
  [702] = 5,
    ACTIONS(66), 1,
      aux_sym__terminator_token1,
    ACTIONS(68), 1,
      anon_sym_SEMI,
    ACTIONS(146), 1,
      aux_sym_integer_token4,
    STATE(26), 1,
      aux_sym_integer_repeat4,
    ACTIONS(90), 10,
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
  [727] = 3,
    ACTIONS(68), 1,
      anon_sym_SEMI,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(72), 10,
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
  [747] = 3,
    ACTIONS(66), 1,
      aux_sym__terminator_token1,
    ACTIONS(68), 1,
      anon_sym_SEMI,
    ACTIONS(90), 10,
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
  [766] = 6,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      anon_sym_PERCENT,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    STATE(33), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(44), 2,
      sym_quoted_string,
      sym_percent_string,
  [788] = 6,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      anon_sym_PERCENT,
    ACTIONS(158), 1,
      anon_sym_SEMI,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    STATE(31), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(44), 2,
      sym_quoted_string,
      sym_percent_string,
  [810] = 6,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_PERCENT,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    STATE(33), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(44), 2,
      sym_quoted_string,
      sym_percent_string,
  [832] = 6,
    ACTIONS(156), 1,
      aux_sym__terminator_token1,
    ACTIONS(158), 1,
      anon_sym_SEMI,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_PERCENT,
    STATE(36), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(50), 2,
      sym_quoted_string,
      sym_percent_string,
  [853] = 6,
    ACTIONS(160), 1,
      aux_sym__terminator_token1,
    ACTIONS(162), 1,
      anon_sym_SEMI,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      anon_sym_PERCENT,
    STATE(35), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(50), 2,
      sym_quoted_string,
      sym_percent_string,
  [874] = 6,
    ACTIONS(148), 1,
      aux_sym__terminator_token1,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_PERCENT,
    STATE(35), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(50), 2,
      sym_quoted_string,
      sym_percent_string,
  [895] = 3,
    ACTIONS(182), 1,
      aux_sym_percent_string_token1,
    STATE(38), 1,
      aux_sym_percent_string_repeat1,
    ACTIONS(180), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [909] = 3,
    ACTIONS(186), 1,
      aux_sym_percent_string_token1,
    STATE(40), 1,
      aux_sym_percent_string_repeat1,
    ACTIONS(184), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [923] = 3,
    ACTIONS(190), 1,
      aux_sym_percent_string_token1,
    STATE(41), 1,
      aux_sym_percent_string_repeat1,
    ACTIONS(188), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [937] = 3,
    ACTIONS(194), 1,
      aux_sym_percent_string_token1,
    STATE(40), 1,
      aux_sym_percent_string_repeat1,
    ACTIONS(192), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [951] = 3,
    ACTIONS(186), 1,
      aux_sym_percent_string_token1,
    STATE(40), 1,
      aux_sym_percent_string_repeat1,
    ACTIONS(197), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [965] = 2,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(201), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [975] = 1,
    ACTIONS(203), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_PIPE,
  [983] = 2,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(207), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [993] = 2,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(211), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [1003] = 2,
    ACTIONS(213), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(215), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [1013] = 2,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
    ACTIONS(219), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [1023] = 1,
    ACTIONS(221), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_PIPE,
  [1031] = 4,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 1,
      aux_sym__terminator_token1,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym__terminator,
  [1044] = 2,
    ACTIONS(205), 1,
      aux_sym__terminator_token1,
    ACTIONS(207), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [1053] = 2,
    ACTIONS(209), 1,
      aux_sym__terminator_token1,
    ACTIONS(211), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [1062] = 2,
    ACTIONS(199), 1,
      aux_sym__terminator_token1,
    ACTIONS(201), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [1071] = 2,
    ACTIONS(217), 1,
      aux_sym__terminator_token1,
    ACTIONS(219), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [1080] = 2,
    ACTIONS(213), 1,
      aux_sym__terminator_token1,
    ACTIONS(215), 3,
      anon_sym_SEMI,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [1089] = 4,
    ACTIONS(223), 1,
      aux_sym__terminator_token1,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym__terminator,
  [1102] = 3,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      aux_sym_quoted_string_token1,
    STATE(57), 1,
      aux_sym_quoted_string_repeat1,
  [1112] = 3,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    ACTIONS(235), 1,
      aux_sym_quoted_string_token1,
    STATE(62), 1,
      aux_sym_quoted_string_repeat1,
  [1122] = 3,
    ACTIONS(223), 1,
      aux_sym__terminator_token1,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym__terminator,
  [1132] = 3,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    ACTIONS(239), 1,
      aux_sym_quoted_string_token1,
    STATE(60), 1,
      aux_sym_quoted_string_repeat1,
  [1142] = 3,
    ACTIONS(235), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym_quoted_string_repeat1,
  [1152] = 2,
    ACTIONS(245), 1,
      anon_sym_SEMI,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [1160] = 3,
    ACTIONS(247), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      aux_sym_quoted_string_token1,
    STATE(62), 1,
      aux_sym_quoted_string_repeat1,
  [1170] = 2,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      aux_sym__terminator_token1,
  [1178] = 2,
    ACTIONS(58), 1,
      aux_sym__terminator_token1,
    ACTIONS(60), 1,
      anon_sym_SEMI,
  [1185] = 2,
    ACTIONS(243), 1,
      aux_sym__terminator_token1,
    ACTIONS(245), 1,
      anon_sym_SEMI,
  [1192] = 1,
    ACTIONS(252), 1,
      ts_builtin_sym_end,
  [1196] = 1,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 100,
  [SMALL_STATE(5)] = 128,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 182,
  [SMALL_STATE(8)] = 207,
  [SMALL_STATE(9)] = 234,
  [SMALL_STATE(10)] = 261,
  [SMALL_STATE(11)] = 287,
  [SMALL_STATE(12)] = 313,
  [SMALL_STATE(13)] = 339,
  [SMALL_STATE(14)] = 363,
  [SMALL_STATE(15)] = 387,
  [SMALL_STATE(16)] = 411,
  [SMALL_STATE(17)] = 437,
  [SMALL_STATE(18)] = 463,
  [SMALL_STATE(19)] = 489,
  [SMALL_STATE(20)] = 514,
  [SMALL_STATE(21)] = 539,
  [SMALL_STATE(22)] = 562,
  [SMALL_STATE(23)] = 585,
  [SMALL_STATE(24)] = 604,
  [SMALL_STATE(25)] = 629,
  [SMALL_STATE(26)] = 652,
  [SMALL_STATE(27)] = 677,
  [SMALL_STATE(28)] = 702,
  [SMALL_STATE(29)] = 727,
  [SMALL_STATE(30)] = 747,
  [SMALL_STATE(31)] = 766,
  [SMALL_STATE(32)] = 788,
  [SMALL_STATE(33)] = 810,
  [SMALL_STATE(34)] = 832,
  [SMALL_STATE(35)] = 853,
  [SMALL_STATE(36)] = 874,
  [SMALL_STATE(37)] = 895,
  [SMALL_STATE(38)] = 909,
  [SMALL_STATE(39)] = 923,
  [SMALL_STATE(40)] = 937,
  [SMALL_STATE(41)] = 951,
  [SMALL_STATE(42)] = 965,
  [SMALL_STATE(43)] = 975,
  [SMALL_STATE(44)] = 983,
  [SMALL_STATE(45)] = 993,
  [SMALL_STATE(46)] = 1003,
  [SMALL_STATE(47)] = 1013,
  [SMALL_STATE(48)] = 1023,
  [SMALL_STATE(49)] = 1031,
  [SMALL_STATE(50)] = 1044,
  [SMALL_STATE(51)] = 1053,
  [SMALL_STATE(52)] = 1062,
  [SMALL_STATE(53)] = 1071,
  [SMALL_STATE(54)] = 1080,
  [SMALL_STATE(55)] = 1089,
  [SMALL_STATE(56)] = 1102,
  [SMALL_STATE(57)] = 1112,
  [SMALL_STATE(58)] = 1122,
  [SMALL_STATE(59)] = 1132,
  [SMALL_STATE(60)] = 1142,
  [SMALL_STATE(61)] = 1152,
  [SMALL_STATE(62)] = 1160,
  [SMALL_STATE(63)] = 1170,
  [SMALL_STATE(64)] = 1178,
  [SMALL_STATE(65)] = 1185,
  [SMALL_STATE(66)] = 1192,
  [SMALL_STATE(67)] = 1196,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(58),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(3),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(59),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(43),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(9),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(30),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(24),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(27),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statements_repeat1, 2), SHIFT_REPEAT(28),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(6),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(7),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat4, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat4, 2),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat4, 2), SHIFT_REPEAT(13),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat3, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat3, 2),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat3, 2), SHIFT_REPEAT(14),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat2, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_repeat2, 2),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat2, 2), SHIFT_REPEAT(15),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat2, 2), SHIFT_REPEAT(21),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat4, 2), SHIFT_REPEAT(22),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statements_repeat1, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_integer_repeat3, 2), SHIFT_REPEAT(25),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chained_string, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chained_string, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chained_string_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_chained_string_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_chained_string_repeat1, 2), SHIFT_REPEAT(56),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_chained_string_repeat1, 2), SHIFT_REPEAT(48),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_chained_string_repeat1, 2), SHIFT_REPEAT(59),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_chained_string_repeat1, 2), SHIFT_REPEAT(43),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_percent_string_repeat1, 2),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_percent_string_repeat1, 2), SHIFT_REPEAT(40),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_percent_string, 4),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_percent_string, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_percent_string, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_percent_string, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(62),
  [252] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
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
