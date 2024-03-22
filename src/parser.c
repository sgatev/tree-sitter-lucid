#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 92
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_let = 1,
  anon_sym_EQ = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COLON = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  anon_sym_DASH_GT = 7,
  sym_ident = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_if = 13,
  anon_sym_else = 14,
  sym_number = 15,
  sym_string = 16,
  anon_sym_LT = 17,
  anon_sym_GT = 18,
  anon_sym_PLUS = 19,
  anon_sym_DASH = 20,
  anon_sym_PERCENT = 21,
  anon_sym_EQ_EQ = 22,
  anon_sym_return = 23,
  anon_sym_do = 24,
  anon_sym_break = 25,
  anon_sym_loop = 26,
  sym_source_file = 27,
  sym_func = 28,
  sym_type = 29,
  sym_body = 30,
  sym_stmt = 31,
  sym_if_stmt = 32,
  sym_expr = 33,
  sym_binary_expr = 34,
  sym_binary_op = 35,
  sym_return_stmt = 36,
  sym_do_stmt = 37,
  sym_break_stmt = 38,
  sym_loop_stmt = 39,
  sym_func_call = 40,
  sym_var_decl_stmt = 41,
  sym_var_assign_stmt = 42,
  sym_array_index = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_func_repeat1 = 45,
  aux_sym_body_repeat1 = 46,
  aux_sym_if_stmt_repeat1 = 47,
  aux_sym_func_call_repeat1 = 48,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [sym_ident] = "ident",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_PERCENT] = "%",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_return] = "return",
  [anon_sym_do] = "do",
  [anon_sym_break] = "break",
  [anon_sym_loop] = "loop",
  [sym_source_file] = "source_file",
  [sym_func] = "func",
  [sym_type] = "type",
  [sym_body] = "body",
  [sym_stmt] = "stmt",
  [sym_if_stmt] = "if_stmt",
  [sym_expr] = "expr",
  [sym_binary_expr] = "binary_expr",
  [sym_binary_op] = "binary_op",
  [sym_return_stmt] = "return_stmt",
  [sym_do_stmt] = "do_stmt",
  [sym_break_stmt] = "break_stmt",
  [sym_loop_stmt] = "loop_stmt",
  [sym_func_call] = "func_call",
  [sym_var_decl_stmt] = "var_decl_stmt",
  [sym_var_assign_stmt] = "var_assign_stmt",
  [sym_array_index] = "array_index",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_func_repeat1] = "func_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_if_stmt_repeat1] = "if_stmt_repeat1",
  [aux_sym_func_call_repeat1] = "func_call_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_ident] = sym_ident,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_loop] = anon_sym_loop,
  [sym_source_file] = sym_source_file,
  [sym_func] = sym_func,
  [sym_type] = sym_type,
  [sym_body] = sym_body,
  [sym_stmt] = sym_stmt,
  [sym_if_stmt] = sym_if_stmt,
  [sym_expr] = sym_expr,
  [sym_binary_expr] = sym_binary_expr,
  [sym_binary_op] = sym_binary_op,
  [sym_return_stmt] = sym_return_stmt,
  [sym_do_stmt] = sym_do_stmt,
  [sym_break_stmt] = sym_break_stmt,
  [sym_loop_stmt] = sym_loop_stmt,
  [sym_func_call] = sym_func_call,
  [sym_var_decl_stmt] = sym_var_decl_stmt,
  [sym_var_assign_stmt] = sym_var_assign_stmt,
  [sym_array_index] = sym_array_index,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_func_repeat1] = aux_sym_func_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_if_stmt_repeat1] = aux_sym_if_stmt_repeat1,
  [aux_sym_func_call_repeat1] = aux_sym_func_call_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loop] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_func] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_if_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_return_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_do_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_break_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_loop_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_func_call] = {
    .visible = true,
    .named = true,
  },
  [sym_var_decl_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_var_assign_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_array_index] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_func_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_func_call_repeat1] = {
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
  [8] = 6,
  [9] = 7,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 7,
  [15] = 6,
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
  [31] = 25,
  [32] = 26,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 25,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 26,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '0') ADVANCE(47);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == ']') ADVANCE(41);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '}') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '0') ADVANCE(47);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == '{') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '[') ADVANCE(40);
      if (lookahead == ']') ADVANCE(41);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '}') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == ']') ADVANCE(41);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == '{') ADVANCE(42);
      if (lookahead == '}') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(20);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(18);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == ']') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == '{') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'a') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'f') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'k') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'l') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'r') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'u') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(20);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_loop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_loop] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(91),
    [sym_func] = STATE(48),
    [aux_sym_source_file_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_let] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 7,
      anon_sym_let,
      sym_ident,
      anon_sym_if,
      anon_sym_return,
      anon_sym_do,
      anon_sym_break,
      anon_sym_loop,
    ACTIONS(11), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
  [29] = 3,
    STATE(46), 1,
      sym_binary_op,
    ACTIONS(15), 7,
      anon_sym_let,
      sym_ident,
      anon_sym_if,
      anon_sym_return,
      anon_sym_do,
      anon_sym_break,
      anon_sym_loop,
    ACTIONS(17), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
  [55] = 2,
    ACTIONS(19), 8,
      anon_sym_let,
      anon_sym_EQ,
      sym_ident,
      anon_sym_if,
      anon_sym_return,
      anon_sym_do,
      anon_sym_break,
      anon_sym_loop,
    ACTIONS(21), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
  [79] = 2,
    ACTIONS(7), 7,
      anon_sym_let,
      sym_ident,
      anon_sym_if,
      anon_sym_return,
      anon_sym_do,
      anon_sym_break,
      anon_sym_loop,
    ACTIONS(11), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
  [102] = 11,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      sym_ident,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_break,
    ACTIONS(37), 1,
      anon_sym_loop,
    STATE(79), 1,
      sym_array_index,
    STATE(13), 2,
      sym_stmt,
      aux_sym_body_repeat1,
    STATE(36), 7,
      sym_if_stmt,
      sym_return_stmt,
      sym_do_stmt,
      sym_break_stmt,
      sym_loop_stmt,
      sym_var_decl_stmt,
      sym_var_assign_stmt,
  [143] = 11,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_break,
    ACTIONS(37), 1,
      anon_sym_loop,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_array_index,
    STATE(6), 2,
      sym_stmt,
      aux_sym_body_repeat1,
    STATE(36), 7,
      sym_if_stmt,
      sym_return_stmt,
      sym_do_stmt,
      sym_break_stmt,
      sym_loop_stmt,
      sym_var_decl_stmt,
      sym_var_assign_stmt,
  [184] = 11,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_break,
    ACTIONS(37), 1,
      anon_sym_loop,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_array_index,
    STATE(13), 2,
      sym_stmt,
      aux_sym_body_repeat1,
    STATE(36), 7,
      sym_if_stmt,
      sym_return_stmt,
      sym_do_stmt,
      sym_break_stmt,
      sym_loop_stmt,
      sym_var_decl_stmt,
      sym_var_assign_stmt,
  [225] = 11,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_break,
    ACTIONS(37), 1,
      anon_sym_loop,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_array_index,
    STATE(8), 2,
      sym_stmt,
      aux_sym_body_repeat1,
    STATE(36), 7,
      sym_if_stmt,
      sym_return_stmt,
      sym_do_stmt,
      sym_break_stmt,
      sym_loop_stmt,
      sym_var_decl_stmt,
      sym_var_assign_stmt,
  [266] = 2,
    ACTIONS(45), 7,
      anon_sym_let,
      sym_ident,
      anon_sym_if,
      anon_sym_return,
      anon_sym_do,
      anon_sym_break,
      anon_sym_loop,
    ACTIONS(47), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
  [289] = 2,
    ACTIONS(49), 7,
      anon_sym_let,
      sym_ident,
      anon_sym_if,
      anon_sym_return,
      anon_sym_do,
      anon_sym_break,
      anon_sym_loop,
    ACTIONS(51), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
  [312] = 2,
    ACTIONS(53), 7,
      anon_sym_let,
      sym_ident,
      anon_sym_if,
      anon_sym_return,
      anon_sym_do,
      anon_sym_break,
      anon_sym_loop,
    ACTIONS(55), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
  [335] = 11,
    ACTIONS(57), 1,
      anon_sym_let,
    ACTIONS(60), 1,
      sym_ident,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      anon_sym_if,
    ACTIONS(68), 1,
      anon_sym_return,
    ACTIONS(71), 1,
      anon_sym_do,
    ACTIONS(74), 1,
      anon_sym_break,
    ACTIONS(77), 1,
      anon_sym_loop,
    STATE(79), 1,
      sym_array_index,
    STATE(13), 2,
      sym_stmt,
      aux_sym_body_repeat1,
    STATE(36), 7,
      sym_if_stmt,
      sym_return_stmt,
      sym_do_stmt,
      sym_break_stmt,
      sym_loop_stmt,
      sym_var_decl_stmt,
      sym_var_assign_stmt,
  [376] = 11,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_break,
    ACTIONS(37), 1,
      anon_sym_loop,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_array_index,
    STATE(15), 2,
      sym_stmt,
      aux_sym_body_repeat1,
    STATE(36), 7,
      sym_if_stmt,
      sym_return_stmt,
      sym_do_stmt,
      sym_break_stmt,
      sym_loop_stmt,
      sym_var_decl_stmt,
      sym_var_assign_stmt,
  [417] = 11,
    ACTIONS(23), 1,
      anon_sym_let,
    ACTIONS(25), 1,
      sym_ident,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      anon_sym_do,
    ACTIONS(35), 1,
      anon_sym_break,
    ACTIONS(37), 1,
      anon_sym_loop,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_array_index,
    STATE(13), 2,
      sym_stmt,
      aux_sym_body_repeat1,
    STATE(36), 7,
      sym_if_stmt,
      sym_return_stmt,
      sym_do_stmt,
      sym_break_stmt,
      sym_loop_stmt,
      sym_var_decl_stmt,
      sym_var_assign_stmt,
  [458] = 4,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      sym_binary_op,
    ACTIONS(88), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
    ACTIONS(84), 7,
      anon_sym_let,
      sym_ident,
      anon_sym_if,
      anon_sym_return,
      anon_sym_do,
      anon_sym_break,
      anon_sym_loop,
  [482] = 4,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      sym_binary_op,
    ACTIONS(88), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
    ACTIONS(90), 7,
      anon_sym_let,
      sym_ident,
      anon_sym_if,
      anon_sym_return,
      anon_sym_do,
      anon_sym_break,
      anon_sym_loop,
  [506] = 4,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      sym_binary_op,
    ACTIONS(88), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
    ACTIONS(94), 7,
      anon_sym_let,
      sym_ident,
      anon_sym_if,
      anon_sym_return,
      anon_sym_do,
      anon_sym_break,
      anon_sym_loop,
  [530] = 4,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      sym_binary_op,
    ACTIONS(88), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
    ACTIONS(98), 7,
      anon_sym_let,
      sym_ident,
      anon_sym_if,
      anon_sym_return,
      anon_sym_do,
      anon_sym_break,
      anon_sym_loop,
  [554] = 4,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(106), 1,
      anon_sym_else,
    STATE(21), 1,
      aux_sym_if_stmt_repeat1,
    ACTIONS(102), 7,
      anon_sym_let,
      sym_ident,
      anon_sym_if,
      anon_sym_return,
      anon_sym_do,
      anon_sym_break,
      anon_sym_loop,
  [573] = 4,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    ACTIONS(112), 1,
      anon_sym_else,
    STATE(21), 1,
      aux_sym_if_stmt_repeat1,
    ACTIONS(108), 7,
      anon_sym_let,
      sym_ident,
      anon_sym_if,
      anon_sym_return,
      anon_sym_do,
      anon_sym_break,
      anon_sym_loop,
  [592] = 5,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym_binary_op,
    STATE(54), 1,
      aux_sym_func_call_repeat1,
    ACTIONS(88), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
  [613] = 4,
    ACTIONS(106), 1,
      anon_sym_else,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      aux_sym_if_stmt_repeat1,
    ACTIONS(119), 7,
      anon_sym_let,
      sym_ident,
      anon_sym_if,
      anon_sym_return,
      anon_sym_do,
      anon_sym_break,
      anon_sym_loop,
  [632] = 4,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_body,
    STATE(46), 1,
      sym_binary_op,
    ACTIONS(88), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
  [650] = 2,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(125), 8,
      anon_sym_let,
      sym_ident,
      anon_sym_if,
      anon_sym_else,
      anon_sym_return,
      anon_sym_do,
      anon_sym_break,
      anon_sym_loop,
  [664] = 2,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    ACTIONS(129), 8,
      anon_sym_let,
      sym_ident,
      anon_sym_if,
      anon_sym_else,
      anon_sym_return,
      anon_sym_do,
      anon_sym_break,
      anon_sym_loop,
  [678] = 2,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    ACTIONS(133), 8,
      anon_sym_let,
      sym_ident,
      anon_sym_if,
      anon_sym_else,
      anon_sym_return,
      anon_sym_do,
      anon_sym_break,
      anon_sym_loop,
  [692] = 4,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_body,
    STATE(46), 1,
      sym_binary_op,
    ACTIONS(88), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
  [710] = 3,
    STATE(46), 1,
      sym_binary_op,
    ACTIONS(137), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(88), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
  [726] = 2,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    ACTIONS(108), 8,
      anon_sym_let,
      sym_ident,
      anon_sym_if,
      anon_sym_else,
      anon_sym_return,
      anon_sym_do,
      anon_sym_break,
      anon_sym_loop,
  [740] = 2,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(125), 7,
      anon_sym_let,
      sym_ident,
      anon_sym_if,
      anon_sym_return,
      anon_sym_do,
      anon_sym_break,
      anon_sym_loop,
  [753] = 2,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    ACTIONS(129), 7,
      anon_sym_let,
      sym_ident,
      anon_sym_if,
      anon_sym_return,
      anon_sym_do,
      anon_sym_break,
      anon_sym_loop,
  [766] = 5,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(141), 1,
      sym_ident,
    STATE(22), 1,
      sym_expr,
    ACTIONS(143), 2,
      sym_number,
      sym_string,
    STATE(5), 3,
      sym_binary_expr,
      sym_func_call,
      sym_array_index,
  [785] = 2,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 7,
      anon_sym_let,
      sym_ident,
      anon_sym_if,
      anon_sym_return,
      anon_sym_do,
      anon_sym_break,
      anon_sym_loop,
  [798] = 3,
    ACTIONS(149), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      sym_binary_op,
    ACTIONS(88), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PERCENT,
      anon_sym_EQ_EQ,
  [813] = 2,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    ACTIONS(151), 7,
      anon_sym_let,
      sym_ident,
      anon_sym_if,
      anon_sym_return,
      anon_sym_do,
      anon_sym_break,
      anon_sym_loop,
  [826] = 2,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    ACTIONS(155), 7,
      anon_sym_let,
      sym_ident,
      anon_sym_if,
      anon_sym_return,
      anon_sym_do,
      anon_sym_break,
      anon_sym_loop,
  [839] = 4,
    ACTIONS(141), 1,
      sym_ident,
    STATE(29), 1,
      sym_expr,
    ACTIONS(143), 2,
      sym_number,
      sym_string,
    STATE(5), 3,
      sym_binary_expr,
      sym_func_call,
      sym_array_index,
  [855] = 4,
    ACTIONS(141), 1,
      sym_ident,
    STATE(18), 1,
      sym_expr,
    ACTIONS(143), 2,
      sym_number,
      sym_string,
    STATE(5), 3,
      sym_binary_expr,
      sym_func_call,
      sym_array_index,
  [871] = 4,
    ACTIONS(141), 1,
      sym_ident,
    STATE(17), 1,
      sym_expr,
    ACTIONS(143), 2,
      sym_number,
      sym_string,
    STATE(5), 3,
      sym_binary_expr,
      sym_func_call,
      sym_array_index,
  [887] = 4,
    ACTIONS(141), 1,
      sym_ident,
    STATE(35), 1,
      sym_expr,
    ACTIONS(143), 2,
      sym_number,
      sym_string,
    STATE(5), 3,
      sym_binary_expr,
      sym_func_call,
      sym_array_index,
  [903] = 4,
    ACTIONS(141), 1,
      sym_ident,
    STATE(24), 1,
      sym_expr,
    ACTIONS(143), 2,
      sym_number,
      sym_string,
    STATE(5), 3,
      sym_binary_expr,
      sym_func_call,
      sym_array_index,
  [919] = 4,
    ACTIONS(141), 1,
      sym_ident,
    STATE(28), 1,
      sym_expr,
    ACTIONS(143), 2,
      sym_number,
      sym_string,
    STATE(5), 3,
      sym_binary_expr,
      sym_func_call,
      sym_array_index,
  [935] = 4,
    ACTIONS(141), 1,
      sym_ident,
    STATE(16), 1,
      sym_expr,
    ACTIONS(143), 2,
      sym_number,
      sym_string,
    STATE(5), 3,
      sym_binary_expr,
      sym_func_call,
      sym_array_index,
  [951] = 4,
    ACTIONS(141), 1,
      sym_ident,
    STATE(19), 1,
      sym_expr,
    ACTIONS(143), 2,
      sym_number,
      sym_string,
    STATE(5), 3,
      sym_binary_expr,
      sym_func_call,
      sym_array_index,
  [967] = 4,
    ACTIONS(141), 1,
      sym_ident,
    STATE(3), 1,
      sym_expr,
    ACTIONS(143), 2,
      sym_number,
      sym_string,
    STATE(5), 3,
      sym_binary_expr,
      sym_func_call,
      sym_array_index,
  [983] = 2,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [993] = 3,
    ACTIONS(5), 1,
      anon_sym_let,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    STATE(49), 2,
      sym_func,
      aux_sym_source_file_repeat1,
  [1004] = 3,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 1,
      anon_sym_let,
    STATE(49), 2,
      sym_func,
      aux_sym_source_file_repeat1,
  [1015] = 1,
    ACTIONS(170), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [1022] = 3,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_func_repeat1,
  [1032] = 3,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_func_repeat1,
  [1042] = 3,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym_func_call_repeat1,
  [1052] = 3,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    STATE(53), 1,
      aux_sym_func_call_repeat1,
  [1062] = 3,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym_func_repeat1,
  [1072] = 3,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    ACTIONS(188), 1,
      anon_sym_if,
    STATE(30), 1,
      sym_body,
  [1082] = 1,
    ACTIONS(190), 3,
      sym_ident,
      sym_number,
      sym_string,
  [1088] = 2,
    ACTIONS(192), 1,
      sym_ident,
    STATE(63), 1,
      sym_type,
  [1095] = 2,
    ACTIONS(192), 1,
      sym_ident,
    STATE(61), 1,
      sym_type,
  [1102] = 2,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_body,
  [1109] = 1,
    ACTIONS(196), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1114] = 1,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_let,
  [1119] = 2,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_body,
  [1126] = 2,
    ACTIONS(192), 1,
      sym_ident,
    STATE(74), 1,
      sym_type,
  [1133] = 2,
    ACTIONS(192), 1,
      sym_ident,
    STATE(55), 1,
      sym_type,
  [1140] = 1,
    ACTIONS(202), 2,
      ts_builtin_sym_end,
      anon_sym_let,
  [1145] = 2,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_body,
  [1152] = 2,
    ACTIONS(192), 1,
      sym_ident,
    STATE(67), 1,
      sym_type,
  [1159] = 1,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_let,
  [1164] = 1,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      anon_sym_let,
  [1169] = 2,
    ACTIONS(192), 1,
      sym_ident,
    STATE(90), 1,
      sym_type,
  [1176] = 2,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(206), 1,
      anon_sym_EQ,
  [1183] = 2,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    ACTIONS(210), 1,
      sym_ident,
  [1190] = 2,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_body,
  [1197] = 1,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_let,
  [1202] = 1,
    ACTIONS(212), 1,
      sym_ident,
  [1206] = 1,
    ACTIONS(214), 1,
      sym_number,
  [1210] = 1,
    ACTIONS(216), 1,
      anon_sym_DASH_GT,
  [1214] = 1,
    ACTIONS(206), 1,
      anon_sym_EQ,
  [1218] = 1,
    ACTIONS(218), 1,
      anon_sym_LPAREN,
  [1222] = 1,
    ACTIONS(220), 1,
      anon_sym_COLON,
  [1226] = 1,
    ACTIONS(222), 1,
      sym_ident,
  [1230] = 1,
    ACTIONS(224), 1,
      anon_sym_RBRACK,
  [1234] = 1,
    ACTIONS(226), 1,
      anon_sym_COLON,
  [1238] = 1,
    ACTIONS(228), 1,
      anon_sym_DASH_GT,
  [1242] = 1,
    ACTIONS(230), 1,
      sym_ident,
  [1246] = 1,
    ACTIONS(232), 1,
      anon_sym_COLON,
  [1250] = 1,
    ACTIONS(234), 1,
      anon_sym_DASH_GT,
  [1254] = 1,
    ACTIONS(236), 1,
      anon_sym_EQ,
  [1258] = 1,
    ACTIONS(238), 1,
      anon_sym_EQ,
  [1262] = 1,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 55,
  [SMALL_STATE(5)] = 79,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 143,
  [SMALL_STATE(8)] = 184,
  [SMALL_STATE(9)] = 225,
  [SMALL_STATE(10)] = 266,
  [SMALL_STATE(11)] = 289,
  [SMALL_STATE(12)] = 312,
  [SMALL_STATE(13)] = 335,
  [SMALL_STATE(14)] = 376,
  [SMALL_STATE(15)] = 417,
  [SMALL_STATE(16)] = 458,
  [SMALL_STATE(17)] = 482,
  [SMALL_STATE(18)] = 506,
  [SMALL_STATE(19)] = 530,
  [SMALL_STATE(20)] = 554,
  [SMALL_STATE(21)] = 573,
  [SMALL_STATE(22)] = 592,
  [SMALL_STATE(23)] = 613,
  [SMALL_STATE(24)] = 632,
  [SMALL_STATE(25)] = 650,
  [SMALL_STATE(26)] = 664,
  [SMALL_STATE(27)] = 678,
  [SMALL_STATE(28)] = 692,
  [SMALL_STATE(29)] = 710,
  [SMALL_STATE(30)] = 726,
  [SMALL_STATE(31)] = 740,
  [SMALL_STATE(32)] = 753,
  [SMALL_STATE(33)] = 766,
  [SMALL_STATE(34)] = 785,
  [SMALL_STATE(35)] = 798,
  [SMALL_STATE(36)] = 813,
  [SMALL_STATE(37)] = 826,
  [SMALL_STATE(38)] = 839,
  [SMALL_STATE(39)] = 855,
  [SMALL_STATE(40)] = 871,
  [SMALL_STATE(41)] = 887,
  [SMALL_STATE(42)] = 903,
  [SMALL_STATE(43)] = 919,
  [SMALL_STATE(44)] = 935,
  [SMALL_STATE(45)] = 951,
  [SMALL_STATE(46)] = 967,
  [SMALL_STATE(47)] = 983,
  [SMALL_STATE(48)] = 993,
  [SMALL_STATE(49)] = 1004,
  [SMALL_STATE(50)] = 1015,
  [SMALL_STATE(51)] = 1022,
  [SMALL_STATE(52)] = 1032,
  [SMALL_STATE(53)] = 1042,
  [SMALL_STATE(54)] = 1052,
  [SMALL_STATE(55)] = 1062,
  [SMALL_STATE(56)] = 1072,
  [SMALL_STATE(57)] = 1082,
  [SMALL_STATE(58)] = 1088,
  [SMALL_STATE(59)] = 1095,
  [SMALL_STATE(60)] = 1102,
  [SMALL_STATE(61)] = 1109,
  [SMALL_STATE(62)] = 1114,
  [SMALL_STATE(63)] = 1119,
  [SMALL_STATE(64)] = 1126,
  [SMALL_STATE(65)] = 1133,
  [SMALL_STATE(66)] = 1140,
  [SMALL_STATE(67)] = 1145,
  [SMALL_STATE(68)] = 1152,
  [SMALL_STATE(69)] = 1159,
  [SMALL_STATE(70)] = 1164,
  [SMALL_STATE(71)] = 1169,
  [SMALL_STATE(72)] = 1176,
  [SMALL_STATE(73)] = 1183,
  [SMALL_STATE(74)] = 1190,
  [SMALL_STATE(75)] = 1197,
  [SMALL_STATE(76)] = 1202,
  [SMALL_STATE(77)] = 1206,
  [SMALL_STATE(78)] = 1210,
  [SMALL_STATE(79)] = 1214,
  [SMALL_STATE(80)] = 1218,
  [SMALL_STATE(81)] = 1222,
  [SMALL_STATE(82)] = 1226,
  [SMALL_STATE(83)] = 1230,
  [SMALL_STATE(84)] = 1234,
  [SMALL_STATE(85)] = 1238,
  [SMALL_STATE(86)] = 1242,
  [SMALL_STATE(87)] = 1246,
  [SMALL_STATE(88)] = 1250,
  [SMALL_STATE(89)] = 1254,
  [SMALL_STATE(90)] = 1258,
  [SMALL_STATE(91)] = 1262,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_index, 4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_index, 4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call, 5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call, 5),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call, 4),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call, 3),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(82),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(72),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(42),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(45),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(39),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(34),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(60),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_decl_stmt, 6),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl_stmt, 6),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_assign_stmt, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_assign_stmt, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_do_stmt, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_stmt, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_stmt, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_stmt, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_stmt, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 4),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_stmt_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_stmt_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_stmt_repeat1, 2), SHIFT_REPEAT(56),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_stmt, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_stmt, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_stmt_repeat1, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_stmt_repeat1, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_break_stmt, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break_stmt, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmt, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop_stmt, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop_stmt, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 2), SHIFT_REPEAT(86),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_repeat1, 2), SHIFT_REPEAT(38),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_op, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_repeat1, 4),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 11),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 8),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 12),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [240] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_lucid() {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
