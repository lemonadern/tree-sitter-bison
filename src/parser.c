#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 187
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 104
#define ALIAS_COUNT 0
#define TOKEN_COUNT 56
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_PERCENT_LBRACE = 1,
  anon_sym_PERCENT_RBRACE = 2,
  aux_sym_prologue_body_token1 = 3,
  anon_sym_PERCENT_PERCENT = 4,
  aux_sym_grammar_rule_token1 = 5,
  anon_sym_COLON = 6,
  anon_sym_PIPE = 7,
  anon_sym_SEMI = 8,
  anon_sym_PERCENTtype = 9,
  anon_sym_PERCENTrequire = 10,
  anon_sym_PERCENTtoken = 11,
  anon_sym_PERCENTnterm = 12,
  anon_sym_PERCENT = 13,
  anon_sym_left = 14,
  anon_sym_right = 15,
  anon_sym_nonassoc = 16,
  anon_sym_precedence = 17,
  anon_sym_PERCENTinitial_DASHdeclaration = 18,
  sym_decl_glr_parser = 19,
  anon_sym_PERCENTdestructor = 20,
  anon_sym_LT = 21,
  anon_sym_STAR = 22,
  anon_sym_GT = 23,
  anon_sym_PERCENTprinter = 24,
  anon_sym_expect = 25,
  anon_sym_expect_DASHrr = 26,
  aux_sym_decl_expect_token1 = 27,
  anon_sym_PERCENTstart = 28,
  anon_sym_PERCENTdefine = 29,
  anon_sym_DOT = 30,
  anon_sym_LBRACE = 31,
  anon_sym_RBRACE = 32,
  anon_sym_PERCENTcode = 33,
  anon_sym_PERCENTunion = 34,
  anon_sym_PERCENTdebug = 35,
  sym_decl_header = 36,
  sym_decl_locations = 37,
  anon_sym_PERCENTmerge = 38,
  sym_directive_empty = 39,
  anon_sym__LPAREN = 40,
  anon_sym_RPAREN = 41,
  anon_sym_L_DQUOTE = 42,
  anon_sym_u_DQUOTE = 43,
  anon_sym_U_DQUOTE = 44,
  anon_sym_u8_DQUOTE = 45,
  anon_sym_DQUOTE = 46,
  aux_sym_string_literal_token1 = 47,
  sym_number_literal = 48,
  anon_sym__ = 49,
  anon_sym_SQUOTE = 50,
  aux_sym_char_quoted_token1 = 51,
  anon_sym_SLASH_STAR = 52,
  aux_sym_comment_token1 = 53,
  anon_sym_SLASH = 54,
  sym_undelimited_code_block = 55,
  sym_sections = 56,
  sym_prologue = 57,
  sym_prologue_body = 58,
  sym_grammar_rules_section = 59,
  sym_grammar_rules_body = 60,
  sym_grammar_rule = 61,
  sym_component = 62,
  sym_action = 63,
  sym_declaration = 64,
  sym_decl_type = 65,
  sym_decl_require = 66,
  sym_decl_token = 67,
  sym_decl_nterm = 68,
  sym_decl_op_precedence = 69,
  sym_decl_initial_declaration = 70,
  sym_decl_destructor = 71,
  sym_decl_printer = 72,
  sym_decl_expect = 73,
  sym_decl_start = 74,
  sym_decl_define = 75,
  sym_decl_code = 76,
  sym_decl_union = 77,
  sym_decl_debug = 78,
  sym_directive_merge = 79,
  sym_string = 80,
  sym_string_literal = 81,
  sym_type_tag = 82,
  sym_code_block = 83,
  sym_char_quoted = 84,
  sym_comment = 85,
  aux_sym_sections_repeat1 = 86,
  aux_sym_prologue_body_repeat1 = 87,
  aux_sym_grammar_rules_body_repeat1 = 88,
  aux_sym_grammar_rule_repeat1 = 89,
  aux_sym_grammar_rule_repeat2 = 90,
  aux_sym_decl_type_repeat1 = 91,
  aux_sym_decl_type_repeat2 = 92,
  aux_sym_decl_token_repeat1 = 93,
  aux_sym_decl_token_repeat2 = 94,
  aux_sym_decl_token_repeat3 = 95,
  aux_sym_decl_nterm_repeat1 = 96,
  aux_sym_decl_nterm_repeat2 = 97,
  aux_sym_decl_op_precedence_repeat1 = 98,
  aux_sym_decl_op_precedence_repeat2 = 99,
  aux_sym_decl_destructor_repeat1 = 100,
  aux_sym_decl_define_repeat1 = 101,
  aux_sym_string_literal_repeat1 = 102,
  aux_sym_type_tag_repeat1 = 103,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PERCENT_LBRACE] = "%{",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [aux_sym_prologue_body_token1] = "prologue_body_token1",
  [anon_sym_PERCENT_PERCENT] = "%%",
  [aux_sym_grammar_rule_token1] = "grammar_rule_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_PIPE] = "|",
  [anon_sym_SEMI] = ";",
  [anon_sym_PERCENTtype] = "%type",
  [anon_sym_PERCENTrequire] = "%require",
  [anon_sym_PERCENTtoken] = "%token",
  [anon_sym_PERCENTnterm] = "%nterm",
  [anon_sym_PERCENT] = "%",
  [anon_sym_left] = "left",
  [anon_sym_right] = "right",
  [anon_sym_nonassoc] = "nonassoc",
  [anon_sym_precedence] = "precedence",
  [anon_sym_PERCENTinitial_DASHdeclaration] = "%initial-declaration",
  [sym_decl_glr_parser] = "decl_glr_parser",
  [anon_sym_PERCENTdestructor] = "%destructor",
  [anon_sym_LT] = "<",
  [anon_sym_STAR] = "*",
  [anon_sym_GT] = ">",
  [anon_sym_PERCENTprinter] = "%printer",
  [anon_sym_expect] = "expect",
  [anon_sym_expect_DASHrr] = "expect-rr",
  [aux_sym_decl_expect_token1] = "decl_expect_token1",
  [anon_sym_PERCENTstart] = "%start",
  [anon_sym_PERCENTdefine] = "%define",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PERCENTcode] = "%code",
  [anon_sym_PERCENTunion] = "%union",
  [anon_sym_PERCENTdebug] = "%debug",
  [sym_decl_header] = "decl_header",
  [sym_decl_locations] = "decl_locations",
  [anon_sym_PERCENTmerge] = "%merge",
  [sym_directive_empty] = "directive_empty",
  [anon_sym__LPAREN] = "_(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_L_DQUOTE] = "L\"",
  [anon_sym_u_DQUOTE] = "u\"",
  [anon_sym_U_DQUOTE] = "U\"",
  [anon_sym_u8_DQUOTE] = "u8\"",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_content",
  [sym_number_literal] = "number_literal",
  [anon_sym__] = "_",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_quoted_token1] = "char_quoted_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH] = "/",
  [sym_undelimited_code_block] = "undelimited_code_block",
  [sym_sections] = "sections",
  [sym_prologue] = "prologue",
  [sym_prologue_body] = "prologue_body",
  [sym_grammar_rules_section] = "grammar_rules_section",
  [sym_grammar_rules_body] = "grammar_rules_body",
  [sym_grammar_rule] = "grammar_rule",
  [sym_component] = "component",
  [sym_action] = "action",
  [sym_declaration] = "declaration",
  [sym_decl_type] = "decl_type",
  [sym_decl_require] = "decl_require",
  [sym_decl_token] = "decl_token",
  [sym_decl_nterm] = "decl_nterm",
  [sym_decl_op_precedence] = "decl_op_precedence",
  [sym_decl_initial_declaration] = "decl_initial_declaration",
  [sym_decl_destructor] = "decl_destructor",
  [sym_decl_printer] = "decl_printer",
  [sym_decl_expect] = "decl_expect",
  [sym_decl_start] = "decl_start",
  [sym_decl_define] = "decl_define",
  [sym_decl_code] = "decl_code",
  [sym_decl_union] = "decl_union",
  [sym_decl_debug] = "decl_debug",
  [sym_directive_merge] = "directive_merge",
  [sym_string] = "string",
  [sym_string_literal] = "string_literal",
  [sym_type_tag] = "type_tag",
  [sym_code_block] = "code_block",
  [sym_char_quoted] = "char_quoted",
  [sym_comment] = "comment",
  [aux_sym_sections_repeat1] = "sections_repeat1",
  [aux_sym_prologue_body_repeat1] = "prologue_body_repeat1",
  [aux_sym_grammar_rules_body_repeat1] = "grammar_rules_body_repeat1",
  [aux_sym_grammar_rule_repeat1] = "grammar_rule_repeat1",
  [aux_sym_grammar_rule_repeat2] = "grammar_rule_repeat2",
  [aux_sym_decl_type_repeat1] = "decl_type_repeat1",
  [aux_sym_decl_type_repeat2] = "decl_type_repeat2",
  [aux_sym_decl_token_repeat1] = "decl_token_repeat1",
  [aux_sym_decl_token_repeat2] = "decl_token_repeat2",
  [aux_sym_decl_token_repeat3] = "decl_token_repeat3",
  [aux_sym_decl_nterm_repeat1] = "decl_nterm_repeat1",
  [aux_sym_decl_nterm_repeat2] = "decl_nterm_repeat2",
  [aux_sym_decl_op_precedence_repeat1] = "decl_op_precedence_repeat1",
  [aux_sym_decl_op_precedence_repeat2] = "decl_op_precedence_repeat2",
  [aux_sym_decl_destructor_repeat1] = "decl_destructor_repeat1",
  [aux_sym_decl_define_repeat1] = "decl_define_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_type_tag_repeat1] = "type_tag_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PERCENT_LBRACE] = anon_sym_PERCENT_LBRACE,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [aux_sym_prologue_body_token1] = aux_sym_prologue_body_token1,
  [anon_sym_PERCENT_PERCENT] = anon_sym_PERCENT_PERCENT,
  [aux_sym_grammar_rule_token1] = aux_sym_grammar_rule_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_PERCENTtype] = anon_sym_PERCENTtype,
  [anon_sym_PERCENTrequire] = anon_sym_PERCENTrequire,
  [anon_sym_PERCENTtoken] = anon_sym_PERCENTtoken,
  [anon_sym_PERCENTnterm] = anon_sym_PERCENTnterm,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_nonassoc] = anon_sym_nonassoc,
  [anon_sym_precedence] = anon_sym_precedence,
  [anon_sym_PERCENTinitial_DASHdeclaration] = anon_sym_PERCENTinitial_DASHdeclaration,
  [sym_decl_glr_parser] = sym_decl_glr_parser,
  [anon_sym_PERCENTdestructor] = anon_sym_PERCENTdestructor,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_PERCENTprinter] = anon_sym_PERCENTprinter,
  [anon_sym_expect] = anon_sym_expect,
  [anon_sym_expect_DASHrr] = anon_sym_expect_DASHrr,
  [aux_sym_decl_expect_token1] = aux_sym_decl_expect_token1,
  [anon_sym_PERCENTstart] = anon_sym_PERCENTstart,
  [anon_sym_PERCENTdefine] = anon_sym_PERCENTdefine,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PERCENTcode] = anon_sym_PERCENTcode,
  [anon_sym_PERCENTunion] = anon_sym_PERCENTunion,
  [anon_sym_PERCENTdebug] = anon_sym_PERCENTdebug,
  [sym_decl_header] = sym_decl_header,
  [sym_decl_locations] = sym_decl_locations,
  [anon_sym_PERCENTmerge] = anon_sym_PERCENTmerge,
  [sym_directive_empty] = sym_directive_empty,
  [anon_sym__LPAREN] = anon_sym__LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_L_DQUOTE] = anon_sym_L_DQUOTE,
  [anon_sym_u_DQUOTE] = anon_sym_u_DQUOTE,
  [anon_sym_U_DQUOTE] = anon_sym_U_DQUOTE,
  [anon_sym_u8_DQUOTE] = anon_sym_u8_DQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_number_literal] = sym_number_literal,
  [anon_sym__] = anon_sym__,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_quoted_token1] = aux_sym_char_quoted_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_undelimited_code_block] = sym_undelimited_code_block,
  [sym_sections] = sym_sections,
  [sym_prologue] = sym_prologue,
  [sym_prologue_body] = sym_prologue_body,
  [sym_grammar_rules_section] = sym_grammar_rules_section,
  [sym_grammar_rules_body] = sym_grammar_rules_body,
  [sym_grammar_rule] = sym_grammar_rule,
  [sym_component] = sym_component,
  [sym_action] = sym_action,
  [sym_declaration] = sym_declaration,
  [sym_decl_type] = sym_decl_type,
  [sym_decl_require] = sym_decl_require,
  [sym_decl_token] = sym_decl_token,
  [sym_decl_nterm] = sym_decl_nterm,
  [sym_decl_op_precedence] = sym_decl_op_precedence,
  [sym_decl_initial_declaration] = sym_decl_initial_declaration,
  [sym_decl_destructor] = sym_decl_destructor,
  [sym_decl_printer] = sym_decl_printer,
  [sym_decl_expect] = sym_decl_expect,
  [sym_decl_start] = sym_decl_start,
  [sym_decl_define] = sym_decl_define,
  [sym_decl_code] = sym_decl_code,
  [sym_decl_union] = sym_decl_union,
  [sym_decl_debug] = sym_decl_debug,
  [sym_directive_merge] = sym_directive_merge,
  [sym_string] = sym_string,
  [sym_string_literal] = sym_string_literal,
  [sym_type_tag] = sym_type_tag,
  [sym_code_block] = sym_code_block,
  [sym_char_quoted] = sym_char_quoted,
  [sym_comment] = sym_comment,
  [aux_sym_sections_repeat1] = aux_sym_sections_repeat1,
  [aux_sym_prologue_body_repeat1] = aux_sym_prologue_body_repeat1,
  [aux_sym_grammar_rules_body_repeat1] = aux_sym_grammar_rules_body_repeat1,
  [aux_sym_grammar_rule_repeat1] = aux_sym_grammar_rule_repeat1,
  [aux_sym_grammar_rule_repeat2] = aux_sym_grammar_rule_repeat2,
  [aux_sym_decl_type_repeat1] = aux_sym_decl_type_repeat1,
  [aux_sym_decl_type_repeat2] = aux_sym_decl_type_repeat2,
  [aux_sym_decl_token_repeat1] = aux_sym_decl_token_repeat1,
  [aux_sym_decl_token_repeat2] = aux_sym_decl_token_repeat2,
  [aux_sym_decl_token_repeat3] = aux_sym_decl_token_repeat3,
  [aux_sym_decl_nterm_repeat1] = aux_sym_decl_nterm_repeat1,
  [aux_sym_decl_nterm_repeat2] = aux_sym_decl_nterm_repeat2,
  [aux_sym_decl_op_precedence_repeat1] = aux_sym_decl_op_precedence_repeat1,
  [aux_sym_decl_op_precedence_repeat2] = aux_sym_decl_op_precedence_repeat2,
  [aux_sym_decl_destructor_repeat1] = aux_sym_decl_destructor_repeat1,
  [aux_sym_decl_define_repeat1] = aux_sym_decl_define_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_type_tag_repeat1] = aux_sym_type_tag_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PERCENT_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_prologue_body_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_grammar_rule_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTrequire] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTtoken] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTnterm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nonassoc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_precedence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTinitial_DASHdeclaration] = {
    .visible = true,
    .named = false,
  },
  [sym_decl_glr_parser] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENTdestructor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTprinter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_expect_DASHrr] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_decl_expect_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENTstart] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTdefine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [anon_sym_PERCENTcode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTunion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTdebug] = {
    .visible = true,
    .named = false,
  },
  [sym_decl_header] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_locations] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENTmerge] = {
    .visible = true,
    .named = false,
  },
  [sym_directive_empty] = {
    .visible = true,
    .named = true,
  },
  [anon_sym__LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_L_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_U_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_quoted_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_undelimited_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_sections] = {
    .visible = true,
    .named = true,
  },
  [sym_prologue] = {
    .visible = true,
    .named = true,
  },
  [sym_prologue_body] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar_rules_section] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar_rules_body] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_component] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_type] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_require] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_token] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_nterm] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_op_precedence] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_initial_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_destructor] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_printer] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_expect] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_start] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_define] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_code] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_union] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_debug] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_merge] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_type_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_char_quoted] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_sections_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_prologue_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grammar_rules_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grammar_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grammar_rule_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_type_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_token_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_token_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_token_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_nterm_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_nterm_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_op_precedence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_op_precedence_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_destructor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_decl_define_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_tag_repeat1] = {
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
  [33] = 8,
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
  [58] = 4,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 5,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
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
  [92] = 92,
  [93] = 65,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 38,
  [102] = 102,
  [103] = 37,
  [104] = 49,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 114,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 119,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 124,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 132,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 161,
  [180] = 175,
  [181] = 172,
  [182] = 177,
  [183] = 158,
  [184] = 165,
  [185] = 152,
  [186] = 186,
};

