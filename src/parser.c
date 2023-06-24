#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_DQUOTE = 3,
  aux_sym_quoted_string_token1 = 4,
  anon_sym_PERCENT = 5,
  anon_sym_LPAREN = 6,
  anon_sym_LBRACK = 7,
  anon_sym_LBRACE = 8,
  anon_sym_LT = 9,
  anon_sym_PIPE = 10,
  aux_sym_percent_string_token1 = 11,
  anon_sym_RPAREN = 12,
  anon_sym_RBRACK = 13,
  anon_sym_RBRACE = 14,
  anon_sym_GT = 15,
  anon_sym_0b = 16,
  anon_sym_0 = 17,
  anon_sym_1 = 18,
  anon_sym__ = 19,
  anon_sym_0o = 20,
  aux_sym_integer_token1 = 21,
  anon_sym_0x = 22,
  aux_sym_integer_token2 = 23,
  aux_sym_integer_token3 = 24,
  aux_sym_integer_token4 = 25,
  anon_sym_0_ = 26,
  anon_sym_i8 = 27,
  anon_sym_i16 = 28,
  anon_sym_i32 = 29,
  anon_sym_i64 = 30,
  anon_sym_i128 = 31,
  anon_sym_u8 = 32,
  anon_sym_u16 = 33,
  anon_sym_u32 = 34,
  anon_sym_u64 = 35,
  anon_sym_u128 = 36,
  sym_nil = 37,
  sym_true = 38,
  sym_false = 39,
  sym_source_file = 40,
  sym__statement = 41,
  sym_string = 42,
  sym_chained_string = 43,
  sym_quoted_string = 44,
  sym_percent_string = 45,
  sym_integer = 46,
  aux_sym_chained_string_repeat1 = 47,
  aux_sym_quoted_string_repeat1 = 48,
  aux_sym_percent_string_repeat1 = 49,
  aux_sym_integer_repeat1 = 50,
  aux_sym_integer_repeat2 = 51,
  aux_sym_integer_repeat3 = 52,
  aux_sym_integer_repeat4 = 53,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
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
  [sym__statement] = "_statement",
  [sym_string] = "string",
  [sym_chained_string] = "chained_string",
  [sym_quoted_string] = "quoted_string",
  [sym_percent_string] = "percent_string",
  [sym_integer] = "integer",
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
  [sym__statement] = sym__statement,
  [sym_string] = sym_string,
  [sym_chained_string] = sym_chained_string,
  [sym_quoted_string] = sym_quoted_string,
  [sym_percent_string] = sym_percent_string,
  [sym_integer] = sym_integer,
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
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == '1') ADVANCE(39);
      if (lookahead == ';') ADVANCE(19);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '7')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'F')) ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '~' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '>') ADVANCE(34);
      if (lookahead == ']') ADVANCE(32);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == '1') ADVANCE(5);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(9);
      if (lookahead == '8') ADVANCE(48);
      END_STATE();
    case 4:
      if (lookahead == '1') ADVANCE(8);
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == '6') ADVANCE(10);
      if (lookahead == '8') ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(11);
      if (lookahead == '6') ADVANCE(50);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(52);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(62);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(12);
      if (lookahead == '6') ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == '4') ADVANCE(54);
      END_STATE();
    case 10:
      if (lookahead == '4') ADVANCE(64);
      END_STATE();
    case 11:
      if (lookahead == '8') ADVANCE(56);
      END_STATE();
    case 12:
      if (lookahead == '8') ADVANCE(66);
      END_STATE();
    case 13:
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '%') ADVANCE(23);
      if (lookahead == '0') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead != 0 &&
          lookahead > '^' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 14:
      if (eof) ADVANCE(18);
      if (lookahead == '0') ADVANCE(36);
      if (lookahead == '1') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead > '^' &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 15:
      if (eof) ADVANCE(18);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 'u') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(46);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 'u') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 'u') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(41);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_percent_string_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_percent_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '>' &&
          lookahead != ']' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_0b);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == 'b') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_0);
      if (lookahead == 'o') ADVANCE(40);
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_0o);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_0x);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_integer_token2);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_integer_token3);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_integer_token4);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_0_);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_i8);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_i16);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_i32);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_i64);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_i128);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_u8);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_u16);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_u32);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_u64);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_u128);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(70);
      if (lookahead == '3') ADVANCE(71);
      if (lookahead == '6') ADVANCE(74);
      if (lookahead == '8') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(73);
      if (lookahead == '3') ADVANCE(72);
      if (lookahead == '6') ADVANCE(75);
      if (lookahead == '8') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(76);
      if (lookahead == '6') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(77);
      if (lookahead == '6') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || 159 < lookahead)) ADVANCE(78);
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
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
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
    [sym_source_file] = STATE(33),
    [sym__statement] = STATE(32),
    [sym_string] = STATE(17),
    [sym_chained_string] = STATE(32),
    [sym_quoted_string] = STATE(28),
    [sym_percent_string] = STATE(28),
    [sym_integer] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym_PERCENT] = ACTIONS(9),
    [anon_sym_0b] = ACTIONS(11),
    [anon_sym_0] = ACTIONS(13),
    [anon_sym_0o] = ACTIONS(15),
    [anon_sym_0x] = ACTIONS(17),
    [aux_sym_integer_token3] = ACTIONS(19),
    [anon_sym_0_] = ACTIONS(19),
    [sym_nil] = ACTIONS(5),
    [sym_true] = ACTIONS(5),
    [sym_false] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_integer_repeat1,
    ACTIONS(23), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(25), 10,
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
  [24] = 4,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_integer_repeat1,
    ACTIONS(29), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(31), 10,
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
  [48] = 3,
    STATE(4), 1,
      aux_sym_integer_repeat1,
    ACTIONS(35), 3,
      anon_sym_0,
      anon_sym_1,
      anon_sym__,
    ACTIONS(33), 11,
      ts_builtin_sym_end,
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
  [70] = 4,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      aux_sym_integer_token4,
    STATE(11), 1,
      aux_sym_integer_repeat4,
    ACTIONS(25), 10,
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
  [92] = 4,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      aux_sym_integer_token2,
    STATE(12), 1,
      aux_sym_integer_repeat3,
    ACTIONS(25), 10,
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
  [114] = 4,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      aux_sym_integer_token1,
    STATE(10), 1,
      aux_sym_integer_repeat2,
    ACTIONS(31), 10,
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
  [136] = 4,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      aux_sym_integer_token2,
    STATE(6), 1,
      aux_sym_integer_repeat3,
    ACTIONS(31), 10,
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
  [158] = 4,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      aux_sym_integer_token4,
    STATE(5), 1,
      aux_sym_integer_repeat4,
    ACTIONS(31), 10,
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
  [180] = 4,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      aux_sym_integer_token1,
    STATE(13), 1,
      aux_sym_integer_repeat2,
    ACTIONS(25), 10,
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
  [202] = 3,
    ACTIONS(52), 1,
      aux_sym_integer_token4,
    STATE(11), 1,
      aux_sym_integer_repeat4,
    ACTIONS(50), 11,
      ts_builtin_sym_end,
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
  [222] = 3,
    ACTIONS(57), 1,
      aux_sym_integer_token2,
    STATE(12), 1,
      aux_sym_integer_repeat3,
    ACTIONS(55), 11,
      ts_builtin_sym_end,
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
  [242] = 3,
    ACTIONS(62), 1,
      aux_sym_integer_token1,
    STATE(13), 1,
      aux_sym_integer_repeat2,
    ACTIONS(60), 11,
      ts_builtin_sym_end,
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
  [262] = 2,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 10,
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
  [278] = 3,
    ACTIONS(67), 1,
      aux_sym_percent_string_token1,
    STATE(16), 1,
      aux_sym_percent_string_repeat1,
    ACTIONS(65), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [292] = 3,
    ACTIONS(71), 1,
      aux_sym_percent_string_token1,
    STATE(18), 1,
      aux_sym_percent_string_repeat1,
    ACTIONS(69), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [306] = 5,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(20), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(28), 2,
      sym_quoted_string,
      sym_percent_string,
  [324] = 3,
    ACTIONS(77), 1,
      aux_sym_percent_string_token1,
    STATE(18), 1,
      aux_sym_percent_string_repeat1,
    ACTIONS(75), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_GT,
  [338] = 5,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_PERCENT,
    STATE(19), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(28), 2,
      sym_quoted_string,
      sym_percent_string,
  [356] = 5,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    STATE(19), 2,
      sym_string,
      aux_sym_chained_string_repeat1,
    STATE(28), 2,
      sym_quoted_string,
      sym_percent_string,
  [374] = 1,
    ACTIONS(90), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_PIPE,
  [382] = 1,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [388] = 3,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      aux_sym_quoted_string_token1,
    STATE(23), 1,
      aux_sym_quoted_string_repeat1,
  [398] = 1,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [404] = 3,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      aux_sym_quoted_string_token1,
    STATE(26), 1,
      aux_sym_quoted_string_repeat1,
  [414] = 3,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      aux_sym_quoted_string_token1,
    STATE(23), 1,
      aux_sym_quoted_string_repeat1,
  [424] = 1,
    ACTIONS(109), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [430] = 1,
    ACTIONS(111), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [436] = 1,
    ACTIONS(113), 3,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_PERCENT,
  [442] = 1,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
  [446] = 1,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
  [450] = 1,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
  [454] = 1,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 114,
  [SMALL_STATE(8)] = 136,
  [SMALL_STATE(9)] = 158,
  [SMALL_STATE(10)] = 180,
  [SMALL_STATE(11)] = 202,
  [SMALL_STATE(12)] = 222,
  [SMALL_STATE(13)] = 242,
  [SMALL_STATE(14)] = 262,
  [SMALL_STATE(15)] = 278,
  [SMALL_STATE(16)] = 292,
  [SMALL_STATE(17)] = 306,
  [SMALL_STATE(18)] = 324,
  [SMALL_STATE(19)] = 338,
  [SMALL_STATE(20)] = 356,
  [SMALL_STATE(21)] = 374,
  [SMALL_STATE(22)] = 382,
  [SMALL_STATE(23)] = 388,
  [SMALL_STATE(24)] = 398,
  [SMALL_STATE(25)] = 404,
  [SMALL_STATE(26)] = 414,
  [SMALL_STATE(27)] = 424,
  [SMALL_STATE(28)] = 430,
  [SMALL_STATE(29)] = 436,
  [SMALL_STATE(30)] = 442,
  [SMALL_STATE(31)] = 446,
  [SMALL_STATE(32)] = 450,
  [SMALL_STATE(33)] = 454,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2), SHIFT_REPEAT(4),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat4, 2),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat4, 2), SHIFT_REPEAT(11),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat3, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat3, 2), SHIFT_REPEAT(12),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat2, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat2, 2), SHIFT_REPEAT(13),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_percent_string_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_percent_string_repeat1, 2), SHIFT_REPEAT(18),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chained_string_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chained_string_repeat1, 2), SHIFT_REPEAT(25),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chained_string_repeat1, 2), SHIFT_REPEAT(21),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chained_string, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_percent_string, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(23),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_percent_string, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [119] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
