#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 226
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 134
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_PERCENT_LBRACE = 2,
  anon_sym_PERCENT_RBRACE = 3,
  aux_sym_prologue_body_token1 = 4,
  anon_sym_PERCENT_PERCENT = 5,
  anon_sym_COLON = 6,
  anon_sym_PIPE = 7,
  anon_sym_LBRACK = 8,
  aux_sym_component_token1 = 9,
  anon_sym_RBRACK = 10,
  anon_sym_PERCENT = 11,
  anon_sym_type = 12,
  anon_sym_require = 13,
  anon_sym_token = 14,
  anon_sym_nterm = 15,
  aux_sym__decl_op_precedence_token1 = 16,
  anon_sym_initial_DASHdeclaration = 17,
  anon_sym_glr_DASHparser = 18,
  anon_sym_destructor = 19,
  anon_sym_LT = 20,
  anon_sym_STAR = 21,
  anon_sym_GT = 22,
  anon_sym_printer = 23,
  aux_sym__decl_expect_token1 = 24,
  aux_sym__decl_expect_token2 = 25,
  anon_sym_start = 26,
  anon_sym_define = 27,
  anon_sym_DOT = 28,
  anon_sym_LBRACE = 29,
  anon_sym_RBRACE = 30,
  anon_sym_code = 31,
  anon_sym_DASH = 32,
  anon_sym_union = 33,
  anon_sym_debug = 34,
  anon_sym_header = 35,
  anon_sym_language = 36,
  anon_sym_locations = 37,
  anon_sym_name_DASHprefix = 38,
  anon_sym_no_DASHlines = 39,
  anon_sym_output = 40,
  anon_sym_pure_DASHparser = 41,
  anon_sym_skeleton = 42,
  anon_sym_token_DASHtable = 43,
  anon_sym_verbose = 44,
  anon_sym_yacc = 45,
  anon_sym_initial_DASHaction = 46,
  anon_sym_parse_DASHparam = 47,
  anon_sym_PERCENTmerge = 48,
  sym_directive_empty = 49,
  anon_sym__LPAREN = 50,
  anon_sym_RPAREN = 51,
  anon_sym_L_DQUOTE = 52,
  anon_sym_u_DQUOTE = 53,
  anon_sym_U_DQUOTE = 54,
  anon_sym_u8_DQUOTE = 55,
  anon_sym_DQUOTE = 56,
  aux_sym_string_literal_token1 = 57,
  sym_number_literal = 58,
  anon_sym_opt = 59,
  anon_sym_1 = 60,
  anon_sym_SQUOTE = 61,
  aux_sym_char_literal_token1 = 62,
  anon_sym_SLASH_SLASH = 63,
  aux_sym_comment_token1 = 64,
  anon_sym_SLASH_STAR = 65,
  aux_sym_comment_token2 = 66,
  anon_sym_SLASH = 67,
  sym_undelimited_code_block = 68,
  sym_error_sentinel = 69,
  sym_sections = 70,
  sym_prologue = 71,
  sym_prologue_body = 72,
  sym_grammar_rules_section = 73,
  sym_grammar_rules_body = 74,
  sym_grammar_rule = 75,
  sym_component = 76,
  sym_action = 77,
  sym_declaration = 78,
  sym__decl_type = 79,
  sym__decl_require = 80,
  sym__decl_token = 81,
  sym__decl_nterm = 82,
  sym__decl_op_precedence = 83,
  sym__decl_initial_declaration = 84,
  sym__decl_glr_parser = 85,
  sym__decl_destructor = 86,
  sym__decl_printer = 87,
  sym__decl_expect = 88,
  sym__decl_start = 89,
  sym__decl_define = 90,
  sym__decl_code = 91,
  sym__decl_union = 92,
  sym__decl_debug = 93,
  sym__decl_header = 94,
  sym__decl_locations = 95,
  sym__decl_name_prefix = 96,
  sym__decl_no_lines = 97,
  sym__decl_output = 98,
  sym__decl_pure_parser = 99,
  sym__decl_skeleton = 100,
  sym__decl_token_table = 101,
  sym__decl_verbose = 102,
  sym__decl_yacc = 103,
  sym__decl_inial_action = 104,
  sym__decl_parse_param = 105,
  sym_directive_merge = 106,
  sym_string = 107,
  sym_string_literal = 108,
  sym_type_tag = 109,
  sym_type = 110,
  sym_grammar_rule_identifier = 111,
  sym_code_block = 112,
  sym_char_literal = 113,
  sym_comment = 114,
  aux_sym_sections_repeat1 = 115,
  aux_sym_prologue_body_repeat1 = 116,
  aux_sym_grammar_rules_body_repeat1 = 117,
  aux_sym_grammar_rule_repeat1 = 118,
  aux_sym_grammar_rule_repeat2 = 119,
  aux_sym__decl_type_repeat1 = 120,
  aux_sym__decl_type_repeat2 = 121,
  aux_sym__decl_token_repeat1 = 122,
  aux_sym__decl_token_repeat2 = 123,
  aux_sym__decl_token_repeat3 = 124,
  aux_sym__decl_nterm_repeat1 = 125,
  aux_sym__decl_nterm_repeat2 = 126,
  aux_sym__decl_op_precedence_repeat1 = 127,
  aux_sym__decl_op_precedence_repeat2 = 128,
  aux_sym__decl_destructor_repeat1 = 129,
  aux_sym__decl_define_repeat1 = 130,
  aux_sym__decl_code_repeat1 = 131,
  aux_sym_string_literal_repeat1 = 132,
  aux_sym_type_repeat1 = 133,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_PERCENT_LBRACE] = "%{",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [aux_sym_prologue_body_token1] = "prologue_body_token1",
  [anon_sym_PERCENT_PERCENT] = "%%",
  [anon_sym_COLON] = ":",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACK] = "[",
  [aux_sym_component_token1] = "component_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PERCENT] = "declaration_name",
  [anon_sym_type] = "declaration_name",
  [anon_sym_require] = "declaration_name",
  [anon_sym_token] = "declaration_name",
  [anon_sym_nterm] = "declaration_name",
  [aux_sym__decl_op_precedence_token1] = "declaration_name",
  [anon_sym_initial_DASHdeclaration] = "declaration_name",
  [anon_sym_glr_DASHparser] = "declaration_name",
  [anon_sym_destructor] = "declaration_name",
  [anon_sym_LT] = "<",
  [anon_sym_STAR] = "*",
  [anon_sym_GT] = ">",
  [anon_sym_printer] = "declaration_name",
  [aux_sym__decl_expect_token1] = "declaration_name",
  [aux_sym__decl_expect_token2] = "_decl_expect_token2",
  [anon_sym_start] = "declaration_name",
  [anon_sym_define] = "declaration_name",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_code] = "declaration_name",
  [anon_sym_DASH] = "-",
  [anon_sym_union] = "declaration_name",
  [anon_sym_debug] = "declaration_name",
  [anon_sym_header] = "declaration_name",
  [anon_sym_language] = "declaration_name",
  [anon_sym_locations] = "declaration_name",
  [anon_sym_name_DASHprefix] = "declaration_name",
  [anon_sym_no_DASHlines] = "declaration_name",
  [anon_sym_output] = "declaration_name",
  [anon_sym_pure_DASHparser] = "declaration_name",
  [anon_sym_skeleton] = "declaration_name",
  [anon_sym_token_DASHtable] = "declaration_name",
  [anon_sym_verbose] = "declaration_name",
  [anon_sym_yacc] = "declaration_name",
  [anon_sym_initial_DASHaction] = "declaration_name",
  [anon_sym_parse_DASHparam] = "declaration_name",
  [anon_sym_PERCENTmerge] = "%merge",
  [sym_directive_empty] = "directive",
  [anon_sym__LPAREN] = "_(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_L_DQUOTE] = "L\"",
  [anon_sym_u_DQUOTE] = "u\"",
  [anon_sym_U_DQUOTE] = "U\"",
  [anon_sym_u8_DQUOTE] = "u8\"",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_content",
  [sym_number_literal] = "number_literal",
  [anon_sym_opt] = "opt",
  [anon_sym_1] = "1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_literal_token1] = "char_literal_token1",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_SLASH] = "/",
  [sym_undelimited_code_block] = "undelimited_code_block",
  [sym_error_sentinel] = "error_sentinel",
  [sym_sections] = "sections",
  [sym_prologue] = "prologue",
  [sym_prologue_body] = "prologue_body",
  [sym_grammar_rules_section] = "grammar_rules_section",
  [sym_grammar_rules_body] = "grammar_rules_body",
  [sym_grammar_rule] = "grammar_rule",
  [sym_component] = "component",
  [sym_action] = "action",
  [sym_declaration] = "declaration",
  [sym__decl_type] = "_decl_type",
  [sym__decl_require] = "_decl_require",
  [sym__decl_token] = "_decl_token",
  [sym__decl_nterm] = "_decl_nterm",
  [sym__decl_op_precedence] = "_decl_op_precedence",
  [sym__decl_initial_declaration] = "_decl_initial_declaration",
  [sym__decl_glr_parser] = "_decl_glr_parser",
  [sym__decl_destructor] = "_decl_destructor",
  [sym__decl_printer] = "_decl_printer",
  [sym__decl_expect] = "_decl_expect",
  [sym__decl_start] = "_decl_start",
  [sym__decl_define] = "_decl_define",
  [sym__decl_code] = "_decl_code",
  [sym__decl_union] = "_decl_union",
  [sym__decl_debug] = "_decl_debug",
  [sym__decl_header] = "_decl_header",
  [sym__decl_locations] = "_decl_locations",
  [sym__decl_name_prefix] = "_decl_name_prefix",
  [sym__decl_no_lines] = "_decl_no_lines",
  [sym__decl_output] = "_decl_output",
  [sym__decl_pure_parser] = "_decl_pure_parser",
  [sym__decl_skeleton] = "_decl_skeleton",
  [sym__decl_token_table] = "_decl_token_table",
  [sym__decl_verbose] = "_decl_verbose",
  [sym__decl_yacc] = "_decl_yacc",
  [sym__decl_inial_action] = "_decl_inial_action",
  [sym__decl_parse_param] = "_decl_parse_param",
  [sym_directive_merge] = "directive",
  [sym_string] = "string",
  [sym_string_literal] = "string_literal",
  [sym_type_tag] = "type_tag",
  [sym_type] = "type",
  [sym_grammar_rule_identifier] = "grammar_rule_identifier",
  [sym_code_block] = "code_block",
  [sym_char_literal] = "char_literal",
  [sym_comment] = "comment",
  [aux_sym_sections_repeat1] = "sections_repeat1",
  [aux_sym_prologue_body_repeat1] = "prologue_body_repeat1",
  [aux_sym_grammar_rules_body_repeat1] = "grammar_rules_body_repeat1",
  [aux_sym_grammar_rule_repeat1] = "grammar_rule_repeat1",
  [aux_sym_grammar_rule_repeat2] = "grammar_rule_repeat2",
  [aux_sym__decl_type_repeat1] = "_decl_type_repeat1",
  [aux_sym__decl_type_repeat2] = "_decl_type_repeat2",
  [aux_sym__decl_token_repeat1] = "_decl_token_repeat1",
  [aux_sym__decl_token_repeat2] = "_decl_token_repeat2",
  [aux_sym__decl_token_repeat3] = "_decl_token_repeat3",
  [aux_sym__decl_nterm_repeat1] = "_decl_nterm_repeat1",
  [aux_sym__decl_nterm_repeat2] = "_decl_nterm_repeat2",
  [aux_sym__decl_op_precedence_repeat1] = "_decl_op_precedence_repeat1",
  [aux_sym__decl_op_precedence_repeat2] = "_decl_op_precedence_repeat2",
  [aux_sym__decl_destructor_repeat1] = "_decl_destructor_repeat1",
  [aux_sym__decl_define_repeat1] = "_decl_define_repeat1",
  [aux_sym__decl_code_repeat1] = "_decl_code_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_PERCENT_LBRACE] = anon_sym_PERCENT_LBRACE,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [aux_sym_prologue_body_token1] = aux_sym_prologue_body_token1,
  [anon_sym_PERCENT_PERCENT] = anon_sym_PERCENT_PERCENT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_component_token1] = aux_sym_component_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_type] = anon_sym_PERCENT,
  [anon_sym_require] = anon_sym_PERCENT,
  [anon_sym_token] = anon_sym_PERCENT,
  [anon_sym_nterm] = anon_sym_PERCENT,
  [aux_sym__decl_op_precedence_token1] = anon_sym_PERCENT,
  [anon_sym_initial_DASHdeclaration] = anon_sym_PERCENT,
  [anon_sym_glr_DASHparser] = anon_sym_PERCENT,
  [anon_sym_destructor] = anon_sym_PERCENT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_printer] = anon_sym_PERCENT,
  [aux_sym__decl_expect_token1] = anon_sym_PERCENT,
  [aux_sym__decl_expect_token2] = aux_sym__decl_expect_token2,
  [anon_sym_start] = anon_sym_PERCENT,
  [anon_sym_define] = anon_sym_PERCENT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_code] = anon_sym_PERCENT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_union] = anon_sym_PERCENT,
  [anon_sym_debug] = anon_sym_PERCENT,
  [anon_sym_header] = anon_sym_PERCENT,
  [anon_sym_language] = anon_sym_PERCENT,
  [anon_sym_locations] = anon_sym_PERCENT,
  [anon_sym_name_DASHprefix] = anon_sym_PERCENT,
  [anon_sym_no_DASHlines] = anon_sym_PERCENT,
  [anon_sym_output] = anon_sym_PERCENT,
  [anon_sym_pure_DASHparser] = anon_sym_PERCENT,
  [anon_sym_skeleton] = anon_sym_PERCENT,
  [anon_sym_token_DASHtable] = anon_sym_PERCENT,
  [anon_sym_verbose] = anon_sym_PERCENT,
  [anon_sym_yacc] = anon_sym_PERCENT,
  [anon_sym_initial_DASHaction] = anon_sym_PERCENT,
  [anon_sym_parse_DASHparam] = anon_sym_PERCENT,
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
  [anon_sym_opt] = anon_sym_opt,
  [anon_sym_1] = anon_sym_1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_literal_token1] = aux_sym_char_literal_token1,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_undelimited_code_block] = sym_undelimited_code_block,
  [sym_error_sentinel] = sym_error_sentinel,
  [sym_sections] = sym_sections,
  [sym_prologue] = sym_prologue,
  [sym_prologue_body] = sym_prologue_body,
  [sym_grammar_rules_section] = sym_grammar_rules_section,
  [sym_grammar_rules_body] = sym_grammar_rules_body,
  [sym_grammar_rule] = sym_grammar_rule,
  [sym_component] = sym_component,
  [sym_action] = sym_action,
  [sym_declaration] = sym_declaration,
  [sym__decl_type] = sym__decl_type,
  [sym__decl_require] = sym__decl_require,
  [sym__decl_token] = sym__decl_token,
  [sym__decl_nterm] = sym__decl_nterm,
  [sym__decl_op_precedence] = sym__decl_op_precedence,
  [sym__decl_initial_declaration] = sym__decl_initial_declaration,
  [sym__decl_glr_parser] = sym__decl_glr_parser,
  [sym__decl_destructor] = sym__decl_destructor,
  [sym__decl_printer] = sym__decl_printer,
  [sym__decl_expect] = sym__decl_expect,
  [sym__decl_start] = sym__decl_start,
  [sym__decl_define] = sym__decl_define,
  [sym__decl_code] = sym__decl_code,
  [sym__decl_union] = sym__decl_union,
  [sym__decl_debug] = sym__decl_debug,
  [sym__decl_header] = sym__decl_header,
  [sym__decl_locations] = sym__decl_locations,
  [sym__decl_name_prefix] = sym__decl_name_prefix,
  [sym__decl_no_lines] = sym__decl_no_lines,
  [sym__decl_output] = sym__decl_output,
  [sym__decl_pure_parser] = sym__decl_pure_parser,
  [sym__decl_skeleton] = sym__decl_skeleton,
  [sym__decl_token_table] = sym__decl_token_table,
  [sym__decl_verbose] = sym__decl_verbose,
  [sym__decl_yacc] = sym__decl_yacc,
  [sym__decl_inial_action] = sym__decl_inial_action,
  [sym__decl_parse_param] = sym__decl_parse_param,
  [sym_directive_merge] = sym_directive_empty,
  [sym_string] = sym_string,
  [sym_string_literal] = sym_string_literal,
  [sym_type_tag] = sym_type_tag,
  [sym_type] = sym_type,
  [sym_grammar_rule_identifier] = sym_grammar_rule_identifier,
  [sym_code_block] = sym_code_block,
  [sym_char_literal] = sym_char_literal,
  [sym_comment] = sym_comment,
  [aux_sym_sections_repeat1] = aux_sym_sections_repeat1,
  [aux_sym_prologue_body_repeat1] = aux_sym_prologue_body_repeat1,
  [aux_sym_grammar_rules_body_repeat1] = aux_sym_grammar_rules_body_repeat1,
  [aux_sym_grammar_rule_repeat1] = aux_sym_grammar_rule_repeat1,
  [aux_sym_grammar_rule_repeat2] = aux_sym_grammar_rule_repeat2,
  [aux_sym__decl_type_repeat1] = aux_sym__decl_type_repeat1,
  [aux_sym__decl_type_repeat2] = aux_sym__decl_type_repeat2,
  [aux_sym__decl_token_repeat1] = aux_sym__decl_token_repeat1,
  [aux_sym__decl_token_repeat2] = aux_sym__decl_token_repeat2,
  [aux_sym__decl_token_repeat3] = aux_sym__decl_token_repeat3,
  [aux_sym__decl_nterm_repeat1] = aux_sym__decl_nterm_repeat1,
  [aux_sym__decl_nterm_repeat2] = aux_sym__decl_nterm_repeat2,
  [aux_sym__decl_op_precedence_repeat1] = aux_sym__decl_op_precedence_repeat1,
  [aux_sym__decl_op_precedence_repeat2] = aux_sym__decl_op_precedence_repeat2,
  [aux_sym__decl_destructor_repeat1] = aux_sym__decl_destructor_repeat1,
  [aux_sym__decl_define_repeat1] = aux_sym__decl_define_repeat1,
  [aux_sym__decl_code_repeat1] = aux_sym__decl_code_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_component_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_require] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_token] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nterm] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__decl_op_precedence_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_initial_DASHdeclaration] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_glr_DASHparser] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_destructor] = {
    .visible = true,
    .named = true,
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
  [anon_sym_printer] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__decl_expect_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__decl_expect_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_start] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = true,
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
  [anon_sym_code] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_debug] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_header] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_language] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_locations] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_name_DASHprefix] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no_DASHlines] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pure_DASHparser] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_skeleton] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_token_DASHtable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_verbose] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_yacc] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_initial_DASHaction] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_parse_DASHparam] = {
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
  [anon_sym_opt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
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
  [sym_error_sentinel] = {
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
  [sym__decl_type] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_require] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_token] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_nterm] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_op_precedence] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_initial_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_glr_parser] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_destructor] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_printer] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_expect] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_start] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_define] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_code] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_union] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_debug] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_header] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_locations] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_name_prefix] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_no_lines] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_output] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_pure_parser] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_skeleton] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_token_table] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_verbose] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_yacc] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_inial_action] = {
    .visible = false,
    .named = true,
  },
  [sym__decl_parse_param] = {
    .visible = false,
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
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar_rule_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_char_literal] = {
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
  [aux_sym__decl_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_type_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_token_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_token_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_token_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_nterm_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_nterm_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_op_precedence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_op_precedence_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_destructor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_define_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__decl_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat1] = {
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
  [27] = 19,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
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
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 19,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 37,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 15,
  [88] = 88,
  [89] = 89,
  [90] = 20,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 76,
  [99] = 99,
  [100] = 100,
  [101] = 11,
  [102] = 102,
  [103] = 103,
  [104] = 104,
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
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
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
  [170] = 169,
  [171] = 171,
  [172] = 172,
  [173] = 168,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 177,
  [179] = 176,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 191,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 218,
  [222] = 222,
  [223] = 205,
  [224] = 224,
  [225] = 225,
};

static inline bool aux_sym_component_token1_character_set_1(int32_t c) {
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

static inline bool aux_sym_component_token1_character_set_2(int32_t c) {
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

static inline bool aux_sym_component_token1_character_set_3(int32_t c) {
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

static inline bool aux_sym_component_token1_character_set_4(int32_t c) {
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
      if (eof) ADVANCE(233);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '%') ADVANCE(252);
      if (lookahead == '\'') ADVANCE(323);
      if (lookahead == ')') ADVANCE(295);
      if (lookahead == '*') ADVANCE(263);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '/') ADVANCE(339);
      if (lookahead == '1') ADVANCE(322);
      if (lookahead == ':') ADVANCE(241);
      if (lookahead == ';') ADVANCE(234);
      if (lookahead == '<') ADVANCE(262);
      if (lookahead == '>') ADVANCE(264);
      if (lookahead == 'L') ADVANCE(10);
      if (lookahead == 'U') ADVANCE(11);
      if (lookahead == '[') ADVANCE(243);
      if (lookahead == ']') ADVANCE(250);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(211);
      if (lookahead == 'g') ADVANCE(118);
      if (lookahead == 'h') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(66);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(13);
      if (lookahead == 'v') ADVANCE(80);
      if (lookahead == 'y') ADVANCE(34);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(242);
      if (lookahead == '}') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(231)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(237);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '/') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(303);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(324);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '%') ADVANCE(253);
      if (lookahead == '\'') ADVANCE(323);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(307);
      if (lookahead == ';') ADVANCE(234);
      if (lookahead == '<') ADVANCE(262);
      if (lookahead == 'L') ADVANCE(244);
      if (lookahead == 'U') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '_') ADVANCE(248);
      if (lookahead == 'u') ADVANCE(246);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (aux_sym_component_token1_character_set_1(lookahead)) ADVANCE(249);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '%') ADVANCE(253);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ';') ADVANCE(234);
      if (lookahead == 'L') ADVANCE(244);
      if (lookahead == 'U') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(29);
      if (aux_sym_component_token1_character_set_2(lookahead)) ADVANCE(249);
      if (lookahead == 'u') ADVANCE(246);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '\'') ADVANCE(323);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ';') ADVANCE(234);
      if (lookahead == '<') ADVANCE(262);
      if (lookahead == 'L') ADVANCE(244);
      if (lookahead == 'U') ADVANCE(245);
      if (lookahead == '[') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(29);
      if (aux_sym_component_token1_character_set_2(lookahead)) ADVANCE(249);
      if (lookahead == 'u') ADVANCE(246);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '%') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(323);
      if (lookahead == ')') ADVANCE(295);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(307);
      if (lookahead == ':') ADVANCE(241);
      if (lookahead == ';') ADVANCE(234);
      if (lookahead == '<') ADVANCE(262);
      if (lookahead == 'L') ADVANCE(244);
      if (lookahead == 'U') ADVANCE(245);
      if (lookahead == '[') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(29);
      if (lookahead == '_') ADVANCE(248);
      if (lookahead == 'u') ADVANCE(246);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(242);
      if (lookahead == '}') ADVANCE(274);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (aux_sym_component_token1_character_set_1(lookahead)) ADVANCE(249);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '%') ADVANCE(251);
      if (lookahead == '\'') ADVANCE(323);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(241);
      if (lookahead == ';') ADVANCE(234);
      if (lookahead == '<') ADVANCE(262);
      if (lookahead == 'L') ADVANCE(244);
      if (lookahead == 'U') ADVANCE(245);
      if (lookahead == '[') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(29);
      if (aux_sym_component_token1_character_set_2(lookahead)) ADVANCE(249);
      if (lookahead == 'u') ADVANCE(246);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(296);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(298);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '8') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '8') ADVANCE(14);
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(299);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(294);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(334);
      if (lookahead == '/') ADVANCE(327);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(338);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(338);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(336);
      if (lookahead == '/') ADVANCE(329);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(154);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(158);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(157);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(159);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == '0') ADVANCE(307);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 28:
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == '0') ADVANCE(305);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 29:
      if (lookahead == 'U') ADVANCE(228);
      if (lookahead == 'u') ADVANCE(224);
      END_STATE();
    case 30:
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(15);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(206);
      if (lookahead == 'f') ADVANCE(108);
      if (lookahead == 's') ADVANCE(199);
      END_STATE();
    case 50:
      if (lookahead == 'b') ADVANCE(149);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(121);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(258);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(289);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(193);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(95);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(203);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'm') ADVANCE(84);
      if (lookahead == '}') ADVANCE(236);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 98:
      if (lookahead == 'f') ADVANCE(191);
      END_STATE();
    case 99:
      if (lookahead == 'f') ADVANCE(107);
      END_STATE();
    case 100:
      if (lookahead == 'g') ADVANCE(105);
      END_STATE();
    case 101:
      if (lookahead == 'g') ADVANCE(278);
      END_STATE();
    case 102:
      if (lookahead == 'g') ADVANCE(208);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 105:
      if (lookahead == 'h') ADVANCE(191);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 116:
      if (lookahead == 'k') ADVANCE(78);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 117:
      if (lookahead == 'k') ADVANCE(83);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(257);
      END_STATE();
    case 125:
      if (lookahead == 'm') ADVANCE(291);
      END_STATE();
    case 126:
      if (lookahead == 'm') ADVANCE(94);
      END_STATE();
    case 127:
      if (lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 'y') ADVANCE(155);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(190);
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(209);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(195);
      END_STATE();
    case 157:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 158:
      if (lookahead == 'p') ADVANCE(177);
      END_STATE();
    case 159:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 160:
      if (lookahead == 'q') ADVANCE(207);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(265);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(261);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(321);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(284);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 206:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 207:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 208:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 209:
      if (lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 210:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 211:
      if (lookahead == 'x') ADVANCE(153);
      END_STATE();
    case 212:
      if (lookahead == 'x') ADVANCE(282);
      END_STATE();
    case 213:
      if (lookahead == 'y') ADVANCE(293);
      END_STATE();
    case 214:
      if (lookahead == '}') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(239);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(310);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 229:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 230:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 231:
      if (eof) ADVANCE(233);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '%') ADVANCE(252);
      if (lookahead == '\'') ADVANCE(323);
      if (lookahead == ')') ADVANCE(295);
      if (lookahead == '*') ADVANCE(263);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '/') ADVANCE(339);
      if (lookahead == '1') ADVANCE(322);
      if (lookahead == ':') ADVANCE(241);
      if (lookahead == ';') ADVANCE(234);
      if (lookahead == '<') ADVANCE(262);
      if (lookahead == '>') ADVANCE(264);
      if (lookahead == 'L') ADVANCE(10);
      if (lookahead == 'U') ADVANCE(11);
      if (lookahead == '[') ADVANCE(243);
      if (lookahead == ']') ADVANCE(250);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(242);
      if (lookahead == '}') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(231)
      END_STATE();
    case 232:
      if (eof) ADVANCE(233);
      if (lookahead == '%') ADVANCE(253);
      if (lookahead == '*') ADVANCE(263);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ';') ADVANCE(234);
      if (lookahead == '<') ADVANCE(262);
      if (lookahead == '>') ADVANCE(264);
      if (lookahead == '\\') ADVANCE(29);
      if (aux_sym_component_token1_character_set_3(lookahead)) ADVANCE(249);
      if (lookahead == '{') ADVANCE(273);
      if (lookahead == '|') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(232)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_PERCENT_LBRACE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_prologue_body_token1);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '%') ADVANCE(214);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_prologue_body_token1);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '%') ADVANCE(229);
      if (lookahead == '*') ADVANCE(335);
      if (lookahead == '/') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_prologue_body_token1);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '%') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_component_token1);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '\\') ADVANCE(29);
      if (aux_sym_component_token1_character_set_4(lookahead)) ADVANCE(249);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_component_token1);
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '\\') ADVANCE(29);
      if (aux_sym_component_token1_character_set_4(lookahead)) ADVANCE(249);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_component_token1);
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '8') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(29);
      if (aux_sym_component_token1_character_set_4(lookahead)) ADVANCE(249);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_component_token1);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '\\') ADVANCE(29);
      if (aux_sym_component_token1_character_set_4(lookahead)) ADVANCE(249);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_component_token1);
      if (lookahead == '(') ADVANCE(294);
      if (lookahead == '\\') ADVANCE(29);
      if (aux_sym_component_token1_character_set_4(lookahead)) ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_component_token1);
      if (lookahead == '\\') ADVANCE(29);
      if (aux_sym_component_token1_character_set_4(lookahead)) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(240);
      if (lookahead == 'm') ADVANCE(84);
      if (lookahead == '{') ADVANCE(235);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(240);
      if (lookahead == 'm') ADVANCE(84);
      if (lookahead == '{') ADVANCE(235);
      if (lookahead == '}') ADVANCE(236);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(240);
      if (lookahead == '{') ADVANCE(235);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_require);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_token);
      if (lookahead == '-') ADVANCE(200);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_nterm);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__decl_op_precedence_token1);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_initial_DASHdeclaration);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_glr_DASHparser);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_destructor);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_printer);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__decl_expect_token1);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__decl_expect_token1);
      if (lookahead == '-') ADVANCE(175);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__decl_expect_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_start);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_code);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_debug);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_header);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_language);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_locations);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_name_DASHprefix);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_no_DASHlines);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_pure_DASHparser);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_skeleton);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_token_DASHtable);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_verbose);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_yacc);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_initial_DASHaction);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_parse_DASHparam);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_PERCENTmerge);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_directive_empty);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym__LPAREN);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_L_DQUOTE);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_u_DQUOTE);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_U_DQUOTE);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_u8_DQUOTE);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(303);
      if (lookahead == '/') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(303);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(216);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(217);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(314);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(317);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(315);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(217);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(317);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(315);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(316);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(317);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(319);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(220);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(317);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(215);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(320);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(221);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(310);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(219);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(221);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(317);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(219);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(317);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(220);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(221);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(317);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(315);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(220);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(317);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(315);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(220);
      if (lookahead == '.') ADVANCE(318);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(317);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(315);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(216);
      if (lookahead == '0') ADVANCE(308);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(320);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(221);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(310);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(310);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(317);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(312);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(320);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_number_literal);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_opt);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '*') ADVANCE(334);
      if (lookahead == '/') ADVANCE(327);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_char_literal_token1);
      if (lookahead == '/') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(324);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '%') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(338);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(333);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(337);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(333);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(333);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '%') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(19);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(333);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(19);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(334);
      if (lookahead == '/') ADVANCE(327);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 232},
  [2] = {.lex_state = 232},
  [3] = {.lex_state = 232},
  [4] = {.lex_state = 232},
  [5] = {.lex_state = 232},
  [6] = {.lex_state = 232},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 232},
  [53] = {.lex_state = 232},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 232},
  [56] = {.lex_state = 232},
  [57] = {.lex_state = 232},
  [58] = {.lex_state = 232},
  [59] = {.lex_state = 232},
  [60] = {.lex_state = 232},
  [61] = {.lex_state = 232},
  [62] = {.lex_state = 232},
  [63] = {.lex_state = 232},
  [64] = {.lex_state = 232},
  [65] = {.lex_state = 232},
  [66] = {.lex_state = 232},
  [67] = {.lex_state = 232},
  [68] = {.lex_state = 232},
  [69] = {.lex_state = 232},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 232},
  [72] = {.lex_state = 232},
  [73] = {.lex_state = 232},
  [74] = {.lex_state = 232},
  [75] = {.lex_state = 232},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 232},
  [79] = {.lex_state = 232},
  [80] = {.lex_state = 232},
  [81] = {.lex_state = 232},
  [82] = {.lex_state = 232},
  [83] = {.lex_state = 232},
  [84] = {.lex_state = 232},
  [85] = {.lex_state = 232},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 232},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 232},
  [90] = {.lex_state = 232},
  [91] = {.lex_state = 232},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 232},
  [94] = {.lex_state = 232},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 232},
  [98] = {.lex_state = 232},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 232},
  [101] = {.lex_state = 232},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 232},
  [104] = {.lex_state = 232},
  [105] = {.lex_state = 232},
  [106] = {.lex_state = 232},
  [107] = {.lex_state = 232},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 232},
  [110] = {.lex_state = 232},
  [111] = {.lex_state = 232},
  [112] = {.lex_state = 232},
  [113] = {.lex_state = 232},
  [114] = {.lex_state = 232},
  [115] = {.lex_state = 232},
  [116] = {.lex_state = 232},
  [117] = {.lex_state = 232},
  [118] = {.lex_state = 232},
  [119] = {.lex_state = 232},
  [120] = {.lex_state = 232},
  [121] = {.lex_state = 232},
  [122] = {.lex_state = 232},
  [123] = {.lex_state = 232},
  [124] = {.lex_state = 232},
  [125] = {.lex_state = 232},
  [126] = {.lex_state = 232},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 232},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 232},
  [131] = {.lex_state = 232},
  [132] = {.lex_state = 232},
  [133] = {.lex_state = 232},
  [134] = {.lex_state = 232},
  [135] = {.lex_state = 232},
  [136] = {.lex_state = 232},
  [137] = {.lex_state = 232},
  [138] = {.lex_state = 232},
  [139] = {.lex_state = 232},
  [140] = {.lex_state = 232},
  [141] = {.lex_state = 232},
  [142] = {.lex_state = 232},
  [143] = {.lex_state = 232},
  [144] = {.lex_state = 232},
  [145] = {.lex_state = 232},
  [146] = {.lex_state = 232},
  [147] = {.lex_state = 232},
  [148] = {.lex_state = 232},
  [149] = {.lex_state = 232},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 232},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 232},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 232},
  [158] = {.lex_state = 232},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 232},
  [163] = {.lex_state = 232},
  [164] = {.lex_state = 232},
  [165] = {.lex_state = 232},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 232},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 232},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 232},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 232},
  [178] = {.lex_state = 232},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 232},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 232},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 232},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 232},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 232},
  [212] = {.lex_state = 3},
  [213] = {.lex_state = 232},
  [214] = {.lex_state = 332},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 18},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {(TSStateId)(-1)},
  [225] = {(TSStateId)(-1)},
};