static inline bool aux_sym_grammar_rule_token1_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool aux_sym_grammar_rule_token1_character_set_2(int32_t c) {
  return (c < 43494
    ? (c < 4186
      ? (c < 2703
        ? (c < 1969
          ? (c < 908
            ? (c < 710
              ? (c < 181
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 't' || (c < 170
                    ? (c >= 'v' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))))
              : (c <= 721 || (c < 886
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 891 && c <= 893)
                    : c <= 895)
                  : (c <= 902 || (c >= 904 && c <= 906)))))))
            : (c <= 908 || (c < 1646
              ? (c < 1369
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1519
                  ? (c < 1488
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))))
              : (c <= 1647 || (c < 1786
                ? (c < 1765
                  ? (c < 1749
                    ? (c >= 1649 && c <= 1747)
                    : c <= 1749)
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1810
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1808)
                  : (c <= 1839 || (c >= 1869 && c <= 1957)))))))))
          : (c <= 1969 || (c < 2474
            ? (c < 2185
              ? (c < 2084
                ? (c < 2042
                  ? (c < 2036
                    ? (c >= 1994 && c <= 2026)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)))
                : (c <= 2084 || (c < 2144
                  ? (c < 2112
                    ? c == 2088
                    : c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))
              : (c <= 2190 || (c < 2392
                ? (c < 2365
                  ? (c < 2308
                    ? (c >= 2208 && c <= 2249)
                    : c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2432)
                    : c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))))
            : (c <= 2480 || (c < 2575
              ? (c < 2524
                ? (c < 2493
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2556
                  ? (c < 2544
                    ? (c >= 2527 && c <= 2529)
                    : c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))))
              : (c <= 2576 || (c < 2616
                ? (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))
                : (c <= 2617 || (c < 2674
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))))))))))
        : (c <= 2705 || (c < 3218
          ? (c < 2958
            ? (c < 2835
              ? (c < 2768
                ? (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)))
                : (c <= 2768 || (c < 2821
                  ? (c < 2809
                    ? (c >= 2784 && c <= 2785)
                    : c <= 2809)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))
              : (c <= 2856 || (c < 2908
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2947
                  ? (c < 2929
                    ? (c >= 2911 && c <= 2913)
                    : c <= 2929)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))))
            : (c <= 2960 || (c < 3086
              ? (c < 2979
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 3024
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))))
              : (c <= 3088 || (c < 3165
                ? (c < 3133
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3205
                  ? (c < 3200
                    ? (c >= 3168 && c <= 3169)
                    : c <= 3200)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))))))))
          : (c <= 3240 || (c < 3634
            ? (c < 3406
              ? (c < 3313
                ? (c < 3261
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3261 || (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3332 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3386 || c == 3389))))
              : (c <= 3406 || (c < 3482
                ? (c < 3450
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))))))
            : (c <= 3634 || (c < 3776
              ? (c < 3724
                ? (c < 3716
                  ? (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3762
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3760)
                  : (c <= 3762 || c == 3773))))
              : (c <= 3780 || (c < 3913
                ? (c < 3840
                  ? (c < 3804
                    ? c == 3782
                    : c <= 3807)
                  : (c <= 3840 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4159
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))))))))))))
      : (c <= 4189 || (c < 8130
        ? (c < 6108
          ? (c < 4802
            ? (c < 4682
              ? (c < 4256
                ? (c < 4206
                  ? (c < 4197
                    ? c == 4193
                    : c <= 4198)
                  : (c <= 4208 || (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))))
              : (c <= 4685 || (c < 4746
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))))))
            : (c <= 4805 || (c < 5761
              ? (c < 4992
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))))
              : (c <= 5786 || (c < 5952
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))))))))
          : (c <= 6108 || (c < 7296
            ? (c < 6688
              ? (c < 6480
                ? (c < 6314
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)
                  : (c <= 6314 || (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c >= 6656 && c <= 6678)))))
              : (c <= 6740 || (c < 7086
                ? (c < 6981
                  ? (c < 6917
                    ? c == 6823
                    : c <= 6963)
                  : (c <= 6988 || (c >= 7043 && c <= 7072)))
                : (c <= 7087 || (c < 7245
                  ? (c < 7168
                    ? (c >= 7098 && c <= 7141)
                    : c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))))))
            : (c <= 7304 || (c < 7968
              ? (c < 7413
                ? (c < 7401
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7680
                  ? (c < 7424
                    ? c == 7418
                    : c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8029
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || c == 8126))))))))))
        : (c <= 8132 || (c < 12321
          ? (c < 8526
            ? (c < 8455
              ? (c < 8182
                ? (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)))
                : (c <= 8188 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || c == 8450))))
              : (c <= 8455 || (c < 8486
                ? (c < 8472
                  ? (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8508
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))))))
            : (c <= 8526 || (c < 11648
              ? (c < 11520
                ? (c < 11499
                  ? (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || c == 11631))))
              : (c <= 11670 || (c < 11712
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11736
                  ? (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)
                  : (c <= 11742 || (c >= 12293 && c <= 12295)))))))))
          : (c <= 12329 || (c < 42786
            ? (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42538
                ? (c < 42240
                  ? (c < 42192
                    ? (c >= 19968 && c <= 42124)
                    : c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))
                : (c <= 42539 || (c < 42656
                  ? (c < 42623
                    ? (c >= 42560 && c <= 42606)
                    : c <= 42653)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))))))
            : (c <= 42888 || (c < 43138
              ? (c < 42994
                ? (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c >= 42965 && c <= 42969)))
                : (c <= 43009 || (c < 43020
                  ? (c < 43015
                    ? (c >= 43011 && c <= 43013)
                    : c <= 43018)
                  : (c <= 43042 || (c >= 43072 && c <= 43123)))))
              : (c <= 43187 || (c < 43312
                ? (c < 43261
                  ? (c < 43259
                    ? (c >= 43250 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43471
                  ? (c < 43396
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43442)
                  : (c <= 43471 || (c >= 43488 && c <= 43492)))))))))))))))
    : (c <= 43503 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43824
            ? (c < 43712
              ? (c < 43642
                ? (c < 43584
                  ? (c < 43520
                    ? (c >= 43514 && c <= 43518)
                    : c <= 43560)
                  : (c <= 43586 || (c < 43616
                    ? (c >= 43588 && c <= 43595)
                    : c <= 43638)))
                : (c <= 43642 || (c < 43701
                  ? (c < 43697
                    ? (c >= 43646 && c <= 43695)
                    : c <= 43697)
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43777
                ? (c < 43744
                  ? (c < 43739
                    ? c == 43714
                    : c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))))))
            : (c <= 43866 || (c < 64287
              ? (c < 63744
                ? (c < 44032
                  ? (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44002)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool aux_sym_grammar_rule_token1_character_set_3(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool aux_sym_grammar_rule_token1_character_set_4(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_number_literal_character_set_1(int32_t c) {
  return (c < 'b'
    ? (c < 'L'
      ? (c < 'D'
        ? c == 'B'
        : c <= 'F')
      : (c <= 'L' || (c < 'W'
        ? c == 'U'
        : c <= 'W')))
    : (c <= 'b' || (c < 'u'
      ? (c < 'l'
        ? (c >= 'd' && c <= 'f')
        : c <= 'l')
      : (c <= 'u' || c == 'w'))));
}

static inline bool sym_number_literal_character_set_2(int32_t c) {
  return (c < 'b'
    ? (c < 'L'
      ? (c < 'D'
        ? c == 'B'
        : (c <= 'D' || c == 'F'))
      : (c <= 'L' || (c < 'W'
        ? c == 'U'
        : c <= 'W')))
    : (c <= 'b' || (c < 'l'
      ? (c < 'f'
        ? c == 'd'
        : c <= 'f')
      : (c <= 'l' || (c < 'w'
        ? c == 'u'
        : c <= 'w')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(167);
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '%') ADVANCE(188);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == ')') ADVANCE(220);
      if (lookahead == '*') ADVANCE(198);
      if (lookahead == '.') ADVANCE(209);
      if (lookahead == '/') ADVANCE(256);
      if (lookahead == '0') ADVANCE(203);
      if (lookahead == ':') ADVANCE(180);
      if (lookahead == ';') ADVANCE(182);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '>') ADVANCE(199);
      if (lookahead == 'L') ADVANCE(9);
      if (lookahead == 'U') ADVANCE(10);
      if (lookahead == '_') ADVANCE(247);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == 'l') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == 'p') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(11);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '|') ADVANCE(181);
      if (lookahead == '}') ADVANCE(211);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '%') ADVANCE(149);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(228);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(249);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '%') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '0') ADVANCE(229);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == 'L') ADVANCE(174);
      if (lookahead == 'U') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '_') ADVANCE(178);
      if (lookahead == 'u') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (aux_sym_grammar_rule_token1_character_set_1(lookahead)) ADVANCE(179);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '%') ADVANCE(189);
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == 'L') ADVANCE(174);
      if (lookahead == 'U') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(23);
      if (aux_sym_grammar_rule_token1_character_set_2(lookahead)) ADVANCE(179);
      if (lookahead == 'u') ADVANCE(176);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == ')') ADVANCE(220);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ';') ADVANCE(182);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == 'L') ADVANCE(174);
      if (lookahead == 'U') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(23);
      if (aux_sym_grammar_rule_token1_character_set_2(lookahead)) ADVANCE(179);
      if (lookahead == 'u') ADVANCE(176);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '|') ADVANCE(181);
      if (lookahead == '}') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ';') ADVANCE(182);
      if (lookahead == 'L') ADVANCE(174);
      if (lookahead == 'U') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(23);
      if (aux_sym_grammar_rule_token1_character_set_2(lookahead)) ADVANCE(179);
      if (lookahead == 'u') ADVANCE(176);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '|') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(225);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(221);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(223);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '8') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(224);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(172);
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(198);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '>') ADVANCE(199);
      if (lookahead == '_') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(252);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(255);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(255);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(254);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(109);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '0') ADVANCE(229);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '0') ADVANCE(233);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 23:
      if (lookahead == 'U') ADVANCE(163);
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 24:
      if (lookahead == '\\') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(13);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == 's') ADVANCE(139);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(192);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(137);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(62);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(184);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == '}') ADVANCE(169);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(131);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(214);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(132);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 81:
      if (lookahead == 'k') ADVANCE(60);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(186);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(81);
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(50);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 110:
      if (lookahead == 'q') ADVANCE(145);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(216);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(206);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 144:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 145:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 146:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 147:
      if (lookahead == 'x') ADVANCE(106);
      END_STATE();
    case 148:
      if (lookahead == 'y') ADVANCE(218);
      END_STATE();
    case 149:
      if (lookahead == '}') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(172);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(179);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 164:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(172);
      END_STATE();
    case 165:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 166:
      if (eof) ADVANCE(167);
      if (lookahead == '%') ADVANCE(189);
      if (lookahead == '\'') ADVANCE(248);
      if (lookahead == '*') ADVANCE(198);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '0') ADVANCE(229);
      if (lookahead == '<') ADVANCE(197);
      if (lookahead == '>') ADVANCE(199);
      if (lookahead == '\\') ADVANCE(23);
      if (aux_sym_grammar_rule_token1_character_set_3(lookahead)) ADVANCE(179);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(166)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_prologue_body_token1);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '%') ADVANCE(149);
      if (lookahead == '/') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_prologue_body_token1);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == '*') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_prologue_body_token1);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_grammar_rule_token1);
      if (lookahead == '"') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(23);
      if (aux_sym_grammar_rule_token1_character_set_4(lookahead)) ADVANCE(179);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_grammar_rule_token1);
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(23);
      if (aux_sym_grammar_rule_token1_character_set_4(lookahead)) ADVANCE(179);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_grammar_rule_token1);
      if (lookahead == '"') ADVANCE(222);
      if (lookahead == '8') ADVANCE(177);
      if (lookahead == '\\') ADVANCE(23);
      if (aux_sym_grammar_rule_token1_character_set_4(lookahead)) ADVANCE(179);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_grammar_rule_token1);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(23);
      if (aux_sym_grammar_rule_token1_character_set_4(lookahead)) ADVANCE(179);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_grammar_rule_token1);
      if (lookahead == '(') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(23);
      if (aux_sym_grammar_rule_token1_character_set_4(lookahead)) ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_grammar_rule_token1);
      if (lookahead == '\\') ADVANCE(23);
      if (aux_sym_grammar_rule_token1_character_set_4(lookahead)) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_PERCENTtype);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_PERCENTrequire);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_PERCENTtoken);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_PERCENTnterm);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(173);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'g') ADVANCE(83);
      if (lookahead == 'h') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(92);
      if (lookahead == '{') ADVANCE(168);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(173);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'g') ADVANCE(83);
      if (lookahead == 'h') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(92);
      if (lookahead == '{') ADVANCE(168);
      if (lookahead == '}') ADVANCE(169);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(173);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'g') ADVANCE(83);
      if (lookahead == 'h') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == 't') ADVANCE(99);
      if (lookahead == 'u') ADVANCE(92);
      if (lookahead == '{') ADVANCE(168);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_nonassoc);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_precedence);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_PERCENTinitial_DASHdeclaration);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_decl_glr_parser);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_PERCENTdestructor);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_PERCENTprinter);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_expect);
      if (lookahead == '-') ADVANCE(124);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_expect_DASHrr);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_decl_expect_token1);
      if (lookahead == '\'') ADVANCE(151);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(241);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_decl_expect_token1);
      if (lookahead == '\'') ADVANCE(151);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(245);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_decl_expect_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_PERCENTstart);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_PERCENTdefine);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_PERCENTcode);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_PERCENTunion);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_PERCENTdebug);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_decl_header);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_decl_locations);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_PERCENTmerge);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_directive_empty);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym__LPAREN);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_L_DQUOTE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_u_DQUOTE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_U_DQUOTE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_u8_DQUOTE);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(228);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(151);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(241);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(151);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(244);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(154);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(242);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(151);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(245);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(155);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(232);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(152);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(239);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(242);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(240);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(152);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(242);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(240);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(150);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(245);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(153);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(155);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(242);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(153);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(242);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(155);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(242);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(240);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(242);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(240);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '.') ADVANCE(243);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(242);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '0') ADVANCE(230);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(245);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(155);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(232);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(232);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(242);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(237);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_number_literal);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '(') ADVANCE(219);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_char_quoted_token1);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_char_quoted_token1);
      if (lookahead == '*') ADVANCE(252);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_char_quoted_token1);
      if (lookahead == '/') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(249);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '"') ADVANCE(24);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(172);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(17);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(17);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(252);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 166},
  [21] = {.lex_state = 166},
  [22] = {.lex_state = 166},
  [23] = {.lex_state = 166},
  [24] = {.lex_state = 166},
  [25] = {.lex_state = 166},
  [26] = {.lex_state = 166},
  [27] = {.lex_state = 166},
  [28] = {.lex_state = 166},
  [29] = {.lex_state = 166},
  [30] = {.lex_state = 166},
  [31] = {.lex_state = 166},
  [32] = {.lex_state = 166},
  [33] = {.lex_state = 166},
  [34] = {.lex_state = 166},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 166},
  [37] = {.lex_state = 166},
  [38] = {.lex_state = 166},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 166},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 166},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 166},
  [49] = {.lex_state = 166},
  [50] = {.lex_state = 166},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 166},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 166},
  [57] = {.lex_state = 166},
  [58] = {.lex_state = 166},
  [59] = {.lex_state = 166},
  [60] = {.lex_state = 166},
  [61] = {.lex_state = 166},
  [62] = {.lex_state = 166},
  [63] = {.lex_state = 166},
  [64] = {.lex_state = 166},
  [65] = {.lex_state = 166},
  [66] = {.lex_state = 166},
  [67] = {.lex_state = 166},
  [68] = {.lex_state = 166},
  [69] = {.lex_state = 166},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 166},
  [109] = {.lex_state = 166},
  [110] = {.lex_state = 166},
  [111] = {.lex_state = 166},
  [112] = {.lex_state = 166},
  [113] = {.lex_state = 166},
  [114] = {.lex_state = 14},
  [115] = {.lex_state = 14},
  [116] = {.lex_state = 14},
  [117] = {.lex_state = 166},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 14},
  [120] = {.lex_state = 166},
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 166},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 166},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 166},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 14},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 166},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 166},
  [136] = {.lex_state = 166},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 166},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 166},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 166},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0, .external_lex_state = 1},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 166},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 166},
  [165] = {.lex_state = 166},
  [166] = {.lex_state = 166},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 16},
  [171] = {.lex_state = 166},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 166},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 0, .external_lex_state = 1},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0, .external_lex_state = 1},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 166},
  [185] = {.lex_state = 3},
  [186] = {(TSStateId)(-1)},
};

enum {
  ts_external_token_undelimited_code_block = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_undelimited_code_block] = sym_undelimited_code_block,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_undelimited_code_block] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_PERCENTtype] = ACTIONS(1),
    [anon_sym_PERCENTrequire] = ACTIONS(1),
    [anon_sym_PERCENTtoken] = ACTIONS(1),
    [anon_sym_PERCENTnterm] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_nonassoc] = ACTIONS(1),
    [anon_sym_precedence] = ACTIONS(1),
    [anon_sym_PERCENTinitial_DASHdeclaration] = ACTIONS(1),
    [sym_decl_glr_parser] = ACTIONS(1),
    [anon_sym_PERCENTdestructor] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_PERCENTprinter] = ACTIONS(1),
    [anon_sym_expect] = ACTIONS(1),
    [anon_sym_expect_DASHrr] = ACTIONS(1),
    [aux_sym_decl_expect_token1] = ACTIONS(1),
    [anon_sym_PERCENTstart] = ACTIONS(1),
    [anon_sym_PERCENTdefine] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PERCENTcode] = ACTIONS(1),
    [anon_sym_PERCENTunion] = ACTIONS(1),
    [anon_sym_PERCENTdebug] = ACTIONS(1),
    [sym_decl_header] = ACTIONS(1),
    [sym_decl_locations] = ACTIONS(1),
    [anon_sym_PERCENTmerge] = ACTIONS(1),
    [anon_sym__LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_L_DQUOTE] = ACTIONS(1),
    [anon_sym_u_DQUOTE] = ACTIONS(1),
    [anon_sym_U_DQUOTE] = ACTIONS(1),
    [anon_sym_u8_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_undelimited_code_block] = ACTIONS(1),
  },
  [1] = {
    [sym_sections] = STATE(156),
    [sym_prologue] = STATE(77),
    [sym_grammar_rules_section] = STATE(151),
    [sym_declaration] = STATE(77),
    [sym_decl_type] = STATE(78),
    [sym_decl_require] = STATE(78),
    [sym_decl_token] = STATE(78),
    [sym_decl_nterm] = STATE(78),
    [sym_decl_op_precedence] = STATE(78),
    [sym_decl_initial_declaration] = STATE(78),
    [sym_decl_destructor] = STATE(78),
    [sym_decl_printer] = STATE(78),
    [sym_decl_expect] = STATE(78),
    [sym_decl_start] = STATE(78),
    [sym_decl_define] = STATE(78),
    [sym_decl_code] = STATE(78),
    [sym_decl_union] = STATE(78),
    [sym_decl_debug] = STATE(78),
    [sym_comment] = STATE(1),
    [aux_sym_sections_repeat1] = STATE(2),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(5),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(7),
    [anon_sym_PERCENTtype] = ACTIONS(9),
    [anon_sym_PERCENTrequire] = ACTIONS(11),
    [anon_sym_PERCENTtoken] = ACTIONS(13),
    [anon_sym_PERCENTnterm] = ACTIONS(15),
    [anon_sym_PERCENT] = ACTIONS(17),
    [anon_sym_PERCENTinitial_DASHdeclaration] = ACTIONS(19),
    [sym_decl_glr_parser] = ACTIONS(21),
    [anon_sym_PERCENTdestructor] = ACTIONS(23),
    [anon_sym_PERCENTprinter] = ACTIONS(25),
    [anon_sym_PERCENTstart] = ACTIONS(27),
    [anon_sym_PERCENTdefine] = ACTIONS(29),
    [anon_sym_PERCENTcode] = ACTIONS(31),
    [anon_sym_PERCENTunion] = ACTIONS(33),
    [anon_sym_PERCENTdebug] = ACTIONS(35),
    [sym_decl_header] = ACTIONS(21),
    [sym_decl_locations] = ACTIONS(21),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(5), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(7), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(9), 1,
      anon_sym_PERCENTtype,
    ACTIONS(11), 1,
      anon_sym_PERCENTrequire,
    ACTIONS(13), 1,
      anon_sym_PERCENTtoken,
    ACTIONS(15), 1,
      anon_sym_PERCENTnterm,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    ACTIONS(19), 1,
      anon_sym_PERCENTinitial_DASHdeclaration,
    ACTIONS(23), 1,
      anon_sym_PERCENTdestructor,
    ACTIONS(25), 1,
      anon_sym_PERCENTprinter,
    ACTIONS(27), 1,
      anon_sym_PERCENTstart,
    ACTIONS(29), 1,
      anon_sym_PERCENTdefine,
    ACTIONS(31), 1,
      anon_sym_PERCENTcode,
    ACTIONS(33), 1,
      anon_sym_PERCENTunion,
    ACTIONS(35), 1,
      anon_sym_PERCENTdebug,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_sections_repeat1,
    STATE(178), 1,
      sym_grammar_rules_section,
    STATE(77), 2,
      sym_prologue,
      sym_declaration,
    ACTIONS(21), 3,
      sym_decl_glr_parser,
      sym_decl_header,
      sym_decl_locations,
    STATE(78), 14,
      sym_decl_type,
      sym_decl_require,
      sym_decl_token,
      sym_decl_nterm,
      sym_decl_op_precedence,
      sym_decl_initial_declaration,
      sym_decl_destructor,
      sym_decl_printer,
      sym_decl_expect,
      sym_decl_start,
      sym_decl_define,
      sym_decl_code,
      sym_decl_union,
      sym_decl_debug,
  [83] = 20,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(40), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(42), 1,
      anon_sym_PERCENTtype,
    ACTIONS(45), 1,
      anon_sym_PERCENTrequire,
    ACTIONS(48), 1,
      anon_sym_PERCENTtoken,
    ACTIONS(51), 1,
      anon_sym_PERCENTnterm,
    ACTIONS(54), 1,
      anon_sym_PERCENT,
    ACTIONS(57), 1,
      anon_sym_PERCENTinitial_DASHdeclaration,
    ACTIONS(63), 1,
      anon_sym_PERCENTdestructor,
    ACTIONS(66), 1,
      anon_sym_PERCENTprinter,
    ACTIONS(69), 1,
      anon_sym_PERCENTstart,
    ACTIONS(72), 1,
      anon_sym_PERCENTdefine,
    ACTIONS(75), 1,
      anon_sym_PERCENTcode,
    ACTIONS(78), 1,
      anon_sym_PERCENTunion,
    ACTIONS(81), 1,
      anon_sym_PERCENTdebug,
    STATE(3), 2,
      sym_comment,
      aux_sym_sections_repeat1,
    STATE(77), 2,
      sym_prologue,
      sym_declaration,
    ACTIONS(60), 3,
      sym_decl_glr_parser,
      sym_decl_header,
      sym_decl_locations,
    STATE(78), 14,
      sym_decl_type,
      sym_decl_require,
      sym_decl_token,
      sym_decl_nterm,
      sym_decl_op_precedence,
      sym_decl_initial_declaration,
      sym_decl_destructor,
      sym_decl_printer,
      sym_decl_expect,
      sym_decl_start,
      sym_decl_define,
      sym_decl_code,
      sym_decl_union,
      sym_decl_debug,
  [161] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(4), 1,
      sym_comment,
    ACTIONS(86), 2,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENT,
    ACTIONS(84), 30,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
      anon_sym_PERCENTmerge,
      anon_sym_RPAREN,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [204] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(5), 1,
      sym_comment,
    ACTIONS(90), 2,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENT,
    ACTIONS(88), 30,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
      anon_sym_PERCENTmerge,
      anon_sym_RPAREN,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [247] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(94), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(96), 1,
      anon_sym_PERCENT,
    ACTIONS(98), 1,
      anon_sym_LT,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    STATE(6), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_decl_type_repeat1,
    STATE(43), 1,
      aux_sym_decl_type_repeat2,
    STATE(99), 1,
      sym_type_tag,
    STATE(18), 2,
      sym_string_literal,
      sym_char_quoted,
    ACTIONS(100), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(92), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [305] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(94), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(98), 1,
      anon_sym_LT,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(106), 1,
      anon_sym_PERCENT,
    STATE(7), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_decl_type_repeat1,
    STATE(35), 1,
      aux_sym_decl_type_repeat2,
    STATE(99), 1,
      sym_type_tag,
    STATE(18), 2,
      sym_string_literal,
      sym_char_quoted,
    ACTIONS(100), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(104), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [363] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(8), 1,
      sym_comment,
    ACTIONS(110), 2,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENT,
    ACTIONS(108), 28,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_LBRACE,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [404] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(116), 1,
      anon_sym__LPAREN,
    ACTIONS(120), 1,
      sym_number_literal,
    STATE(9), 1,
      sym_comment,
    STATE(57), 1,
      sym_string_literal,
    STATE(63), 1,
      sym_string,
    ACTIONS(114), 2,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENT,
    ACTIONS(118), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(112), 18,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [454] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(124), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(127), 1,
      anon_sym_PERCENT,
    ACTIONS(132), 1,
      anon_sym_SQUOTE,
    STATE(10), 2,
      sym_comment,
      aux_sym_decl_type_repeat1,
    STATE(18), 2,
      sym_string_literal,
      sym_char_quoted,
    ACTIONS(129), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(122), 18,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [502] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(94), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_PERCENT,
    STATE(10), 1,
      aux_sym_decl_type_repeat1,
    STATE(11), 1,
      sym_comment,
    STATE(18), 2,
      sym_string_literal,
      sym_char_quoted,
    ACTIONS(100), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(135), 18,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [552] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(141), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(143), 1,
      anon_sym_PERCENT,
    ACTIONS(145), 1,
      anon_sym_DOT,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_decl_define_repeat1,
    STATE(81), 1,
      sym_string_literal,
    ACTIONS(100), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(139), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [603] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(116), 1,
      anon_sym__LPAREN,
    STATE(13), 1,
      sym_comment,
    STATE(57), 1,
      sym_string_literal,
    STATE(67), 1,
      sym_string,
    ACTIONS(151), 2,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENT,
    ACTIONS(118), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(149), 18,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [650] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(145), 1,
      anon_sym_DOT,
    ACTIONS(155), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(157), 1,
      anon_sym_PERCENT,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      aux_sym_decl_define_repeat1,
    STATE(14), 1,
      sym_comment,
    STATE(72), 1,
      sym_string_literal,
    ACTIONS(100), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(153), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [701] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_DOT,
    ACTIONS(163), 2,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENT,
    STATE(15), 2,
      sym_comment,
      aux_sym_decl_define_repeat1,
    ACTIONS(161), 23,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_LBRACE,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [741] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(172), 1,
      sym_number_literal,
    STATE(16), 1,
      sym_comment,
    STATE(59), 1,
      sym_string_literal,
    ACTIONS(170), 2,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENT,
    ACTIONS(118), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(168), 18,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [785] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(17), 1,
      sym_comment,
    ACTIONS(163), 2,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENT,
    ACTIONS(161), 24,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [822] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(18), 1,
      sym_comment,
    ACTIONS(176), 2,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENT,
    ACTIONS(174), 24,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [859] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 1,
      sym_comment,
    STATE(64), 1,
      sym_string_literal,
    ACTIONS(180), 2,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENT,
    ACTIONS(118), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(178), 18,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [900] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(184), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(186), 1,
      anon_sym_PERCENT,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(190), 1,
      anon_sym_SQUOTE,
    STATE(20), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_decl_op_precedence_repeat1,
    STATE(32), 1,
      sym_char_quoted,
    STATE(52), 1,
      aux_sym_decl_op_precedence_repeat2,
    STATE(120), 1,
      sym_type_tag,
    ACTIONS(182), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [950] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(184), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(190), 1,
      anon_sym_SQUOTE,
    ACTIONS(194), 1,
      anon_sym_PERCENT,
    STATE(21), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_decl_op_precedence_repeat1,
    STATE(32), 1,
      sym_char_quoted,
    STATE(47), 1,
      aux_sym_decl_op_precedence_repeat2,
    STATE(120), 1,
      sym_type_tag,
    ACTIONS(192), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [1000] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(184), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(190), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      anon_sym_PERCENT,
    STATE(22), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_decl_op_precedence_repeat1,
    STATE(32), 1,
      sym_char_quoted,
    ACTIONS(196), 18,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [1042] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(202), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(204), 1,
      anon_sym_PERCENT,
    STATE(23), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_decl_token_repeat1,
    STATE(46), 1,
      aux_sym_decl_token_repeat3,
    STATE(149), 1,
      sym_type_tag,
    ACTIONS(200), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [1086] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(208), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(211), 1,
      anon_sym_PERCENT,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    STATE(32), 1,
      sym_char_quoted,
    STATE(24), 2,
      sym_comment,
      aux_sym_decl_op_precedence_repeat1,
    ACTIONS(206), 18,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [1126] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(218), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(220), 1,
      anon_sym_PERCENT,
    STATE(25), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_decl_nterm_repeat1,
    STATE(40), 1,
      sym_type_tag,
    STATE(54), 1,
      aux_sym_decl_nterm_repeat2,
    ACTIONS(216), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [1170] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(218), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(224), 1,
      anon_sym_PERCENT,
    STATE(26), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_decl_nterm_repeat1,
    STATE(39), 1,
      aux_sym_decl_nterm_repeat2,
    STATE(40), 1,
      sym_type_tag,
    ACTIONS(222), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [1214] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(202), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(228), 1,
      anon_sym_PERCENT,
    STATE(27), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_decl_token_repeat3,
    STATE(42), 1,
      aux_sym_decl_token_repeat1,
    STATE(149), 1,
      sym_type_tag,
    ACTIONS(226), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [1258] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(232), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(234), 1,
      anon_sym_PERCENT,
    ACTIONS(236), 1,
      anon_sym_LT,
    STATE(28), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_decl_destructor_repeat1,
    STATE(60), 1,
      sym_type_tag,
    ACTIONS(230), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [1299] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(232), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(236), 1,
      anon_sym_LT,
    ACTIONS(240), 1,
      anon_sym_PERCENT,
    STATE(29), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_decl_destructor_repeat1,
    STATE(60), 1,
      sym_type_tag,
    ACTIONS(238), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [1340] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(244), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(247), 1,
      anon_sym_PERCENT,
    ACTIONS(249), 1,
      anon_sym_LT,
    STATE(60), 1,
      sym_type_tag,
    STATE(30), 2,
      sym_comment,
      aux_sym_decl_destructor_repeat1,
    ACTIONS(242), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [1379] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(232), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(236), 1,
      anon_sym_LT,
    ACTIONS(254), 1,
      anon_sym_PERCENT,
    STATE(30), 1,
      aux_sym_decl_destructor_repeat1,
    STATE(31), 1,
      sym_comment,
    STATE(60), 1,
      sym_type_tag,
    ACTIONS(252), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [1420] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(258), 1,
      anon_sym_PERCENT,
    ACTIONS(260), 1,
      sym_number_literal,
    STATE(32), 1,
      sym_comment,
    ACTIONS(256), 20,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
      anon_sym_SQUOTE,
  [1455] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(110), 1,
      anon_sym_PERCENT,
    STATE(33), 1,
      sym_comment,
    ACTIONS(108), 21,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
      sym_number_literal,
      anon_sym_SQUOTE,
  [1488] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(232), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(236), 1,
      anon_sym_LT,
    ACTIONS(264), 1,
      anon_sym_PERCENT,
    STATE(30), 1,
      aux_sym_decl_destructor_repeat1,
    STATE(34), 1,
      sym_comment,
    STATE(60), 1,
      sym_type_tag,
    ACTIONS(262), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [1529] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(98), 1,
      anon_sym_LT,
    ACTIONS(268), 1,
      anon_sym_PERCENT,
    STATE(35), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_decl_type_repeat2,
    STATE(99), 1,
      sym_type_tag,
    ACTIONS(266), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [1567] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(272), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(275), 1,
      anon_sym_PERCENT,
    STATE(36), 2,
      sym_comment,
      aux_sym_decl_nterm_repeat1,
    ACTIONS(270), 18,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [1601] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(279), 1,
      anon_sym_PERCENT,
    STATE(37), 1,
      sym_comment,
    ACTIONS(277), 20,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
      anon_sym_SQUOTE,
  [1633] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(283), 1,
      anon_sym_PERCENT,
    STATE(38), 1,
      sym_comment,
    ACTIONS(281), 20,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
      anon_sym_SQUOTE,
  [1665] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(220), 1,
      anon_sym_PERCENT,
    STATE(39), 1,
      sym_comment,
    STATE(40), 1,
      sym_type_tag,
    STATE(55), 1,
      aux_sym_decl_nterm_repeat2,
    ACTIONS(216), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [1703] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(218), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(287), 1,
      anon_sym_PERCENT,
    STATE(40), 1,
      sym_comment,
    STATE(56), 1,
      aux_sym_decl_nterm_repeat1,
    ACTIONS(285), 18,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [1739] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(204), 1,
      anon_sym_PERCENT,
    STATE(41), 1,
      sym_comment,
    STATE(51), 1,
      aux_sym_decl_token_repeat3,
    STATE(149), 1,
      sym_type_tag,
    ACTIONS(200), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [1777] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(151), 1,
      anon_sym_PERCENT,
    ACTIONS(289), 1,
      aux_sym_grammar_rule_token1,
    STATE(42), 2,
      sym_comment,
      aux_sym_decl_token_repeat1,
    ACTIONS(149), 18,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [1811] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(98), 1,
      anon_sym_LT,
    ACTIONS(106), 1,
      anon_sym_PERCENT,
    STATE(43), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_decl_type_repeat2,
    STATE(99), 1,
      sym_type_tag,
    ACTIONS(104), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [1849] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_PERCENT,
    ACTIONS(292), 1,
      anon_sym_LT,
    STATE(99), 1,
      sym_type_tag,
    STATE(44), 2,
      sym_comment,
      aux_sym_decl_type_repeat2,
    ACTIONS(135), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [1885] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(198), 1,
      anon_sym_PERCENT,
    ACTIONS(295), 1,
      anon_sym_LT,
    STATE(120), 1,
      sym_type_tag,
    STATE(45), 2,
      sym_comment,
      aux_sym_decl_op_precedence_repeat2,
    ACTIONS(196), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [1921] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(300), 1,
      anon_sym_PERCENT,
    STATE(46), 1,
      sym_comment,
    STATE(51), 1,
      aux_sym_decl_token_repeat3,
    STATE(149), 1,
      sym_type_tag,
    ACTIONS(298), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [1959] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(186), 1,
      anon_sym_PERCENT,
    ACTIONS(188), 1,
      anon_sym_LT,
    STATE(45), 1,
      aux_sym_decl_op_precedence_repeat2,
    STATE(47), 1,
      sym_comment,
    STATE(120), 1,
      sym_type_tag,
    ACTIONS(182), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [1997] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(304), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(306), 1,
      anon_sym_PERCENT,
    STATE(48), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_decl_token_repeat2,
    ACTIONS(302), 18,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2033] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(310), 1,
      anon_sym_PERCENT,
    STATE(49), 1,
      sym_comment,
    ACTIONS(308), 20,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
      anon_sym_SQUOTE,
  [2065] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    ACTIONS(312), 1,
      aux_sym_grammar_rule_token1,
    STATE(50), 2,
      sym_comment,
      aux_sym_decl_token_repeat2,
    ACTIONS(178), 18,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2099] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(306), 1,
      anon_sym_PERCENT,
    ACTIONS(315), 1,
      anon_sym_LT,
    STATE(149), 1,
      sym_type_tag,
    STATE(51), 2,
      sym_comment,
      aux_sym_decl_token_repeat3,
    ACTIONS(302), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2135] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(320), 1,
      anon_sym_PERCENT,
    STATE(45), 1,
      aux_sym_decl_op_precedence_repeat2,
    STATE(52), 1,
      sym_comment,
    STATE(120), 1,
      sym_type_tag,
    ACTIONS(318), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2173] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(211), 1,
      anon_sym_PERCENT,
    STATE(53), 1,
      sym_comment,
    ACTIONS(206), 20,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
      anon_sym_SQUOTE,
  [2205] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(324), 1,
      anon_sym_PERCENT,
    STATE(40), 1,
      sym_type_tag,
    STATE(54), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym_decl_nterm_repeat2,
    ACTIONS(322), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2243] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(328), 1,
      anon_sym_PERCENT,
    ACTIONS(330), 1,
      anon_sym_LT,
    STATE(40), 1,
      sym_type_tag,
    STATE(55), 2,
      sym_comment,
      aux_sym_decl_nterm_repeat2,
    ACTIONS(326), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2279] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(218), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(328), 1,
      anon_sym_PERCENT,
    STATE(36), 1,
      aux_sym_decl_nterm_repeat1,
    STATE(56), 1,
      sym_comment,
    ACTIONS(326), 18,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2315] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(335), 1,
      anon_sym_PERCENT,
    STATE(57), 1,
      sym_comment,
    ACTIONS(333), 19,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2346] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(86), 1,
      anon_sym_PERCENT,
    STATE(58), 1,
      sym_comment,
    ACTIONS(84), 19,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2377] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      anon_sym_PERCENT,
    STATE(59), 1,
      sym_comment,
    ACTIONS(178), 19,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2408] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    STATE(60), 1,
      sym_comment,
    ACTIONS(337), 19,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2439] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(343), 1,
      anon_sym_PERCENT,
    STATE(61), 1,
      sym_comment,
    ACTIONS(341), 19,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2470] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(90), 1,
      anon_sym_PERCENT,
    STATE(62), 1,
      sym_comment,
    ACTIONS(88), 19,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2501] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(151), 1,
      anon_sym_PERCENT,
    STATE(63), 1,
      sym_comment,
    ACTIONS(149), 19,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2532] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(347), 1,
      anon_sym_PERCENT,
    STATE(64), 1,
      sym_comment,
    ACTIONS(345), 19,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2563] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    STATE(65), 1,
      sym_comment,
    ACTIONS(349), 19,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2594] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(355), 1,
      anon_sym_PERCENT,
    STATE(66), 1,
      sym_comment,
    ACTIONS(353), 19,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2625] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(359), 1,
      anon_sym_PERCENT,
    STATE(67), 1,
      sym_comment,
    ACTIONS(357), 19,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2656] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      anon_sym_PERCENT,
    STATE(68), 1,
      sym_comment,
    ACTIONS(242), 19,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2687] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(363), 1,
      anon_sym_PERCENT,
    STATE(69), 1,
      sym_comment,
    ACTIONS(361), 19,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_grammar_rule_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2718] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(365), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(367), 1,
      anon_sym_PIPE,
    ACTIONS(369), 1,
      anon_sym_SEMI,
    ACTIONS(371), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 1,
      anon_sym_PERCENTmerge,
    STATE(70), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_grammar_rule_repeat1,
    STATE(96), 1,
      sym_component,
    STATE(97), 1,
      sym_code_block,
    STATE(134), 1,
      aux_sym_grammar_rule_repeat2,
    STATE(95), 4,
      sym_action,
      sym_directive_merge,
      sym_string_literal,
      sym_char_quoted,
    ACTIONS(100), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [2768] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(375), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(380), 1,
      anon_sym_LBRACE,
    ACTIONS(383), 1,
      anon_sym_PERCENTmerge,
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    STATE(96), 1,
      sym_component,
    STATE(97), 1,
      sym_code_block,
    ACTIONS(378), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    STATE(71), 2,
      sym_comment,
      aux_sym_grammar_rule_repeat1,
    STATE(95), 4,
      sym_action,
      sym_directive_merge,
      sym_string_literal,
      sym_char_quoted,
    ACTIONS(386), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [2811] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(143), 1,
      anon_sym_PERCENT,
    STATE(72), 1,
      sym_comment,
    ACTIONS(139), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2840] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(394), 1,
      anon_sym_PERCENT,
    STATE(73), 1,
      sym_comment,
    ACTIONS(392), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2869] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(398), 1,
      anon_sym_PERCENT,
    STATE(74), 1,
      sym_comment,
    ACTIONS(396), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2898] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(402), 1,
      anon_sym_PERCENT,
    STATE(75), 1,
      sym_comment,
    ACTIONS(400), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2927] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(406), 1,
      anon_sym_PERCENT,
    STATE(76), 1,
      sym_comment,
    ACTIONS(404), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2956] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    STATE(77), 1,
      sym_comment,
    ACTIONS(408), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [2985] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    STATE(78), 1,
      sym_comment,
    ACTIONS(412), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [3014] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(418), 1,
      anon_sym_PERCENT,
    STATE(79), 1,
      sym_comment,
    ACTIONS(416), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [3043] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(422), 1,
      anon_sym_PERCENT,
    STATE(80), 1,
      sym_comment,
    ACTIONS(420), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [3072] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(426), 1,
      anon_sym_PERCENT,
    STATE(81), 1,
      sym_comment,
    ACTIONS(424), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [3101] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(430), 1,
      anon_sym_PERCENT,
    STATE(82), 1,
      sym_comment,
    ACTIONS(428), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [3130] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(434), 1,
      anon_sym_PERCENT,
    STATE(83), 1,
      sym_comment,
    ACTIONS(432), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [3159] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(438), 1,
      anon_sym_PERCENT,
    STATE(84), 1,
      sym_comment,
    ACTIONS(436), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [3188] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(365), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(371), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 1,
      anon_sym_PERCENTmerge,
    STATE(71), 1,
      aux_sym_grammar_rule_repeat1,
    STATE(85), 1,
      sym_comment,
    STATE(96), 1,
      sym_component,
    STATE(97), 1,
      sym_code_block,
    ACTIONS(440), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
    STATE(95), 4,
      sym_action,
      sym_directive_merge,
      sym_string_literal,
      sym_char_quoted,
    ACTIONS(100), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [3233] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(444), 1,
      anon_sym_PERCENT,
    STATE(86), 1,
      sym_comment,
    ACTIONS(442), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [3262] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(448), 1,
      anon_sym_PERCENT,
    STATE(87), 1,
      sym_comment,
    ACTIONS(446), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [3291] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(452), 1,
      anon_sym_PERCENT,
    STATE(88), 1,
      sym_comment,
    ACTIONS(450), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [3320] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(456), 1,
      anon_sym_PERCENT,
    STATE(89), 1,
      sym_comment,
    ACTIONS(454), 17,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      sym_decl_header,
      sym_decl_locations,
  [3349] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(365), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(371), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 1,
      anon_sym_PERCENTmerge,
    ACTIONS(458), 1,
      sym_directive_empty,
    STATE(70), 1,
      aux_sym_grammar_rule_repeat1,
    STATE(90), 1,
      sym_comment,
    STATE(96), 1,
      sym_component,
    STATE(97), 1,
      sym_code_block,
    STATE(95), 4,
      sym_action,
      sym_directive_merge,
      sym_string_literal,
      sym_char_quoted,
    ACTIONS(100), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [3393] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    ACTIONS(365), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(371), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 1,
      anon_sym_PERCENTmerge,
    ACTIONS(460), 1,
      sym_directive_empty,
    STATE(85), 1,
      aux_sym_grammar_rule_repeat1,
    STATE(91), 1,
      sym_comment,
    STATE(96), 1,
      sym_component,
    STATE(97), 1,
      sym_code_block,
    STATE(95), 4,
      sym_action,
      sym_directive_merge,
      sym_string_literal,
      sym_char_quoted,
    ACTIONS(100), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [3437] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(94), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(98), 1,
      anon_sym_LT,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    STATE(6), 1,
      aux_sym_decl_type_repeat1,
    STATE(92), 1,
      sym_comment,
    STATE(98), 1,
      sym_type_tag,
    STATE(18), 2,
      sym_string_literal,
      sym_char_quoted,
    ACTIONS(100), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [3470] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(351), 1,
      aux_sym_grammar_rule_token1,
    STATE(93), 1,
      sym_comment,
    ACTIONS(349), 10,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3492] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(462), 1,
      aux_sym_grammar_rule_token1,
    STATE(94), 1,
      sym_comment,
    ACTIONS(464), 10,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3514] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(466), 1,
      aux_sym_grammar_rule_token1,
    STATE(95), 1,
      sym_comment,
    ACTIONS(468), 10,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3536] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(470), 1,
      aux_sym_grammar_rule_token1,
    STATE(96), 1,
      sym_comment,
    ACTIONS(472), 10,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3558] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(474), 1,
      aux_sym_grammar_rule_token1,
    STATE(97), 1,
      sym_comment,
    ACTIONS(476), 10,
      anon_sym_PIPE,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3580] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(94), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    STATE(7), 1,
      aux_sym_decl_type_repeat1,
    STATE(98), 1,
      sym_comment,
    STATE(18), 2,
      sym_string_literal,
      sym_char_quoted,
    ACTIONS(100), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [3607] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(94), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(102), 1,
      anon_sym_SQUOTE,
    STATE(11), 1,
      aux_sym_decl_type_repeat1,
    STATE(99), 1,
      sym_comment,
    STATE(18), 2,
      sym_string_literal,
      sym_char_quoted,
    ACTIONS(100), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [3634] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(478), 1,
      aux_sym_grammar_rule_token1,
    STATE(100), 1,
      sym_comment,
    STATE(159), 1,
      sym_string_literal,
    ACTIONS(100), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [3654] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(283), 1,
      aux_sym_grammar_rule_token1,
    STATE(101), 1,
      sym_comment,
    ACTIONS(281), 6,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3672] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(480), 1,
      aux_sym_grammar_rule_token1,
    STATE(102), 1,
      sym_comment,
    STATE(167), 1,
      sym_string_literal,
    ACTIONS(100), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [3692] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(279), 1,
      aux_sym_grammar_rule_token1,
    STATE(103), 1,
      sym_comment,
    ACTIONS(277), 6,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3710] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(310), 1,
      aux_sym_grammar_rule_token1,
    STATE(104), 1,
      sym_comment,
    ACTIONS(308), 6,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [3728] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(105), 1,
      sym_comment,
    STATE(155), 1,
      sym_string_literal,
    ACTIONS(100), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [3745] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(73), 1,
      sym_string_literal,
    STATE(106), 1,
      sym_comment,
    ACTIONS(100), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [3762] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(484), 1,
      anon_sym_expect,
    ACTIONS(486), 1,
      anon_sym_expect_DASHrr,
    STATE(107), 1,
      sym_comment,
    ACTIONS(482), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_nonassoc,
      anon_sym_precedence,
  [3781] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(184), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(190), 1,
      anon_sym_SQUOTE,
    STATE(21), 1,
      aux_sym_decl_op_precedence_repeat1,
    STATE(32), 1,
      sym_char_quoted,
    STATE(108), 1,
      sym_comment,
    STATE(117), 1,
      sym_type_tag,
  [3806] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(490), 1,
      aux_sym_grammar_rule_token1,
    STATE(135), 1,
      sym_grammar_rule,
    ACTIONS(488), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
    STATE(109), 2,
      sym_comment,
      aux_sym_grammar_rules_body_repeat1,
  [3824] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(495), 1,
      aux_sym_grammar_rule_token1,
    STATE(109), 1,
      aux_sym_grammar_rules_body_repeat1,
    STATE(110), 1,
      sym_comment,
    STATE(135), 1,
      sym_grammar_rule,
    ACTIONS(493), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
  [3844] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(495), 1,
      aux_sym_grammar_rule_token1,
    STATE(110), 1,
      aux_sym_grammar_rules_body_repeat1,
    STATE(111), 1,
      sym_comment,
    STATE(135), 1,
      sym_grammar_rule,
    STATE(145), 1,
      sym_grammar_rules_body,
  [3863] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(202), 1,
      aux_sym_grammar_rule_token1,
    STATE(27), 1,
      aux_sym_decl_token_repeat1,
    STATE(112), 1,
      sym_comment,
    STATE(142), 1,
      sym_type_tag,
  [3882] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      anon_sym_LT,
    ACTIONS(218), 1,
      aux_sym_grammar_rule_token1,
    STATE(26), 1,
      aux_sym_decl_nterm_repeat1,
    STATE(113), 1,
      sym_comment,
    STATE(144), 1,
      sym_type_tag,
  [3901] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(497), 1,
      anon_sym_STAR,
    ACTIONS(499), 1,
      anon_sym_GT,
    ACTIONS(501), 1,
      anon_sym__,
    STATE(114), 1,
      sym_comment,
    STATE(116), 1,
      aux_sym_type_tag_repeat1,
  [3920] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(501), 1,
      anon_sym__,
    ACTIONS(503), 1,
      anon_sym_STAR,
    ACTIONS(505), 1,
      anon_sym_GT,
    STATE(115), 1,
      sym_comment,
    STATE(116), 1,
      aux_sym_type_tag_repeat1,
  [3939] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(509), 1,
      anon_sym__,
    ACTIONS(507), 2,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(116), 2,
      sym_comment,
      aux_sym_type_tag_repeat1,
  [3954] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(184), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(190), 1,
      anon_sym_SQUOTE,
    STATE(20), 1,
      aux_sym_decl_op_precedence_repeat1,
    STATE(32), 1,
      sym_char_quoted,
    STATE(117), 1,
      sym_comment,
  [3973] = 6,
    ACTIONS(512), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(514), 1,
      aux_sym_prologue_body_token1,
    ACTIONS(516), 1,
      anon_sym_SLASH_STAR,
    STATE(118), 1,
      sym_comment,
    STATE(130), 1,
      aux_sym_prologue_body_repeat1,
    STATE(153), 1,
      sym_prologue_body,
  [3992] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(501), 1,
      anon_sym__,
    ACTIONS(518), 1,
      anon_sym_STAR,
    ACTIONS(520), 1,
      anon_sym_GT,
    STATE(115), 1,
      aux_sym_type_tag_repeat1,
    STATE(119), 1,
      sym_comment,
  [4011] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(184), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(190), 1,
      anon_sym_SQUOTE,
    STATE(22), 1,
      aux_sym_decl_op_precedence_repeat1,
    STATE(32), 1,
      sym_char_quoted,
    STATE(120), 1,
      sym_comment,
  [4030] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(501), 1,
      anon_sym__,
    ACTIONS(522), 1,
      anon_sym_STAR,
    ACTIONS(524), 1,
      anon_sym_GT,
    STATE(114), 1,
      aux_sym_type_tag_repeat1,
    STATE(121), 1,
      sym_comment,
  [4049] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(122), 1,
      sym_comment,
    ACTIONS(526), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
      aux_sym_grammar_rule_token1,
  [4061] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(440), 1,
      anon_sym_SEMI,
    ACTIONS(528), 1,
      anon_sym_PIPE,
    STATE(123), 2,
      sym_comment,
      aux_sym_grammar_rule_repeat2,
  [4075] = 5,
    ACTIONS(516), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(531), 1,
      anon_sym_DQUOTE,
    ACTIONS(533), 1,
      aux_sym_string_literal_token1,
    STATE(124), 1,
      sym_comment,
    STATE(137), 1,
      aux_sym_string_literal_repeat1,
  [4091] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(535), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(537), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_code_block,
    STATE(125), 1,
      sym_comment,
  [4107] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(367), 1,
      anon_sym_PIPE,
    ACTIONS(369), 1,
      anon_sym_SEMI,
    STATE(126), 1,
      sym_comment,
    STATE(134), 1,
      aux_sym_grammar_rule_repeat2,
  [4123] = 4,
    ACTIONS(516), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(539), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(541), 1,
      aux_sym_prologue_body_token1,
    STATE(127), 2,
      sym_comment,
      aux_sym_prologue_body_repeat1,
  [4137] = 5,
    ACTIONS(516), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(533), 1,
      aux_sym_string_literal_token1,
    ACTIONS(544), 1,
      anon_sym_DQUOTE,
    STATE(128), 1,
      sym_comment,
    STATE(137), 1,
      aux_sym_string_literal_repeat1,
  [4153] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(546), 1,
      aux_sym_grammar_rule_token1,
    ACTIONS(548), 1,
      anon_sym_STAR,
    ACTIONS(550), 1,
      anon_sym_GT,
    STATE(129), 1,
      sym_comment,
  [4169] = 5,
    ACTIONS(514), 1,
      aux_sym_prologue_body_token1,
    ACTIONS(516), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(552), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(127), 1,
      aux_sym_prologue_body_repeat1,
    STATE(130), 1,
      sym_comment,
  [4185] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(131), 1,
      sym_comment,
    ACTIONS(507), 3,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym__,
  [4197] = 5,
    ACTIONS(516), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(533), 1,
      aux_sym_string_literal_token1,
    ACTIONS(554), 1,
      anon_sym_DQUOTE,
    STATE(128), 1,
      aux_sym_string_literal_repeat1,
    STATE(132), 1,
      sym_comment,
  [4213] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(537), 1,
      anon_sym_LBRACE,
    ACTIONS(556), 1,
      aux_sym_grammar_rule_token1,
    STATE(82), 1,
      sym_code_block,
    STATE(133), 1,
      sym_comment,
  [4229] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(367), 1,
      anon_sym_PIPE,
    ACTIONS(558), 1,
      anon_sym_SEMI,
    STATE(123), 1,
      aux_sym_grammar_rule_repeat2,
    STATE(134), 1,
      sym_comment,
  [4245] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(135), 1,
      sym_comment,
    ACTIONS(560), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
      aux_sym_grammar_rule_token1,
  [4257] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(136), 1,
      sym_comment,
    ACTIONS(562), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
      aux_sym_grammar_rule_token1,
  [4269] = 4,
    ACTIONS(516), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(564), 1,
      anon_sym_DQUOTE,
    ACTIONS(566), 1,
      aux_sym_string_literal_token1,
    STATE(137), 2,
      sym_comment,
      aux_sym_string_literal_repeat1,
  [4283] = 5,
    ACTIONS(516), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(533), 1,
      aux_sym_string_literal_token1,
    ACTIONS(569), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      aux_sym_string_literal_repeat1,
    STATE(138), 1,
      sym_comment,
  [4299] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(537), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_code_block,
    STATE(139), 1,
      sym_comment,
  [4312] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(537), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_code_block,
    STATE(140), 1,
      sym_comment,
  [4325] = 4,
    ACTIONS(516), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(571), 1,
      anon_sym_DQUOTE,
    ACTIONS(573), 1,
      aux_sym_string_literal_token1,
    STATE(141), 1,
      sym_comment,
  [4338] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(202), 1,
      aux_sym_grammar_rule_token1,
    STATE(23), 1,
      aux_sym_decl_token_repeat1,
    STATE(142), 1,
      sym_comment,
  [4351] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(143), 1,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_PIPE,
      anon_sym_SEMI,
  [4362] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(218), 1,
      aux_sym_grammar_rule_token1,
    STATE(25), 1,
      aux_sym_decl_nterm_repeat1,
    STATE(144), 1,
      sym_comment,
  [4375] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(575), 1,
      ts_builtin_sym_end,
    ACTIONS(577), 1,
      anon_sym_PERCENT_PERCENT,
    STATE(145), 1,
      sym_comment,
  [4388] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(537), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_code_block,
    STATE(146), 1,
      sym_comment,
  [4401] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(537), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_code_block,
    STATE(147), 1,
      sym_comment,
  [4414] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(537), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym_code_block,
    STATE(148), 1,
      sym_comment,
  [4427] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(304), 1,
      aux_sym_grammar_rule_token1,
    STATE(48), 1,
      aux_sym_decl_token_repeat2,
    STATE(149), 1,
      sym_comment,
  [4440] = 3,
    ACTIONS(516), 1,
      anon_sym_SLASH_STAR,
    STATE(150), 1,
      sym_comment,
    ACTIONS(579), 2,
      anon_sym_PERCENT_RBRACE,
      aux_sym_prologue_body_token1,
  [4451] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(581), 1,
      ts_builtin_sym_end,
    STATE(151), 1,
      sym_comment,
  [4461] = 3,
    ACTIONS(516), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(583), 1,
      aux_sym_char_quoted_token1,
    STATE(152), 1,
      sym_comment,
  [4471] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(585), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(153), 1,
      sym_comment,
  [4481] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(587), 1,
      anon_sym_SLASH,
    STATE(154), 1,
      sym_comment,
  [4491] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      sym_comment,
  [4501] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(591), 1,
      ts_builtin_sym_end,
    STATE(156), 1,
      sym_comment,
  [4511] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(593), 1,
      sym_undelimited_code_block,
    STATE(157), 1,
      sym_comment,
  [4521] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(595), 1,
      anon_sym_GT,
    STATE(158), 1,
      sym_comment,
  [4531] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    STATE(159), 1,
      sym_comment,
  [4541] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(599), 1,
      anon_sym_GT,
    STATE(160), 1,
      sym_comment,
  [4551] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(601), 1,
      anon_sym_SQUOTE,
    STATE(161), 1,
      sym_comment,
  [4561] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(603), 1,
      aux_sym_grammar_rule_token1,
    STATE(162), 1,
      sym_comment,
  [4571] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(605), 1,
      anon_sym_LT,
    STATE(163), 1,
      sym_comment,
  [4581] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(607), 1,
      aux_sym_grammar_rule_token1,
    STATE(164), 1,
      sym_comment,
  [4591] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(609), 1,
      aux_sym_grammar_rule_token1,
    STATE(165), 1,
      sym_comment,
  [4601] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(611), 1,
      aux_sym_grammar_rule_token1,
    STATE(166), 1,
      sym_comment,
  [4611] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      sym_comment,
  [4621] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(615), 1,
      anon_sym_COLON,
    STATE(168), 1,
      sym_comment,
  [4631] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(617), 1,
      anon_sym_GT,
    STATE(169), 1,
      sym_comment,
  [4641] = 3,
    ACTIONS(516), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(619), 1,
      aux_sym_comment_token1,
    STATE(170), 1,
      sym_comment,
  [4651] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(621), 1,
      aux_sym_grammar_rule_token1,
    STATE(171), 1,
      sym_comment,
  [4661] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(499), 1,
      anon_sym_GT,
    STATE(172), 1,
      sym_comment,
  [4671] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(623), 1,
      ts_builtin_sym_end,
    STATE(173), 1,
      sym_comment,
  [4681] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(625), 1,
      aux_sym_grammar_rule_token1,
    STATE(174), 1,
      sym_comment,
  [4691] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      sym_comment,
  [4701] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(629), 1,
      aux_sym_decl_expect_token1,
    STATE(176), 1,
      sym_comment,
  [4711] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(631), 1,
      sym_undelimited_code_block,
    STATE(177), 1,
      sym_comment,
  [4721] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(633), 1,
      ts_builtin_sym_end,
    STATE(178), 1,
      sym_comment,
  [4731] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(635), 1,
      anon_sym_SQUOTE,
    STATE(179), 1,
      sym_comment,
  [4741] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
    STATE(180), 1,
      sym_comment,
  [4751] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(505), 1,
      anon_sym_GT,
    STATE(181), 1,
      sym_comment,
  [4761] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(639), 1,
      sym_undelimited_code_block,
    STATE(182), 1,
      sym_comment,
  [4771] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(641), 1,
      anon_sym_GT,
    STATE(183), 1,
      sym_comment,
  [4781] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(546), 1,
      aux_sym_grammar_rule_token1,
    STATE(184), 1,
      sym_comment,
  [4791] = 3,
    ACTIONS(516), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(643), 1,
      aux_sym_char_quoted_token1,
    STATE(185), 1,
      sym_comment,
  [4801] = 1,
    ACTIONS(645), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 83,
  [SMALL_STATE(4)] = 161,
  [SMALL_STATE(5)] = 204,
  [SMALL_STATE(6)] = 247,
  [SMALL_STATE(7)] = 305,
  [SMALL_STATE(8)] = 363,
  [SMALL_STATE(9)] = 404,
  [SMALL_STATE(10)] = 454,
  [SMALL_STATE(11)] = 502,
  [SMALL_STATE(12)] = 552,
  [SMALL_STATE(13)] = 603,
  [SMALL_STATE(14)] = 650,
  [SMALL_STATE(15)] = 701,
  [SMALL_STATE(16)] = 741,
  [SMALL_STATE(17)] = 785,
  [SMALL_STATE(18)] = 822,
  [SMALL_STATE(19)] = 859,
  [SMALL_STATE(20)] = 900,
  [SMALL_STATE(21)] = 950,
  [SMALL_STATE(22)] = 1000,
  [SMALL_STATE(23)] = 1042,
  [SMALL_STATE(24)] = 1086,
  [SMALL_STATE(25)] = 1126,
  [SMALL_STATE(26)] = 1170,
  [SMALL_STATE(27)] = 1214,
  [SMALL_STATE(28)] = 1258,
  [SMALL_STATE(29)] = 1299,
  [SMALL_STATE(30)] = 1340,
  [SMALL_STATE(31)] = 1379,
  [SMALL_STATE(32)] = 1420,
  [SMALL_STATE(33)] = 1455,
  [SMALL_STATE(34)] = 1488,
  [SMALL_STATE(35)] = 1529,
  [SMALL_STATE(36)] = 1567,
  [SMALL_STATE(37)] = 1601,
  [SMALL_STATE(38)] = 1633,
  [SMALL_STATE(39)] = 1665,
  [SMALL_STATE(40)] = 1703,
  [SMALL_STATE(41)] = 1739,
  [SMALL_STATE(42)] = 1777,
  [SMALL_STATE(43)] = 1811,
  [SMALL_STATE(44)] = 1849,
  [SMALL_STATE(45)] = 1885,
  [SMALL_STATE(46)] = 1921,
  [SMALL_STATE(47)] = 1959,
  [SMALL_STATE(48)] = 1997,
  [SMALL_STATE(49)] = 2033,
  [SMALL_STATE(50)] = 2065,
  [SMALL_STATE(51)] = 2099,
  [SMALL_STATE(52)] = 2135,
  [SMALL_STATE(53)] = 2173,
  [SMALL_STATE(54)] = 2205,
  [SMALL_STATE(55)] = 2243,
  [SMALL_STATE(56)] = 2279,
  [SMALL_STATE(57)] = 2315,
  [SMALL_STATE(58)] = 2346,
  [SMALL_STATE(59)] = 2377,
  [SMALL_STATE(60)] = 2408,
  [SMALL_STATE(61)] = 2439,
  [SMALL_STATE(62)] = 2470,
  [SMALL_STATE(63)] = 2501,
  [SMALL_STATE(64)] = 2532,
  [SMALL_STATE(65)] = 2563,
  [SMALL_STATE(66)] = 2594,
  [SMALL_STATE(67)] = 2625,
  [SMALL_STATE(68)] = 2656,
  [SMALL_STATE(69)] = 2687,
  [SMALL_STATE(70)] = 2718,
  [SMALL_STATE(71)] = 2768,
  [SMALL_STATE(72)] = 2811,
  [SMALL_STATE(73)] = 2840,
  [SMALL_STATE(74)] = 2869,
  [SMALL_STATE(75)] = 2898,
  [SMALL_STATE(76)] = 2927,
  [SMALL_STATE(77)] = 2956,
  [SMALL_STATE(78)] = 2985,
  [SMALL_STATE(79)] = 3014,
  [SMALL_STATE(80)] = 3043,
  [SMALL_STATE(81)] = 3072,
  [SMALL_STATE(82)] = 3101,
  [SMALL_STATE(83)] = 3130,
  [SMALL_STATE(84)] = 3159,
  [SMALL_STATE(85)] = 3188,
  [SMALL_STATE(86)] = 3233,
  [SMALL_STATE(87)] = 3262,
  [SMALL_STATE(88)] = 3291,
  [SMALL_STATE(89)] = 3320,
  [SMALL_STATE(90)] = 3349,
  [SMALL_STATE(91)] = 3393,
  [SMALL_STATE(92)] = 3437,
  [SMALL_STATE(93)] = 3470,
  [SMALL_STATE(94)] = 3492,
  [SMALL_STATE(95)] = 3514,
  [SMALL_STATE(96)] = 3536,
  [SMALL_STATE(97)] = 3558,
  [SMALL_STATE(98)] = 3580,
  [SMALL_STATE(99)] = 3607,
  [SMALL_STATE(100)] = 3634,
  [SMALL_STATE(101)] = 3654,
  [SMALL_STATE(102)] = 3672,
  [SMALL_STATE(103)] = 3692,
  [SMALL_STATE(104)] = 3710,
  [SMALL_STATE(105)] = 3728,
  [SMALL_STATE(106)] = 3745,
  [SMALL_STATE(107)] = 3762,
  [SMALL_STATE(108)] = 3781,
  [SMALL_STATE(109)] = 3806,
  [SMALL_STATE(110)] = 3824,
  [SMALL_STATE(111)] = 3844,
  [SMALL_STATE(112)] = 3863,
  [SMALL_STATE(113)] = 3882,
  [SMALL_STATE(114)] = 3901,
  [SMALL_STATE(115)] = 3920,
  [SMALL_STATE(116)] = 3939,
  [SMALL_STATE(117)] = 3954,
  [SMALL_STATE(118)] = 3973,
  [SMALL_STATE(119)] = 3992,
  [SMALL_STATE(120)] = 4011,
  [SMALL_STATE(121)] = 4030,
  [SMALL_STATE(122)] = 4049,
  [SMALL_STATE(123)] = 4061,
  [SMALL_STATE(124)] = 4075,
  [SMALL_STATE(125)] = 4091,
  [SMALL_STATE(126)] = 4107,
  [SMALL_STATE(127)] = 4123,
  [SMALL_STATE(128)] = 4137,
  [SMALL_STATE(129)] = 4153,
  [SMALL_STATE(130)] = 4169,
  [SMALL_STATE(131)] = 4185,
  [SMALL_STATE(132)] = 4197,
  [SMALL_STATE(133)] = 4213,
  [SMALL_STATE(134)] = 4229,
  [SMALL_STATE(135)] = 4245,
  [SMALL_STATE(136)] = 4257,
  [SMALL_STATE(137)] = 4269,
  [SMALL_STATE(138)] = 4283,
  [SMALL_STATE(139)] = 4299,
  [SMALL_STATE(140)] = 4312,
  [SMALL_STATE(141)] = 4325,
  [SMALL_STATE(142)] = 4338,
  [SMALL_STATE(143)] = 4351,
  [SMALL_STATE(144)] = 4362,
  [SMALL_STATE(145)] = 4375,
  [SMALL_STATE(146)] = 4388,
  [SMALL_STATE(147)] = 4401,
  [SMALL_STATE(148)] = 4414,
  [SMALL_STATE(149)] = 4427,
  [SMALL_STATE(150)] = 4440,
  [SMALL_STATE(151)] = 4451,
  [SMALL_STATE(152)] = 4461,
  [SMALL_STATE(153)] = 4471,
  [SMALL_STATE(154)] = 4481,
  [SMALL_STATE(155)] = 4491,
  [SMALL_STATE(156)] = 4501,
  [SMALL_STATE(157)] = 4511,
  [SMALL_STATE(158)] = 4521,
  [SMALL_STATE(159)] = 4531,
  [SMALL_STATE(160)] = 4541,
  [SMALL_STATE(161)] = 4551,
  [SMALL_STATE(162)] = 4561,
  [SMALL_STATE(163)] = 4571,
  [SMALL_STATE(164)] = 4581,
  [SMALL_STATE(165)] = 4591,
  [SMALL_STATE(166)] = 4601,
  [SMALL_STATE(167)] = 4611,
  [SMALL_STATE(168)] = 4621,
  [SMALL_STATE(169)] = 4631,
  [SMALL_STATE(170)] = 4641,
  [SMALL_STATE(171)] = 4651,
  [SMALL_STATE(172)] = 4661,
  [SMALL_STATE(173)] = 4671,
  [SMALL_STATE(174)] = 4681,
  [SMALL_STATE(175)] = 4691,
  [SMALL_STATE(176)] = 4701,
  [SMALL_STATE(177)] = 4711,
  [SMALL_STATE(178)] = 4721,
  [SMALL_STATE(179)] = 4731,
  [SMALL_STATE(180)] = 4741,
  [SMALL_STATE(181)] = 4751,
  [SMALL_STATE(182)] = 4761,
  [SMALL_STATE(183)] = 4771,
  [SMALL_STATE(184)] = 4781,
  [SMALL_STATE(185)] = 4791,
  [SMALL_STATE(186)] = 4801,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(118),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(92),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(106),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(112),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(113),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(107),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(147),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(78),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(146),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(140),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(166),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(162),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(133),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(125),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(75),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_type, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_type, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_type, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_type, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_quoted, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_quoted, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_token_repeat1, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_token_repeat1, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_type_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_decl_type_repeat1, 2), SHIFT_REPEAT(18),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_type_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_type_repeat1, 2), SHIFT_REPEAT(138),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_type_repeat1, 2), SHIFT_REPEAT(152),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_type_repeat2, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_type_repeat2, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_define, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_define, 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_token_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_token_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_define, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_define, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_define_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_define_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_define_repeat1, 2), SHIFT_REPEAT(174),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_token_repeat2, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_token_repeat2, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_type_repeat1, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_type_repeat1, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_token_repeat2, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_token_repeat2, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_op_precedence, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_op_precedence, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_op_precedence, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_op_precedence, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_op_precedence_repeat2, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_op_precedence_repeat2, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_token, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_token, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_op_precedence_repeat1, 2),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_op_precedence_repeat1, 2), SHIFT_REPEAT(32),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_op_precedence_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_op_precedence_repeat1, 2), SHIFT_REPEAT(185),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_nterm, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_nterm, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_nterm, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_nterm, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_token, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_token, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_printer, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_printer, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_destructor, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_destructor, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_destructor_repeat1, 2),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_destructor_repeat1, 2), SHIFT_REPEAT(60),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_destructor_repeat1, 2),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_destructor_repeat1, 2), SHIFT_REPEAT(129),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_printer, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_printer, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_op_precedence_repeat1, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_op_precedence_repeat1, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_destructor, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_destructor, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_type, 4),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_type, 4),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_nterm_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_nterm_repeat1, 2), SHIFT_REPEAT(66),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_nterm_repeat1, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_tag, 4),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_tag, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_tag, 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_tag, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_nterm_repeat2, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_nterm_repeat2, 1),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_token_repeat1, 2), SHIFT_REPEAT(9),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_type_repeat2, 2), SHIFT_REPEAT(165),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_op_precedence_repeat2, 2), SHIFT_REPEAT(184),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_token, 4),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_token, 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_token_repeat3, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_token_repeat3, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_tag, 5),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_tag, 5),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_token_repeat2, 2), SHIFT_REPEAT(16),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_token_repeat3, 2), SHIFT_REPEAT(184),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_op_precedence, 5),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_op_precedence, 5),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_nterm, 4),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_nterm, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_nterm_repeat2, 2),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_nterm_repeat2, 2),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_nterm_repeat2, 2), SHIFT_REPEAT(184),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_destructor_repeat1, 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_destructor_repeat1, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_token_repeat2, 3),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_token_repeat2, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_nterm_repeat1, 1),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_nterm_repeat1, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_token_repeat1, 3),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_token_repeat1, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_destructor_repeat1, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_destructor_repeat1, 3),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2), SHIFT_REPEAT(95),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2), SHIFT_REPEAT(182),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2), SHIFT_REPEAT(163),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2), SHIFT_REPEAT(138),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2), SHIFT_REPEAT(152),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_require, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_require, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_define, 6),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_define, 6),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_debug, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_debug, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_initial_declaration, 2),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_initial_declaration, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_union, 3),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_union, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_code, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_code, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_define, 4),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_define, 4),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_code, 2),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_code, 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_define, 5),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_define, 5),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prologue, 2),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prologue, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat2, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prologue, 3),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prologue, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_start, 2),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_start, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_union, 2),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_union, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_expect, 3),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_expect, 3),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_merge, 4),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_merge, 4),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 1),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(168),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rules_body, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_tag_repeat1, 2),
  [509] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_tag_repeat1, 2), SHIFT_REPEAT(171),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat2, 2), SHIFT_REPEAT(91),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prologue_body_repeat1, 2),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prologue_body_repeat1, 2), SHIFT_REPEAT(150),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prologue_body, 1),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(141),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rules_section, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prologue_body_repeat1, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 1),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [591] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rules_section, 4),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_bison_external_scanner_create(void);
void tree_sitter_bison_external_scanner_destroy(void *);
bool tree_sitter_bison_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_bison_external_scanner_serialize(void *, char *);
void tree_sitter_bison_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_bison(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_bison_external_scanner_create,
      tree_sitter_bison_external_scanner_destroy,
      tree_sitter_bison_external_scanner_scan,
      tree_sitter_bison_external_scanner_serialize,
      tree_sitter_bison_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