enum {
  ts_external_token_undelimited_code_block = 0,
  ts_external_token_error_sentinel = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_undelimited_code_block] = sym_undelimited_code_block,
  [ts_external_token_error_sentinel] = sym_error_sentinel,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_undelimited_code_block] = true,
    [ts_external_token_error_sentinel] = true,
  },
  [2] = {
    [ts_external_token_undelimited_code_block] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_require] = ACTIONS(1),
    [anon_sym_token] = ACTIONS(1),
    [anon_sym_nterm] = ACTIONS(1),
    [aux_sym__decl_op_precedence_token1] = ACTIONS(1),
    [anon_sym_initial_DASHdeclaration] = ACTIONS(1),
    [anon_sym_glr_DASHparser] = ACTIONS(1),
    [anon_sym_destructor] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_printer] = ACTIONS(1),
    [aux_sym__decl_expect_token1] = ACTIONS(1),
    [anon_sym_start] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_code] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_debug] = ACTIONS(1),
    [anon_sym_header] = ACTIONS(1),
    [anon_sym_language] = ACTIONS(1),
    [anon_sym_locations] = ACTIONS(1),
    [anon_sym_name_DASHprefix] = ACTIONS(1),
    [anon_sym_no_DASHlines] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_pure_DASHparser] = ACTIONS(1),
    [anon_sym_skeleton] = ACTIONS(1),
    [anon_sym_token_DASHtable] = ACTIONS(1),
    [anon_sym_verbose] = ACTIONS(1),
    [anon_sym_yacc] = ACTIONS(1),
    [anon_sym_initial_DASHaction] = ACTIONS(1),
    [anon_sym_parse_DASHparam] = ACTIONS(1),
    [anon_sym_PERCENTmerge] = ACTIONS(1),
    [anon_sym__LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_L_DQUOTE] = ACTIONS(1),
    [anon_sym_u_DQUOTE] = ACTIONS(1),
    [anon_sym_U_DQUOTE] = ACTIONS(1),
    [anon_sym_u8_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_opt] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_undelimited_code_block] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_sections] = STATE(192),
    [sym_prologue] = STATE(158),
    [sym_grammar_rules_section] = STATE(199),
    [sym_declaration] = STATE(146),
    [sym__decl_type] = STATE(128),
    [sym__decl_require] = STATE(128),
    [sym__decl_token] = STATE(128),
    [sym__decl_nterm] = STATE(128),
    [sym__decl_op_precedence] = STATE(128),
    [sym__decl_initial_declaration] = STATE(128),
    [sym__decl_glr_parser] = STATE(128),
    [sym__decl_destructor] = STATE(128),
    [sym__decl_printer] = STATE(128),
    [sym__decl_expect] = STATE(128),
    [sym__decl_start] = STATE(128),
    [sym__decl_define] = STATE(128),
    [sym__decl_code] = STATE(128),
    [sym__decl_union] = STATE(128),
    [sym__decl_debug] = STATE(128),
    [sym__decl_header] = STATE(128),
    [sym__decl_locations] = STATE(128),
    [sym__decl_name_prefix] = STATE(128),
    [sym__decl_no_lines] = STATE(128),
    [sym__decl_output] = STATE(128),
    [sym__decl_pure_parser] = STATE(128),
    [sym__decl_skeleton] = STATE(128),
    [sym__decl_token_table] = STATE(128),
    [sym__decl_verbose] = STATE(128),
    [sym__decl_yacc] = STATE(128),
    [sym__decl_inial_action] = STATE(128),
    [sym__decl_parse_param] = STATE(128),
    [sym_comment] = STATE(1),
    [aux_sym_sections_repeat1] = STATE(4),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(7),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(9),
    [anon_sym_PERCENT] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      aux_sym_component_token1,
    ACTIONS(18), 1,
      anon_sym_PERCENT,
    STATE(136), 1,
      sym_grammar_rule,
    STATE(193), 1,
      sym_declaration,
    STATE(195), 1,
      sym_grammar_rule_identifier,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
    STATE(2), 2,
      sym_comment,
      aux_sym_grammar_rules_body_repeat1,
    STATE(128), 27,
      sym__decl_type,
      sym__decl_require,
      sym__decl_token,
      sym__decl_nterm,
      sym__decl_op_precedence,
      sym__decl_initial_declaration,
      sym__decl_glr_parser,
      sym__decl_destructor,
      sym__decl_printer,
      sym__decl_expect,
      sym__decl_start,
      sym__decl_define,
      sym__decl_code,
      sym__decl_union,
      sym__decl_debug,
      sym__decl_header,
      sym__decl_locations,
      sym__decl_name_prefix,
      sym__decl_no_lines,
      sym__decl_output,
      sym__decl_pure_parser,
      sym__decl_skeleton,
      sym__decl_token_table,
      sym__decl_verbose,
      sym__decl_yacc,
      sym__decl_inial_action,
      sym__decl_parse_param,
  [59] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(23), 1,
      aux_sym_component_token1,
    STATE(2), 1,
      aux_sym_grammar_rules_body_repeat1,
    STATE(3), 1,
      sym_comment,
    STATE(136), 1,
      sym_grammar_rule,
    STATE(193), 1,
      sym_declaration,
    STATE(195), 1,
      sym_grammar_rule_identifier,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
    STATE(128), 27,
      sym__decl_type,
      sym__decl_require,
      sym__decl_token,
      sym__decl_nterm,
      sym__decl_op_precedence,
      sym__decl_initial_declaration,
      sym__decl_glr_parser,
      sym__decl_destructor,
      sym__decl_printer,
      sym__decl_expect,
      sym__decl_start,
      sym__decl_define,
      sym__decl_code,
      sym__decl_union,
      sym__decl_debug,
      sym__decl_header,
      sym__decl_locations,
      sym__decl_name_prefix,
      sym__decl_no_lines,
      sym__decl_output,
      sym__decl_pure_parser,
      sym__decl_skeleton,
      sym__decl_token_table,
      sym__decl_verbose,
      sym__decl_yacc,
      sym__decl_inial_action,
      sym__decl_parse_param,
  [120] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    STATE(4), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_sections_repeat1,
    STATE(146), 1,
      sym_declaration,
    STATE(158), 1,
      sym_prologue,
    STATE(200), 1,
      sym_grammar_rules_section,
    STATE(128), 27,
      sym__decl_type,
      sym__decl_require,
      sym__decl_token,
      sym__decl_nterm,
      sym__decl_op_precedence,
      sym__decl_initial_declaration,
      sym__decl_glr_parser,
      sym__decl_destructor,
      sym__decl_printer,
      sym__decl_expect,
      sym__decl_start,
      sym__decl_define,
      sym__decl_code,
      sym__decl_union,
      sym__decl_debug,
      sym__decl_header,
      sym__decl_locations,
      sym__decl_name_prefix,
      sym__decl_no_lines,
      sym__decl_output,
      sym__decl_pure_parser,
      sym__decl_skeleton,
      sym__decl_token_table,
      sym__decl_verbose,
      sym__decl_yacc,
      sym__decl_inial_action,
      sym__decl_parse_param,
  [180] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      aux_sym_component_token1,
    ACTIONS(25), 1,
      anon_sym_PERCENT,
    STATE(3), 1,
      aux_sym_grammar_rules_body_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(136), 1,
      sym_grammar_rule,
    STATE(190), 1,
      sym_grammar_rules_body,
    STATE(193), 1,
      sym_declaration,
    STATE(195), 1,
      sym_grammar_rule_identifier,
    STATE(128), 27,
      sym__decl_type,
      sym__decl_require,
      sym__decl_token,
      sym__decl_nterm,
      sym__decl_op_precedence,
      sym__decl_initial_declaration,
      sym__decl_glr_parser,
      sym__decl_destructor,
      sym__decl_printer,
      sym__decl_expect,
      sym__decl_start,
      sym__decl_define,
      sym__decl_code,
      sym__decl_union,
      sym__decl_debug,
      sym__decl_header,
      sym__decl_locations,
      sym__decl_name_prefix,
      sym__decl_no_lines,
      sym__decl_output,
      sym__decl_pure_parser,
      sym__decl_skeleton,
      sym__decl_token_table,
      sym__decl_verbose,
      sym__decl_yacc,
      sym__decl_inial_action,
      sym__decl_parse_param,
  [240] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(27), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(30), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(32), 1,
      anon_sym_PERCENT,
    STATE(146), 1,
      sym_declaration,
    STATE(158), 1,
      sym_prologue,
    STATE(6), 2,
      sym_comment,
      aux_sym_sections_repeat1,
    STATE(128), 27,
      sym__decl_type,
      sym__decl_require,
      sym__decl_token,
      sym__decl_nterm,
      sym__decl_op_precedence,
      sym__decl_initial_declaration,
      sym__decl_glr_parser,
      sym__decl_destructor,
      sym__decl_printer,
      sym__decl_expect,
      sym__decl_start,
      sym__decl_define,
      sym__decl_code,
      sym__decl_union,
      sym__decl_debug,
      sym__decl_header,
      sym__decl_locations,
      sym__decl_name_prefix,
      sym__decl_no_lines,
      sym__decl_output,
      sym__decl_pure_parser,
      sym__decl_skeleton,
      sym__decl_token_table,
      sym__decl_verbose,
      sym__decl_yacc,
      sym__decl_inial_action,
      sym__decl_parse_param,
  [295] = 30,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      anon_sym_type,
    ACTIONS(37), 1,
      anon_sym_require,
    ACTIONS(39), 1,
      anon_sym_token,
    ACTIONS(41), 1,
      anon_sym_nterm,
    ACTIONS(43), 1,
      aux_sym__decl_op_precedence_token1,
    ACTIONS(45), 1,
      anon_sym_initial_DASHdeclaration,
    ACTIONS(47), 1,
      anon_sym_glr_DASHparser,
    ACTIONS(49), 1,
      anon_sym_destructor,
    ACTIONS(51), 1,
      anon_sym_printer,
    ACTIONS(53), 1,
      aux_sym__decl_expect_token1,
    ACTIONS(55), 1,
      anon_sym_start,
    ACTIONS(57), 1,
      anon_sym_define,
    ACTIONS(59), 1,
      anon_sym_code,
    ACTIONS(61), 1,
      anon_sym_union,
    ACTIONS(63), 1,
      anon_sym_debug,
    ACTIONS(65), 1,
      anon_sym_header,
    ACTIONS(67), 1,
      anon_sym_locations,
    ACTIONS(69), 1,
      anon_sym_name_DASHprefix,
    ACTIONS(71), 1,
      anon_sym_no_DASHlines,
    ACTIONS(73), 1,
      anon_sym_output,
    ACTIONS(75), 1,
      anon_sym_pure_DASHparser,
    ACTIONS(77), 1,
      anon_sym_skeleton,
    ACTIONS(79), 1,
      anon_sym_token_DASHtable,
    ACTIONS(81), 1,
      anon_sym_verbose,
    ACTIONS(83), 1,
      anon_sym_yacc,
    ACTIONS(85), 1,
      anon_sym_initial_DASHaction,
    ACTIONS(87), 1,
      anon_sym_parse_DASHparam,
    STATE(7), 1,
      sym_comment,
  [386] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(93), 1,
      aux_sym_component_token1,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_PERCENTmerge,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      sym_comment,
    STATE(9), 1,
      aux_sym_grammar_rule_repeat1,
    STATE(39), 1,
      sym_code_block,
    STATE(42), 1,
      sym_grammar_rule_identifier,
    STATE(44), 1,
      sym_component,
    STATE(166), 1,
      aux_sym_grammar_rule_repeat2,
    STATE(45), 4,
      sym_action,
      sym_directive_merge,
      sym_string_literal,
      sym_char_literal,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [442] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(105), 1,
      aux_sym_component_token1,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_PERCENTmerge,
    ACTIONS(117), 1,
      anon_sym_SQUOTE,
    STATE(39), 1,
      sym_code_block,
    STATE(42), 1,
      sym_grammar_rule_identifier,
    STATE(44), 1,
      sym_component,
    ACTIONS(103), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
    STATE(9), 2,
      sym_comment,
      aux_sym_grammar_rule_repeat1,
    STATE(45), 4,
      sym_action,
      sym_directive_merge,
      sym_string_literal,
      sym_char_literal,
    ACTIONS(114), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [491] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(93), 1,
      aux_sym_component_token1,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_PERCENTmerge,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      aux_sym_grammar_rule_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(39), 1,
      sym_code_block,
    STATE(42), 1,
      sym_grammar_rule_identifier,
    STATE(44), 1,
      sym_component,
    ACTIONS(120), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
    STATE(45), 4,
      sym_action,
      sym_directive_merge,
      sym_string_literal,
      sym_char_literal,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [542] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(11), 1,
      sym_comment,
    ACTIONS(124), 2,
      aux_sym_component_token1,
      anon_sym_PERCENT,
    ACTIONS(122), 17,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      anon_sym__LPAREN,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      sym_number_literal,
      anon_sym_SQUOTE,
  [575] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      aux_sym_component_token1,
    ACTIONS(130), 1,
      anon_sym_PERCENT,
    ACTIONS(132), 1,
      anon_sym_LT,
    STATE(12), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym__decl_op_precedence_repeat1,
    STATE(49), 1,
      sym_type_tag,
    STATE(81), 1,
      aux_sym__decl_op_precedence_repeat2,
    ACTIONS(126), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
    STATE(34), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [623] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      aux_sym_component_token1,
    ACTIONS(132), 1,
      anon_sym_LT,
    ACTIONS(136), 1,
      anon_sym_PERCENT,
    STATE(13), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym__decl_op_precedence_repeat1,
    STATE(49), 1,
      sym_type_tag,
    STATE(73), 1,
      aux_sym__decl_op_precedence_repeat2,
    ACTIONS(134), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
    STATE(34), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [671] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(93), 1,
      aux_sym_component_token1,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_LT,
    ACTIONS(140), 1,
      anon_sym_PERCENT,
    STATE(14), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym__decl_type_repeat1,
    STATE(47), 1,
      sym_type_tag,
    STATE(78), 1,
      aux_sym__decl_type_repeat2,
    ACTIONS(138), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
    STATE(43), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [719] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 1,
      sym_comment,
    ACTIONS(144), 2,
      aux_sym_component_token1,
      anon_sym_PERCENT,
    ACTIONS(142), 16,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_RPAREN,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      sym_number_literal,
      anon_sym_SQUOTE,
  [751] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(93), 1,
      aux_sym_component_token1,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_LT,
    ACTIONS(148), 1,
      anon_sym_PERCENT,
    STATE(16), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym__decl_type_repeat1,
    STATE(47), 1,
      sym_type_tag,
    STATE(71), 1,
      aux_sym__decl_type_repeat2,
    ACTIONS(146), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
    STATE(43), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [799] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(93), 1,
      aux_sym_component_token1,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_PERCENTmerge,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      sym_directive_empty,
    STATE(8), 1,
      aux_sym_grammar_rule_repeat1,
    STATE(17), 1,
      sym_comment,
    STATE(39), 1,
      sym_code_block,
    STATE(41), 1,
      sym_action,
    STATE(42), 1,
      sym_grammar_rule_identifier,
    STATE(44), 1,
      sym_component,
    STATE(45), 3,
      sym_directive_merge,
      sym_string_literal,
      sym_char_literal,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [851] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(93), 1,
      aux_sym_component_token1,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_PERCENTmerge,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(152), 1,
      sym_directive_empty,
    STATE(10), 1,
      aux_sym_grammar_rule_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(39), 1,
      sym_code_block,
    STATE(42), 1,
      sym_grammar_rule_identifier,
    STATE(44), 1,
      sym_component,
    STATE(45), 4,
      sym_action,
      sym_directive_merge,
      sym_string_literal,
      sym_char_literal,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [901] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(158), 1,
      anon_sym_DOT,
    STATE(19), 1,
      sym_comment,
    ACTIONS(156), 2,
      aux_sym_component_token1,
      anon_sym_PERCENT,
    ACTIONS(154), 15,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [935] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 1,
      sym_comment,
    ACTIONS(162), 2,
      aux_sym_component_token1,
      anon_sym_PERCENT,
    ACTIONS(160), 16,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_RPAREN,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      sym_number_literal,
      anon_sym_SQUOTE,
  [967] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      aux_sym_component_token1,
    ACTIONS(166), 1,
      anon_sym_PERCENT,
    STATE(21), 1,
      sym_comment,
    STATE(25), 1,
      aux_sym__decl_op_precedence_repeat1,
    STATE(34), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(164), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1007] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(170), 2,
      aux_sym_component_token1,
      anon_sym_PERCENT,
    ACTIONS(168), 14,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      sym_number_literal,
      anon_sym_SQUOTE,
  [1037] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(93), 1,
      aux_sym_component_token1,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(174), 1,
      anon_sym_PERCENT,
    STATE(23), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym__decl_type_repeat1,
    STATE(43), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(172), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1077] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(178), 1,
      aux_sym_component_token1,
    ACTIONS(181), 1,
      anon_sym_PERCENT,
    ACTIONS(186), 1,
      anon_sym_SQUOTE,
    STATE(24), 2,
      sym_comment,
      aux_sym__decl_type_repeat1,
    STATE(43), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(176), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
    ACTIONS(183), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1115] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(191), 1,
      aux_sym_component_token1,
    ACTIONS(194), 1,
      anon_sym_PERCENT,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    STATE(25), 2,
      sym_comment,
      aux_sym__decl_op_precedence_repeat1,
    STATE(34), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(189), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
    ACTIONS(196), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1153] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym__LPAREN,
    ACTIONS(210), 1,
      sym_number_literal,
    STATE(26), 1,
      sym_comment,
    STATE(104), 1,
      sym_string,
    STATE(105), 1,
      sym_string_literal,
    ACTIONS(204), 2,
      aux_sym_component_token1,
      anon_sym_PERCENT,
    ACTIONS(202), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
    ACTIONS(208), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1192] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 1,
      anon_sym_DOT,
    STATE(27), 1,
      sym_comment,
    ACTIONS(156), 2,
      aux_sym_component_token1,
      anon_sym_PERCENT,
    ACTIONS(154), 12,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
      anon_sym__LPAREN,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      sym_number_literal,
      anon_sym_SQUOTE,
  [1223] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(216), 1,
      aux_sym_component_token1,
    ACTIONS(218), 1,
      anon_sym_PERCENT,
    ACTIONS(220), 1,
      anon_sym_DOT,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym__decl_define_repeat1,
    STATE(111), 1,
      sym_string_literal,
    ACTIONS(214), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1263] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(220), 1,
      anon_sym_DOT,
    ACTIONS(226), 1,
      aux_sym_component_token1,
    ACTIONS(228), 1,
      anon_sym_PERCENT,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      aux_sym__decl_define_repeat1,
    STATE(29), 1,
      sym_comment,
    STATE(139), 1,
      sym_string_literal,
    ACTIONS(224), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1303] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym__LPAREN,
    STATE(30), 1,
      sym_comment,
    STATE(91), 1,
      sym_string,
    STATE(105), 1,
      sym_string_literal,
    ACTIONS(234), 2,
      aux_sym_component_token1,
      anon_sym_PERCENT,
    ACTIONS(232), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
    ACTIONS(208), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1339] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      aux_sym_component_token1,
    ACTIONS(132), 1,
      anon_sym_LT,
    STATE(13), 1,
      aux_sym__decl_op_precedence_repeat1,
    STATE(31), 1,
      sym_comment,
    STATE(48), 1,
      sym_type_tag,
    STATE(34), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1376] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(93), 1,
      aux_sym_component_token1,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(132), 1,
      anon_sym_LT,
    STATE(16), 1,
      aux_sym__decl_type_repeat1,
    STATE(32), 1,
      sym_comment,
    STATE(46), 1,
      sym_type_tag,
    STATE(43), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1413] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(240), 1,
      anon_sym_DOT,
    ACTIONS(238), 2,
      aux_sym_component_token1,
      anon_sym_PERCENT,
    STATE(33), 2,
      sym_comment,
      aux_sym__decl_define_repeat1,
    ACTIONS(236), 9,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LBRACE,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1442] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      sym_number_literal,
    STATE(34), 1,
      sym_comment,
    ACTIONS(245), 2,
      aux_sym_component_token1,
      anon_sym_PERCENT,
    ACTIONS(243), 10,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1471] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(253), 1,
      sym_number_literal,
    STATE(35), 1,
      sym_comment,
    STATE(94), 1,
      sym_string_literal,
    ACTIONS(251), 2,
      aux_sym_component_token1,
      anon_sym_PERCENT,
    ACTIONS(249), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
    ACTIONS(208), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1504] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
      sym_comment,
    STATE(100), 1,
      sym_string_literal,
    ACTIONS(257), 2,
      aux_sym_component_token1,
      anon_sym_PERCENT,
    ACTIONS(255), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
    ACTIONS(208), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1534] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(261), 1,
      aux_sym_component_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(259), 11,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      sym_directive_empty,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1560] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
      sym_comment,
    ACTIONS(238), 2,
      aux_sym_component_token1,
      anon_sym_PERCENT,
    ACTIONS(236), 10,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1586] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(265), 1,
      aux_sym_component_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(263), 11,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      sym_directive_empty,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1612] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 1,
      sym_comment,
    ACTIONS(194), 2,
      aux_sym_component_token1,
      anon_sym_PERCENT,
    ACTIONS(189), 10,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1638] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(269), 1,
      aux_sym_component_token1,
    ACTIONS(271), 1,
      sym_directive_empty,
    STATE(41), 1,
      sym_comment,
    ACTIONS(267), 10,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1666] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(269), 1,
      aux_sym_component_token1,
    ACTIONS(273), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      sym_comment,
    ACTIONS(267), 10,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1694] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(43), 1,
      sym_comment,
    ACTIONS(277), 2,
      aux_sym_component_token1,
      anon_sym_PERCENT,
    ACTIONS(275), 10,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1720] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(281), 1,
      aux_sym_component_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(279), 10,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1745] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(269), 1,
      aux_sym_component_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(267), 10,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1770] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(93), 1,
      aux_sym_component_token1,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      aux_sym__decl_type_repeat1,
    STATE(46), 1,
      sym_comment,
    STATE(43), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1801] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(93), 1,
      aux_sym_component_token1,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    STATE(23), 1,
      aux_sym__decl_type_repeat1,
    STATE(47), 1,
      sym_comment,
    STATE(43), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1832] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      aux_sym_component_token1,
    STATE(12), 1,
      aux_sym__decl_op_precedence_repeat1,
    STATE(48), 1,
      sym_comment,
    STATE(34), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1863] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(101), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      aux_sym_component_token1,
    STATE(21), 1,
      aux_sym__decl_op_precedence_repeat1,
    STATE(49), 1,
      sym_comment,
    STATE(34), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_literal,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1894] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(285), 1,
      aux_sym_component_token1,
    STATE(50), 1,
      sym_comment,
    ACTIONS(283), 10,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1919] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(289), 1,
      aux_sym_component_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(287), 10,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_LBRACE,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1944] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(293), 1,
      aux_sym_component_token1,
    ACTIONS(295), 1,
      anon_sym_PERCENT,
    ACTIONS(297), 1,
      anon_sym_LT,
    STATE(52), 1,
      sym_comment,
    STATE(63), 1,
      sym_type_tag,
    STATE(64), 1,
      aux_sym__decl_nterm_repeat1,
    STATE(84), 1,
      aux_sym__decl_nterm_repeat2,
    STATE(89), 1,
      sym_grammar_rule_identifier,
    ACTIONS(291), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [1980] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(297), 1,
      anon_sym_LT,
    ACTIONS(301), 1,
      aux_sym_component_token1,
    ACTIONS(303), 1,
      anon_sym_PERCENT,
    STATE(26), 1,
      sym_grammar_rule_identifier,
    STATE(53), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym__decl_token_repeat1,
    STATE(74), 1,
      aux_sym__decl_token_repeat3,
    STATE(163), 1,
      sym_type_tag,
    ACTIONS(299), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2016] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(307), 1,
      anon_sym_PERCENT,
    STATE(54), 1,
      sym_comment,
    STATE(113), 1,
      sym_string_literal,
    ACTIONS(305), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [2044] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(293), 1,
      aux_sym_component_token1,
    ACTIONS(297), 1,
      anon_sym_LT,
    ACTIONS(311), 1,
      anon_sym_PERCENT,
    STATE(55), 1,
      sym_comment,
    STATE(63), 1,
      sym_type_tag,
    STATE(64), 1,
      aux_sym__decl_nterm_repeat1,
    STATE(68), 1,
      aux_sym__decl_nterm_repeat2,
    STATE(89), 1,
      sym_grammar_rule_identifier,
    ACTIONS(309), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2080] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(297), 1,
      anon_sym_LT,
    ACTIONS(301), 1,
      aux_sym_component_token1,
    ACTIONS(315), 1,
      anon_sym_PERCENT,
    STATE(26), 1,
      sym_grammar_rule_identifier,
    STATE(56), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym__decl_token_repeat1,
    STATE(82), 1,
      aux_sym__decl_token_repeat3,
    STATE(163), 1,
      sym_type_tag,
    ACTIONS(313), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2116] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(293), 1,
      aux_sym_component_token1,
    ACTIONS(319), 1,
      anon_sym_PERCENT,
    ACTIONS(321), 1,
      anon_sym_LT,
    STATE(57), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym__decl_destructor_repeat1,
    STATE(103), 2,
      sym_type_tag,
      sym_grammar_rule_identifier,
    ACTIONS(317), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2147] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(325), 1,
      aux_sym_component_token1,
    ACTIONS(328), 1,
      anon_sym_PERCENT,
    ACTIONS(330), 1,
      anon_sym_LT,
    STATE(58), 2,
      sym_comment,
      aux_sym__decl_destructor_repeat1,
    STATE(103), 2,
      sym_type_tag,
      sym_grammar_rule_identifier,
    ACTIONS(323), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2176] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(293), 1,
      aux_sym_component_token1,
    ACTIONS(321), 1,
      anon_sym_LT,
    ACTIONS(335), 1,
      anon_sym_PERCENT,
    STATE(58), 1,
      aux_sym__decl_destructor_repeat1,
    STATE(59), 1,
      sym_comment,
    STATE(103), 2,
      sym_type_tag,
      sym_grammar_rule_identifier,
    ACTIONS(333), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2207] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(293), 1,
      aux_sym_component_token1,
    ACTIONS(321), 1,
      anon_sym_LT,
    ACTIONS(339), 1,
      anon_sym_PERCENT,
    STATE(59), 1,
      aux_sym__decl_destructor_repeat1,
    STATE(60), 1,
      sym_comment,
    STATE(103), 2,
      sym_type_tag,
      sym_grammar_rule_identifier,
    ACTIONS(337), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2238] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(293), 1,
      aux_sym_component_token1,
    ACTIONS(321), 1,
      anon_sym_LT,
    ACTIONS(343), 1,
      anon_sym_PERCENT,
    STATE(57), 1,
      aux_sym__decl_destructor_repeat1,
    STATE(61), 1,
      sym_comment,
    STATE(103), 2,
      sym_type_tag,
      sym_grammar_rule_identifier,
    ACTIONS(341), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2269] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(301), 1,
      aux_sym_component_token1,
    ACTIONS(347), 1,
      anon_sym_PERCENT,
    STATE(35), 1,
      sym_grammar_rule_identifier,
    STATE(62), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym__decl_token_repeat2,
    ACTIONS(345), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
  [2297] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(293), 1,
      aux_sym_component_token1,
    ACTIONS(351), 1,
      anon_sym_PERCENT,
    STATE(63), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym__decl_nterm_repeat1,
    STATE(89), 1,
      sym_grammar_rule_identifier,
    ACTIONS(349), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
  [2325] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(355), 1,
      aux_sym_component_token1,
    ACTIONS(358), 1,
      anon_sym_PERCENT,
    STATE(89), 1,
      sym_grammar_rule_identifier,
    STATE(64), 2,
      sym_comment,
      aux_sym__decl_nterm_repeat1,
    ACTIONS(353), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
  [2351] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(234), 1,
      anon_sym_PERCENT,
    ACTIONS(360), 1,
      aux_sym_component_token1,
    STATE(26), 1,
      sym_grammar_rule_identifier,
    STATE(65), 2,
      sym_comment,
      aux_sym__decl_token_repeat1,
    ACTIONS(232), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
  [2377] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(293), 1,
      aux_sym_component_token1,
    ACTIONS(365), 1,
      anon_sym_PERCENT,
    STATE(64), 1,
      aux_sym__decl_nterm_repeat1,
    STATE(66), 1,
      sym_comment,
    STATE(89), 1,
      sym_grammar_rule_identifier,
    ACTIONS(363), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
  [2405] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(257), 1,
      anon_sym_PERCENT,
    ACTIONS(367), 1,
      aux_sym_component_token1,
    STATE(35), 1,
      sym_grammar_rule_identifier,
    STATE(67), 2,
      sym_comment,
      aux_sym__decl_token_repeat2,
    ACTIONS(255), 4,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT,
  [2431] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(295), 1,
      anon_sym_PERCENT,
    ACTIONS(297), 1,
      anon_sym_LT,
    STATE(63), 1,
      sym_type_tag,
    STATE(68), 1,
      sym_comment,
    STATE(83), 1,
      aux_sym__decl_nterm_repeat2,
    ACTIONS(291), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2458] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(347), 1,
      anon_sym_PERCENT,
    ACTIONS(370), 1,
      anon_sym_LT,
    STATE(163), 1,
      sym_type_tag,
    STATE(69), 2,
      sym_comment,
      aux_sym__decl_token_repeat3,
    ACTIONS(345), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2483] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(373), 1,
      aux_sym_component_token1,
    STATE(70), 1,
      sym_comment,
    STATE(216), 1,
      sym_string_literal,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [2506] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(132), 1,
      anon_sym_LT,
    ACTIONS(140), 1,
      anon_sym_PERCENT,
    STATE(47), 1,
      sym_type_tag,
    STATE(71), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym__decl_type_repeat2,
    ACTIONS(138), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2533] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(156), 1,
      anon_sym_PERCENT,
    ACTIONS(375), 1,
      anon_sym_DOT,
    STATE(72), 1,
      sym_comment,
    ACTIONS(154), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_LT,
  [2556] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      anon_sym_PERCENT,
    ACTIONS(132), 1,
      anon_sym_LT,
    STATE(49), 1,
      sym_type_tag,
    STATE(73), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym__decl_op_precedence_repeat2,
    ACTIONS(126), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2583] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(297), 1,
      anon_sym_LT,
    ACTIONS(315), 1,
      anon_sym_PERCENT,
    STATE(69), 1,
      aux_sym__decl_token_repeat3,
    STATE(74), 1,
      sym_comment,
    STATE(163), 1,
      sym_type_tag,
    ACTIONS(313), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2610] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(174), 1,
      anon_sym_PERCENT,
    ACTIONS(377), 1,
      anon_sym_LT,
    STATE(47), 1,
      sym_type_tag,
    STATE(75), 2,
      sym_comment,
      aux_sym__decl_type_repeat2,
    ACTIONS(172), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2635] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(380), 1,
      aux_sym_component_token1,
    STATE(76), 1,
      sym_comment,
    ACTIONS(382), 6,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [2656] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(384), 1,
      aux_sym_component_token1,
    STATE(77), 1,
      sym_comment,
    STATE(204), 1,
      sym_string_literal,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [2679] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(132), 1,
      anon_sym_LT,
    ACTIONS(388), 1,
      anon_sym_PERCENT,
    STATE(47), 1,
      sym_type_tag,
    STATE(75), 1,
      aux_sym__decl_type_repeat2,
    STATE(78), 1,
      sym_comment,
    ACTIONS(386), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2706] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(261), 1,
      anon_sym_PERCENT,
    STATE(79), 1,
      sym_comment,
    ACTIONS(259), 6,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PIPE,
      aux_sym_component_token1,
      anon_sym_LT,
  [2727] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(166), 1,
      anon_sym_PERCENT,
    ACTIONS(390), 1,
      anon_sym_LT,
    STATE(49), 1,
      sym_type_tag,
    STATE(80), 2,
      sym_comment,
      aux_sym__decl_op_precedence_repeat2,
    ACTIONS(164), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2752] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(132), 1,
      anon_sym_LT,
    ACTIONS(395), 1,
      anon_sym_PERCENT,
    STATE(49), 1,
      sym_type_tag,
    STATE(80), 1,
      aux_sym__decl_op_precedence_repeat2,
    STATE(81), 1,
      sym_comment,
    ACTIONS(393), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2779] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(297), 1,
      anon_sym_LT,
    ACTIONS(399), 1,
      anon_sym_PERCENT,
    STATE(69), 1,
      aux_sym__decl_token_repeat3,
    STATE(82), 1,
      sym_comment,
    STATE(163), 1,
      sym_type_tag,
    ACTIONS(397), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2806] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(365), 1,
      anon_sym_PERCENT,
    ACTIONS(401), 1,
      anon_sym_LT,
    STATE(63), 1,
      sym_type_tag,
    STATE(83), 2,
      sym_comment,
      aux_sym__decl_nterm_repeat2,
    ACTIONS(363), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2831] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(297), 1,
      anon_sym_LT,
    ACTIONS(406), 1,
      anon_sym_PERCENT,
    STATE(63), 1,
      sym_type_tag,
    STATE(83), 1,
      aux_sym__decl_nterm_repeat2,
    STATE(84), 1,
      sym_comment,
    ACTIONS(404), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [2858] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(328), 1,
      anon_sym_PERCENT,
    STATE(85), 1,
      sym_comment,
    ACTIONS(323), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_LT,
  [2878] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(86), 1,
      sym_comment,
    STATE(114), 1,
      sym_string_literal,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [2898] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(144), 1,
      anon_sym_PERCENT,
    STATE(87), 1,
      sym_comment,
    ACTIONS(142), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_LT,
  [2918] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(88), 1,
      sym_comment,
    STATE(124), 1,
      sym_string_literal,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [2938] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(410), 1,
      anon_sym_PERCENT,
    STATE(89), 1,
      sym_comment,
    ACTIONS(408), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_LT,
  [2958] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(162), 1,
      anon_sym_PERCENT,
    STATE(90), 1,
      sym_comment,
    ACTIONS(160), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_LT,
  [2978] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(414), 1,
      anon_sym_PERCENT,
    STATE(91), 1,
      sym_comment,
    ACTIONS(412), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_LT,
  [2998] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_SEMI,
    ACTIONS(418), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_code_block,
    STATE(92), 1,
      sym_comment,
    STATE(152), 1,
      aux_sym_grammar_rule_repeat2,
    STATE(155), 1,
      sym_action,
  [3026] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(422), 1,
      anon_sym_PERCENT,
    STATE(93), 1,
      sym_comment,
    ACTIONS(420), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_LT,
  [3046] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(257), 1,
      anon_sym_PERCENT,
    STATE(94), 1,
      sym_comment,
    ACTIONS(255), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_LT,
  [3066] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(95), 1,
      sym_comment,
    STATE(115), 1,
      sym_string_literal,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [3086] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(96), 1,
      sym_comment,
    STATE(116), 1,
      sym_string_literal,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [3106] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(426), 1,
      anon_sym_PERCENT,
    STATE(97), 1,
      sym_comment,
    ACTIONS(424), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_LT,
  [3126] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(380), 1,
      anon_sym_PERCENT,
    STATE(98), 1,
      sym_comment,
    ACTIONS(382), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_LT,
  [3146] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      anon_sym_SEMI,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(418), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_code_block,
    STATE(99), 1,
      sym_comment,
    STATE(160), 1,
      sym_action,
    STATE(166), 1,
      aux_sym_grammar_rule_repeat2,
  [3174] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(430), 1,
      anon_sym_PERCENT,
    STATE(100), 1,
      sym_comment,
    ACTIONS(428), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_LT,
  [3194] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(124), 1,
      anon_sym_PERCENT,
    STATE(101), 1,
      sym_comment,
    ACTIONS(122), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_LT,
  [3214] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(102), 1,
      sym_comment,
    STATE(209), 1,
      sym_string_literal,
    ACTIONS(99), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [3234] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(434), 1,
      anon_sym_PERCENT,
    STATE(103), 1,
      sym_comment,
    ACTIONS(432), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_LT,
  [3254] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(234), 1,
      anon_sym_PERCENT,
    STATE(104), 1,
      sym_comment,
    ACTIONS(232), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_LT,
  [3274] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(438), 1,
      anon_sym_PERCENT,
    STATE(105), 1,
      sym_comment,
    ACTIONS(436), 5,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_LT,
  [3294] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(297), 1,
      anon_sym_LT,
    ACTIONS(301), 1,
      aux_sym_component_token1,
    STATE(26), 1,
      sym_grammar_rule_identifier,
    STATE(53), 1,
      aux_sym__decl_token_repeat1,
    STATE(106), 1,
      sym_comment,
    STATE(162), 1,
      sym_type_tag,
  [3319] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(293), 1,
      aux_sym_component_token1,
    ACTIONS(297), 1,
      anon_sym_LT,
    STATE(55), 1,
      aux_sym__decl_nterm_repeat1,
    STATE(89), 1,
      sym_grammar_rule_identifier,
    STATE(107), 1,
      sym_comment,
    STATE(164), 1,
      sym_type_tag,
  [3344] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(418), 1,
      anon_sym_LBRACE,
    ACTIONS(440), 1,
      anon_sym_DASH,
    STATE(108), 1,
      sym_comment,
    STATE(131), 1,
      sym_code_block,
    STATE(161), 1,
      aux_sym__decl_code_repeat1,
  [3366] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(442), 1,
      aux_sym_component_token1,
    ACTIONS(445), 2,
      anon_sym_STAR,
      anon_sym_GT,
    STATE(109), 2,
      sym_comment,
      aux_sym_type_repeat1,
  [3384] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(449), 1,
      anon_sym_PERCENT,
    STATE(110), 1,
      sym_comment,
    ACTIONS(447), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3402] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(453), 1,
      anon_sym_PERCENT,
    STATE(111), 1,
      sym_comment,
    ACTIONS(451), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3420] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(457), 1,
      anon_sym_PERCENT,
    STATE(112), 1,
      sym_comment,
    ACTIONS(455), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3438] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(461), 1,
      anon_sym_PERCENT,
    STATE(113), 1,
      sym_comment,
    ACTIONS(459), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3456] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(465), 1,
      anon_sym_PERCENT,
    STATE(114), 1,
      sym_comment,
    ACTIONS(463), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3474] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(469), 1,
      anon_sym_PERCENT,
    STATE(115), 1,
      sym_comment,
    ACTIONS(467), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3492] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(473), 1,
      anon_sym_PERCENT,
    STATE(116), 1,
      sym_comment,
    ACTIONS(471), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3510] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(477), 1,
      anon_sym_PERCENT,
    STATE(117), 1,
      sym_comment,
    ACTIONS(475), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3528] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(481), 1,
      anon_sym_PERCENT,
    STATE(118), 1,
      sym_comment,
    ACTIONS(479), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3546] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(483), 1,
      anon_sym_PERCENT,
    STATE(119), 1,
      sym_comment,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
  [3564] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(487), 1,
      anon_sym_PERCENT,
    STATE(120), 1,
      sym_comment,
    ACTIONS(485), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3582] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(489), 1,
      aux_sym_component_token1,
    ACTIONS(491), 1,
      anon_sym_STAR,
    ACTIONS(493), 1,
      anon_sym_GT,
    STATE(121), 1,
      sym_comment,
    STATE(142), 1,
      aux_sym_type_repeat1,
  [3604] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(497), 1,
      anon_sym_PERCENT,
    STATE(122), 1,
      sym_comment,
    ACTIONS(495), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3622] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(501), 1,
      anon_sym_PERCENT,
    STATE(123), 1,
      sym_comment,
    ACTIONS(499), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3640] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(505), 1,
      anon_sym_PERCENT,
    STATE(124), 1,
      sym_comment,
    ACTIONS(503), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3658] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(509), 1,
      anon_sym_PERCENT,
    STATE(125), 1,
      sym_comment,
    ACTIONS(507), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3676] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(513), 1,
      anon_sym_PERCENT,
    STATE(126), 1,
      sym_comment,
    ACTIONS(511), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3694] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(418), 1,
      anon_sym_LBRACE,
    ACTIONS(440), 1,
      anon_sym_DASH,
    STATE(108), 1,
      aux_sym__decl_code_repeat1,
    STATE(127), 1,
      sym_comment,
    STATE(143), 1,
      sym_code_block,
  [3716] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(517), 1,
      anon_sym_PERCENT,
    STATE(128), 1,
      sym_comment,
    ACTIONS(515), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3734] = 7,
    ACTIONS(519), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(521), 1,
      aux_sym_prologue_body_token1,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(525), 1,
      anon_sym_SLASH_STAR,
    STATE(129), 1,
      sym_comment,
    STATE(150), 1,
      aux_sym_prologue_body_repeat1,
    STATE(210), 1,
      sym_prologue_body,
  [3756] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(529), 1,
      anon_sym_PERCENT,
    STATE(130), 1,
      sym_comment,
    ACTIONS(527), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
  [3774] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(533), 1,
      anon_sym_PERCENT,
    STATE(131), 1,
      sym_comment,
    ACTIONS(531), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3792] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(537), 1,
      anon_sym_PERCENT,
    STATE(132), 1,
      sym_comment,
    ACTIONS(535), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3810] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(541), 1,
      anon_sym_PERCENT,
    STATE(133), 1,
      sym_comment,
    ACTIONS(539), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3828] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(545), 1,
      anon_sym_PERCENT,
    STATE(134), 1,
      sym_comment,
    ACTIONS(543), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
  [3846] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(549), 1,
      anon_sym_PERCENT,
    STATE(135), 1,
      sym_comment,
    ACTIONS(547), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3864] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(553), 1,
      anon_sym_PERCENT,
    STATE(136), 1,
      sym_comment,
    ACTIONS(551), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
  [3882] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(557), 1,
      anon_sym_PERCENT,
    STATE(137), 1,
      sym_comment,
    ACTIONS(555), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3900] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(559), 1,
      aux_sym_component_token1,
    ACTIONS(561), 1,
      anon_sym_STAR,
    ACTIONS(563), 1,
      anon_sym_GT,
    STATE(138), 1,
      sym_comment,
    STATE(221), 1,
      sym_type,
  [3922] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(218), 1,
      anon_sym_PERCENT,
    STATE(139), 1,
      sym_comment,
    ACTIONS(214), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3940] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(567), 1,
      anon_sym_PERCENT,
    STATE(140), 1,
      sym_comment,
    ACTIONS(565), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3958] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(571), 1,
      anon_sym_PERCENT,
    STATE(141), 1,
      sym_comment,
    ACTIONS(569), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [3976] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(489), 1,
      aux_sym_component_token1,
    ACTIONS(573), 1,
      anon_sym_STAR,
    ACTIONS(575), 1,
      anon_sym_GT,
    STATE(109), 1,
      aux_sym_type_repeat1,
    STATE(142), 1,
      sym_comment,
  [3998] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(579), 1,
      anon_sym_PERCENT,
    STATE(143), 1,
      sym_comment,
    ACTIONS(577), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4016] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(583), 1,
      anon_sym_PERCENT,
    STATE(144), 1,
      sym_comment,
    ACTIONS(581), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4034] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(587), 1,
      anon_sym_PERCENT,
    STATE(145), 1,
      sym_comment,
    ACTIONS(585), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4052] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(589), 1,
      anon_sym_SEMI,
    ACTIONS(593), 1,
      anon_sym_PERCENT,
    STATE(146), 1,
      sym_comment,
    ACTIONS(591), 2,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4072] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(597), 1,
      anon_sym_PERCENT,
    STATE(147), 1,
      sym_comment,
    ACTIONS(595), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
  [4090] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(601), 1,
      anon_sym_PERCENT,
    STATE(148), 1,
      sym_comment,
    ACTIONS(599), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
  [4108] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(605), 1,
      anon_sym_PERCENT,
    STATE(149), 1,
      sym_comment,
    ACTIONS(603), 3,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4126] = 6,
    ACTIONS(521), 1,
      aux_sym_prologue_body_token1,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(525), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(607), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(150), 1,
      sym_comment,
    STATE(172), 1,
      aux_sym_prologue_body_repeat1,
  [4145] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(611), 1,
      anon_sym_PERCENT,
    STATE(151), 1,
      sym_comment,
    ACTIONS(609), 2,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4162] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(613), 1,
      anon_sym_SEMI,
    STATE(152), 1,
      sym_comment,
    STATE(153), 1,
      aux_sym_grammar_rule_repeat2,
  [4181] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(120), 1,
      anon_sym_SEMI,
    ACTIONS(615), 1,
      anon_sym_PIPE,
    STATE(153), 2,
      sym_comment,
      aux_sym_grammar_rule_repeat2,
  [4198] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(154), 1,
      sym_comment,
    ACTIONS(618), 3,
      aux_sym_component_token1,
      anon_sym_STAR,
      anon_sym_GT,
  [4213] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(613), 1,
      anon_sym_SEMI,
    STATE(155), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_grammar_rule_repeat2,
  [4232] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(620), 1,
      anon_sym_SEMI,
    STATE(153), 1,
      aux_sym_grammar_rule_repeat2,
    STATE(156), 1,
      sym_comment,
  [4251] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(622), 1,
      anon_sym_PERCENT,
    STATE(157), 1,
      sym_comment,
    ACTIONS(30), 2,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4268] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(593), 1,
      anon_sym_PERCENT,
    STATE(158), 1,
      sym_comment,
    ACTIONS(591), 2,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4285] = 5,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(525), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(624), 1,
      anon_sym_DQUOTE,
    ACTIONS(626), 1,
      aux_sym_string_literal_token1,
    STATE(159), 2,
      sym_comment,
      aux_sym_string_literal_repeat1,
  [4302] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_SEMI,
    STATE(152), 1,
      aux_sym_grammar_rule_repeat2,
    STATE(160), 1,
      sym_comment,
  [4321] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(629), 1,
      anon_sym_LBRACE,
    ACTIONS(631), 1,
      anon_sym_DASH,
    STATE(161), 2,
      sym_comment,
      aux_sym__decl_code_repeat1,
  [4338] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(301), 1,
      aux_sym_component_token1,
    STATE(26), 1,
      sym_grammar_rule_identifier,
    STATE(56), 1,
      aux_sym__decl_token_repeat1,
    STATE(162), 1,
      sym_comment,
  [4357] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(301), 1,
      aux_sym_component_token1,
    STATE(35), 1,
      sym_grammar_rule_identifier,
    STATE(62), 1,
      aux_sym__decl_token_repeat2,
    STATE(163), 1,
      sym_comment,
  [4376] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(293), 1,
      aux_sym_component_token1,
    STATE(52), 1,
      aux_sym__decl_nterm_repeat1,
    STATE(89), 1,
      sym_grammar_rule_identifier,
    STATE(164), 1,
      sym_comment,
  [4395] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(418), 1,
      anon_sym_LBRACE,
    ACTIONS(634), 1,
      aux_sym_component_token1,
    STATE(110), 1,
      sym_code_block,
    STATE(165), 1,
      sym_comment,
  [4414] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(91), 1,
      anon_sym_PIPE,
    ACTIONS(416), 1,
      anon_sym_SEMI,
    STATE(153), 1,
      aux_sym_grammar_rule_repeat2,
    STATE(166), 1,
      sym_comment,
  [4433] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(418), 1,
      anon_sym_LBRACE,
    ACTIONS(636), 1,
      aux_sym_component_token1,
    STATE(112), 1,
      sym_code_block,
    STATE(167), 1,
      sym_comment,
  [4452] = 6,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(525), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(638), 1,
      anon_sym_DQUOTE,
    ACTIONS(640), 1,
      aux_sym_string_literal_token1,
    STATE(159), 1,
      aux_sym_string_literal_repeat1,
    STATE(168), 1,
      sym_comment,
  [4471] = 6,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(525), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(640), 1,
      aux_sym_string_literal_token1,
    ACTIONS(642), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      aux_sym_string_literal_repeat1,
    STATE(169), 1,
      sym_comment,
  [4490] = 6,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(525), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(640), 1,
      aux_sym_string_literal_token1,
    ACTIONS(644), 1,
      anon_sym_DQUOTE,
    STATE(170), 1,
      sym_comment,
    STATE(173), 1,
      aux_sym_string_literal_repeat1,
  [4509] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(648), 1,
      anon_sym_PERCENT,
    STATE(171), 1,
      sym_comment,
    ACTIONS(646), 2,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
  [4526] = 5,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(525), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(650), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(652), 1,
      aux_sym_prologue_body_token1,
    STATE(172), 2,
      sym_comment,
      aux_sym_prologue_body_repeat1,
  [4543] = 6,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(525), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(640), 1,
      aux_sym_string_literal_token1,
    ACTIONS(655), 1,
      anon_sym_DQUOTE,
    STATE(159), 1,
      aux_sym_string_literal_repeat1,
    STATE(173), 1,
      sym_comment,
  [4562] = 4,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(525), 1,
      anon_sym_SLASH_STAR,
    STATE(174), 1,
      sym_comment,
    ACTIONS(657), 2,
      anon_sym_PERCENT_RBRACE,
      aux_sym_prologue_body_token1,
  [4576] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(559), 1,
      aux_sym_component_token1,
    STATE(175), 1,
      sym_comment,
    STATE(206), 1,
      sym_type,
  [4592] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(176), 1,
      sym_comment,
    ACTIONS(659), 2,
      anon_sym_opt,
      anon_sym_1,
  [4606] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(559), 1,
      aux_sym_component_token1,
    STATE(177), 1,
      sym_comment,
    STATE(221), 1,
      sym_type,
  [4622] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(559), 1,
      aux_sym_component_token1,
    STATE(178), 1,
      sym_comment,
    STATE(218), 1,
      sym_type,
  [4638] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(179), 1,
      sym_comment,
    ACTIONS(661), 2,
      anon_sym_opt,
      anon_sym_1,
  [4652] = 5,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(525), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(663), 1,
      anon_sym_DQUOTE,
    ACTIONS(665), 1,
      aux_sym_string_literal_token1,
    STATE(180), 1,
      sym_comment,
  [4668] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      aux_sym_component_token1,
    STATE(149), 1,
      sym_grammar_rule_identifier,
    STATE(181), 1,
      sym_comment,
  [4684] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(418), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym_code_block,
    STATE(182), 1,
      sym_comment,
  [4700] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(418), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym_code_block,
    STATE(183), 1,
      sym_comment,
  [4716] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(418), 1,
      anon_sym_LBRACE,
    STATE(145), 1,
      sym_code_block,
    STATE(184), 1,
      sym_comment,
  [4732] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(185), 1,
      sym_comment,
    ACTIONS(629), 2,
      anon_sym_LBRACE,
      anon_sym_DASH,
  [4746] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(418), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_code_block,
    STATE(186), 1,
      sym_comment,
  [4762] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(418), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_code_block,
    STATE(187), 1,
      sym_comment,
  [4778] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(418), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      sym_code_block,
    STATE(188), 1,
      sym_comment,
  [4794] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(189), 1,
      sym_comment,
    ACTIONS(120), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [4808] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(667), 1,
      ts_builtin_sym_end,
    ACTIONS(669), 1,
      anon_sym_PERCENT_PERCENT,
    STATE(190), 1,
      sym_comment,
  [4824] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(671), 1,
      sym_undelimited_code_block,
    STATE(191), 1,
      sym_comment,
  [4837] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(673), 1,
      ts_builtin_sym_end,
    STATE(192), 1,
      sym_comment,
  [4850] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(675), 1,
      anon_sym_SEMI,
    STATE(193), 1,
      sym_comment,
  [4863] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(677), 1,
      aux_sym_component_token1,
    STATE(194), 1,
      sym_comment,
  [4876] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(679), 1,
      anon_sym_COLON,
    STATE(195), 1,
      sym_comment,
  [4889] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(681), 1,
      anon_sym_RBRACK,
    STATE(196), 1,
      sym_comment,
  [4902] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(683), 1,
      anon_sym_GT,
    STATE(197), 1,
      sym_comment,
  [4915] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(685), 1,
      sym_undelimited_code_block,
    STATE(198), 1,
      sym_comment,
  [4928] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(687), 1,
      ts_builtin_sym_end,
    STATE(199), 1,
      sym_comment,
  [4941] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(689), 1,
      ts_builtin_sym_end,
    STATE(200), 1,
      sym_comment,
  [4954] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(691), 1,
      aux_sym_component_token1,
    STATE(201), 1,
      sym_comment,
  [4967] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(693), 1,
      anon_sym_GT,
    STATE(202), 1,
      sym_comment,
  [4980] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(695), 1,
      aux_sym_component_token1,
    STATE(203), 1,
      sym_comment,
  [4993] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(697), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      sym_comment,
  [5006] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(699), 1,
      anon_sym_RBRACE,
    STATE(205), 1,
      sym_comment,
  [5019] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(701), 1,
      anon_sym_GT,
    STATE(206), 1,
      sym_comment,
  [5032] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(703), 1,
      sym_undelimited_code_block,
    STATE(207), 1,
      sym_comment,
  [5045] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(575), 1,
      anon_sym_GT,
    STATE(208), 1,
      sym_comment,
  [5058] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      sym_comment,
  [5071] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(707), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(210), 1,
      sym_comment,
  [5084] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(709), 1,
      aux_sym__decl_expect_token2,
    STATE(211), 1,
      sym_comment,
  [5097] = 4,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(525), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(711), 1,
      aux_sym_char_literal_token1,
    STATE(212), 1,
      sym_comment,
  [5110] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(713), 1,
      aux_sym_component_token1,
    STATE(213), 1,
      sym_comment,
  [5123] = 4,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(525), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(715), 1,
      aux_sym_comment_token1,
    STATE(214), 1,
      sym_comment,
  [5136] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(717), 1,
      anon_sym_SQUOTE,
    STATE(215), 1,
      sym_comment,
  [5149] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(719), 1,
      anon_sym_RBRACE,
    STATE(216), 1,
      sym_comment,
  [5162] = 4,
    ACTIONS(523), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(525), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(721), 1,
      aux_sym_comment_token2,
    STATE(217), 1,
      sym_comment,
  [5175] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(723), 1,
      anon_sym_GT,
    STATE(218), 1,
      sym_comment,
  [5188] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(725), 1,
      anon_sym_SLASH,
    STATE(219), 1,
      sym_comment,
  [5201] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(727), 1,
      anon_sym_LT,
    STATE(220), 1,
      sym_comment,
  [5214] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(729), 1,
      anon_sym_GT,
    STATE(221), 1,
      sym_comment,
  [5227] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(731), 1,
      ts_builtin_sym_end,
    STATE(222), 1,
      sym_comment,
  [5240] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
    STATE(223), 1,
      sym_comment,
  [5253] = 1,
    ACTIONS(735), 1,
      ts_builtin_sym_end,
  [5257] = 1,
    ACTIONS(737), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 59,
  [SMALL_STATE(4)] = 120,
  [SMALL_STATE(5)] = 180,
  [SMALL_STATE(6)] = 240,
  [SMALL_STATE(7)] = 295,
  [SMALL_STATE(8)] = 386,
  [SMALL_STATE(9)] = 442,
  [SMALL_STATE(10)] = 491,
  [SMALL_STATE(11)] = 542,
  [SMALL_STATE(12)] = 575,
  [SMALL_STATE(13)] = 623,
  [SMALL_STATE(14)] = 671,
  [SMALL_STATE(15)] = 719,
  [SMALL_STATE(16)] = 751,
  [SMALL_STATE(17)] = 799,
  [SMALL_STATE(18)] = 851,
  [SMALL_STATE(19)] = 901,
  [SMALL_STATE(20)] = 935,
  [SMALL_STATE(21)] = 967,
  [SMALL_STATE(22)] = 1007,
  [SMALL_STATE(23)] = 1037,
  [SMALL_STATE(24)] = 1077,
  [SMALL_STATE(25)] = 1115,
  [SMALL_STATE(26)] = 1153,
  [SMALL_STATE(27)] = 1192,
  [SMALL_STATE(28)] = 1223,
  [SMALL_STATE(29)] = 1263,
  [SMALL_STATE(30)] = 1303,
  [SMALL_STATE(31)] = 1339,
  [SMALL_STATE(32)] = 1376,
  [SMALL_STATE(33)] = 1413,
  [SMALL_STATE(34)] = 1442,
  [SMALL_STATE(35)] = 1471,
  [SMALL_STATE(36)] = 1504,
  [SMALL_STATE(37)] = 1534,
  [SMALL_STATE(38)] = 1560,
  [SMALL_STATE(39)] = 1586,
  [SMALL_STATE(40)] = 1612,
  [SMALL_STATE(41)] = 1638,
  [SMALL_STATE(42)] = 1666,
  [SMALL_STATE(43)] = 1694,
  [SMALL_STATE(44)] = 1720,
  [SMALL_STATE(45)] = 1745,
  [SMALL_STATE(46)] = 1770,
  [SMALL_STATE(47)] = 1801,
  [SMALL_STATE(48)] = 1832,
  [SMALL_STATE(49)] = 1863,
  [SMALL_STATE(50)] = 1894,
  [SMALL_STATE(51)] = 1919,
  [SMALL_STATE(52)] = 1944,
  [SMALL_STATE(53)] = 1980,
  [SMALL_STATE(54)] = 2016,
  [SMALL_STATE(55)] = 2044,
  [SMALL_STATE(56)] = 2080,
  [SMALL_STATE(57)] = 2116,
  [SMALL_STATE(58)] = 2147,
  [SMALL_STATE(59)] = 2176,
  [SMALL_STATE(60)] = 2207,
  [SMALL_STATE(61)] = 2238,
  [SMALL_STATE(62)] = 2269,
  [SMALL_STATE(63)] = 2297,
  [SMALL_STATE(64)] = 2325,
  [SMALL_STATE(65)] = 2351,
  [SMALL_STATE(66)] = 2377,
  [SMALL_STATE(67)] = 2405,
  [SMALL_STATE(68)] = 2431,
  [SMALL_STATE(69)] = 2458,
  [SMALL_STATE(70)] = 2483,
  [SMALL_STATE(71)] = 2506,
  [SMALL_STATE(72)] = 2533,
  [SMALL_STATE(73)] = 2556,
  [SMALL_STATE(74)] = 2583,
  [SMALL_STATE(75)] = 2610,
  [SMALL_STATE(76)] = 2635,
  [SMALL_STATE(77)] = 2656,
  [SMALL_STATE(78)] = 2679,
  [SMALL_STATE(79)] = 2706,
  [SMALL_STATE(80)] = 2727,
  [SMALL_STATE(81)] = 2752,
  [SMALL_STATE(82)] = 2779,
  [SMALL_STATE(83)] = 2806,
  [SMALL_STATE(84)] = 2831,
  [SMALL_STATE(85)] = 2858,
  [SMALL_STATE(86)] = 2878,
  [SMALL_STATE(87)] = 2898,
  [SMALL_STATE(88)] = 2918,
  [SMALL_STATE(89)] = 2938,
  [SMALL_STATE(90)] = 2958,
  [SMALL_STATE(91)] = 2978,
  [SMALL_STATE(92)] = 2998,
  [SMALL_STATE(93)] = 3026,
  [SMALL_STATE(94)] = 3046,
  [SMALL_STATE(95)] = 3066,
  [SMALL_STATE(96)] = 3086,
  [SMALL_STATE(97)] = 3106,
  [SMALL_STATE(98)] = 3126,
  [SMALL_STATE(99)] = 3146,
  [SMALL_STATE(100)] = 3174,
  [SMALL_STATE(101)] = 3194,
  [SMALL_STATE(102)] = 3214,
  [SMALL_STATE(103)] = 3234,
  [SMALL_STATE(104)] = 3254,
  [SMALL_STATE(105)] = 3274,
  [SMALL_STATE(106)] = 3294,
  [SMALL_STATE(107)] = 3319,
  [SMALL_STATE(108)] = 3344,
  [SMALL_STATE(109)] = 3366,
  [SMALL_STATE(110)] = 3384,
  [SMALL_STATE(111)] = 3402,
  [SMALL_STATE(112)] = 3420,
  [SMALL_STATE(113)] = 3438,
  [SMALL_STATE(114)] = 3456,
  [SMALL_STATE(115)] = 3474,
  [SMALL_STATE(116)] = 3492,
  [SMALL_STATE(117)] = 3510,
  [SMALL_STATE(118)] = 3528,
  [SMALL_STATE(119)] = 3546,
  [SMALL_STATE(120)] = 3564,
  [SMALL_STATE(121)] = 3582,
  [SMALL_STATE(122)] = 3604,
  [SMALL_STATE(123)] = 3622,
  [SMALL_STATE(124)] = 3640,
  [SMALL_STATE(125)] = 3658,
  [SMALL_STATE(126)] = 3676,
  [SMALL_STATE(127)] = 3694,
  [SMALL_STATE(128)] = 3716,
  [SMALL_STATE(129)] = 3734,
  [SMALL_STATE(130)] = 3756,
  [SMALL_STATE(131)] = 3774,
  [SMALL_STATE(132)] = 3792,
  [SMALL_STATE(133)] = 3810,
  [SMALL_STATE(134)] = 3828,
  [SMALL_STATE(135)] = 3846,
  [SMALL_STATE(136)] = 3864,
  [SMALL_STATE(137)] = 3882,
  [SMALL_STATE(138)] = 3900,
  [SMALL_STATE(139)] = 3922,
  [SMALL_STATE(140)] = 3940,
  [SMALL_STATE(141)] = 3958,
  [SMALL_STATE(142)] = 3976,
  [SMALL_STATE(143)] = 3998,
  [SMALL_STATE(144)] = 4016,
  [SMALL_STATE(145)] = 4034,
  [SMALL_STATE(146)] = 4052,
  [SMALL_STATE(147)] = 4072,
  [SMALL_STATE(148)] = 4090,
  [SMALL_STATE(149)] = 4108,
  [SMALL_STATE(150)] = 4126,
  [SMALL_STATE(151)] = 4145,
  [SMALL_STATE(152)] = 4162,
  [SMALL_STATE(153)] = 4181,
  [SMALL_STATE(154)] = 4198,
  [SMALL_STATE(155)] = 4213,
  [SMALL_STATE(156)] = 4232,
  [SMALL_STATE(157)] = 4251,
  [SMALL_STATE(158)] = 4268,
  [SMALL_STATE(159)] = 4285,
  [SMALL_STATE(160)] = 4302,
  [SMALL_STATE(161)] = 4321,
  [SMALL_STATE(162)] = 4338,
  [SMALL_STATE(163)] = 4357,
  [SMALL_STATE(164)] = 4376,
  [SMALL_STATE(165)] = 4395,
  [SMALL_STATE(166)] = 4414,
  [SMALL_STATE(167)] = 4433,
  [SMALL_STATE(168)] = 4452,
  [SMALL_STATE(169)] = 4471,
  [SMALL_STATE(170)] = 4490,
  [SMALL_STATE(171)] = 4509,
  [SMALL_STATE(172)] = 4526,
  [SMALL_STATE(173)] = 4543,
  [SMALL_STATE(174)] = 4562,
  [SMALL_STATE(175)] = 4576,
  [SMALL_STATE(176)] = 4592,
  [SMALL_STATE(177)] = 4606,
  [SMALL_STATE(178)] = 4622,
  [SMALL_STATE(179)] = 4638,
  [SMALL_STATE(180)] = 4652,
  [SMALL_STATE(181)] = 4668,
  [SMALL_STATE(182)] = 4684,
  [SMALL_STATE(183)] = 4700,
  [SMALL_STATE(184)] = 4716,
  [SMALL_STATE(185)] = 4732,
  [SMALL_STATE(186)] = 4746,
  [SMALL_STATE(187)] = 4762,
  [SMALL_STATE(188)] = 4778,
  [SMALL_STATE(189)] = 4794,
  [SMALL_STATE(190)] = 4808,
  [SMALL_STATE(191)] = 4824,
  [SMALL_STATE(192)] = 4837,
  [SMALL_STATE(193)] = 4850,
  [SMALL_STATE(194)] = 4863,
  [SMALL_STATE(195)] = 4876,
  [SMALL_STATE(196)] = 4889,
  [SMALL_STATE(197)] = 4902,
  [SMALL_STATE(198)] = 4915,
  [SMALL_STATE(199)] = 4928,
  [SMALL_STATE(200)] = 4941,
  [SMALL_STATE(201)] = 4954,
  [SMALL_STATE(202)] = 4967,
  [SMALL_STATE(203)] = 4980,
  [SMALL_STATE(204)] = 4993,
  [SMALL_STATE(205)] = 5006,
  [SMALL_STATE(206)] = 5019,
  [SMALL_STATE(207)] = 5032,
  [SMALL_STATE(208)] = 5045,
  [SMALL_STATE(209)] = 5058,
  [SMALL_STATE(210)] = 5071,
  [SMALL_STATE(211)] = 5084,
  [SMALL_STATE(212)] = 5097,
  [SMALL_STATE(213)] = 5110,
  [SMALL_STATE(214)] = 5123,
  [SMALL_STATE(215)] = 5136,
  [SMALL_STATE(216)] = 5149,
  [SMALL_STATE(217)] = 5162,
  [SMALL_STATE(218)] = 5175,
  [SMALL_STATE(219)] = 5188,
  [SMALL_STATE(220)] = 5201,
  [SMALL_STATE(221)] = 5214,
  [SMALL_STATE(222)] = 5227,
  [SMALL_STATE(223)] = 5240,
  [SMALL_STATE(224)] = 5253,
  [SMALL_STATE(225)] = 5257,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(19),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rules_body, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(129),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2), SHIFT_REPEAT(19),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2), SHIFT_REPEAT(198),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2), SHIFT_REPEAT(220),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2), SHIFT_REPEAT(169),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2), SHIFT_REPEAT(212),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat2, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule_identifier, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule_identifier, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_op_precedence, 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_op_precedence, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_op_precedence, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_op_precedence, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_type, 4),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_type, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_type, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_type, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule_identifier, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule_identifier, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_op_precedence_repeat2, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_op_precedence_repeat2, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_literal, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_literal, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_type_repeat2, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_type_repeat2, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_type_repeat1, 2),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__decl_type_repeat1, 2), SHIFT_REPEAT(19),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_type_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_type_repeat1, 2), SHIFT_REPEAT(169),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_type_repeat1, 2), SHIFT_REPEAT(212),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_op_precedence_repeat1, 2),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__decl_op_precedence_repeat1, 2), SHIFT_REPEAT(27),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_op_precedence_repeat1, 2),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_op_precedence_repeat1, 2), SHIFT_REPEAT(169),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_op_precedence_repeat1, 2), SHIFT_REPEAT(212),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_token_repeat1, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_token_repeat1, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_define, 4),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_define, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_define, 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_define, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_token_repeat1, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_token_repeat1, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_define_repeat1, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_define_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_define_repeat1, 2), SHIFT_REPEAT(203),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_op_precedence_repeat1, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_op_precedence_repeat1, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_token_repeat2, 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_token_repeat2, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_token_repeat2, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_token_repeat2, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_type_repeat1, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_type_repeat1, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_merge, 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_merge, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_nterm, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_nterm, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_token, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_token, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_header, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_header, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_nterm, 3),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_nterm, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_token, 4),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_token, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_printer, 4),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_printer, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_destructor_repeat1, 2),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_destructor_repeat1, 2), SHIFT_REPEAT(72),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_destructor_repeat1, 2),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_destructor_repeat1, 2), SHIFT_REPEAT(138),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_destructor, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_destructor, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_destructor, 3),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_destructor, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_printer, 3),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_printer, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_token_repeat3, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_token_repeat3, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_nterm_repeat2, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_nterm_repeat2, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_nterm_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_nterm_repeat1, 2), SHIFT_REPEAT(72),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_nterm_repeat1, 2),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_token_repeat1, 2), SHIFT_REPEAT(27),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_nterm_repeat2, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_nterm_repeat2, 2),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_token_repeat2, 2), SHIFT_REPEAT(27),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_token_repeat3, 2), SHIFT_REPEAT(177),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_type_repeat2, 2), SHIFT_REPEAT(178),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_tag, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_tag, 3),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_type, 5),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_type, 5),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_op_precedence_repeat2, 2), SHIFT_REPEAT(178),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_op_precedence, 5),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_op_precedence, 5),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_token, 5),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_token, 5),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_nterm_repeat2, 2), SHIFT_REPEAT(177),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_nterm, 5),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_nterm, 5),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_nterm_repeat1, 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_nterm_repeat1, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_token_repeat1, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_token_repeat1, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_destructor_repeat1, 3),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_destructor_repeat1, 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_token_repeat2, 3),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_token_repeat2, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_destructor_repeat1, 1),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__decl_destructor_repeat1, 1),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(154),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_code, 3),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_code, 3),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_define, 5),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_define, 5),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_union, 3),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_union, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_header, 3),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_header, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_name_prefix, 3),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_name_prefix, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_output, 3),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_output, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_skeleton, 3),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_skeleton, 3),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_inial_action, 3),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_inial_action, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_parse_param, 3),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_parse_param, 3),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_no_lines, 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_no_lines, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_pure_parser, 2),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_pure_parser, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_token_table, 2),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_token_table, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_require, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_require, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_verbose, 2),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_verbose, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_yacc, 2),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_yacc, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 7),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 7),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_code, 5),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_code, 5),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_define, 7),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_define, 7),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_initial_declaration, 3),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_initial_declaration, 3),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_glr_parser, 2),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_glr_parser, 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_define, 6),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_define, 6),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_expect, 3),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_expect, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_locations, 2),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_locations, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_code, 4),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_code, 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_debug, 2),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_debug, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_union, 4),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_union, 4),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__decl_start, 3),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__decl_start, 3),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prologue_body, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prologue, 3),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prologue, 3),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat2, 2), SHIFT_REPEAT(18),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 1),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 2),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [626] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(180),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__decl_code_repeat1, 2),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__decl_code_repeat1, 2), SHIFT_REPEAT(201),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prologue, 2),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prologue, 2),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prologue_body_repeat1, 2),
  [652] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prologue_body_repeat1, 2), SHIFT_REPEAT(174),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prologue_body_repeat1, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rules_section, 2),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [673] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 2),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rules_section, 4),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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
