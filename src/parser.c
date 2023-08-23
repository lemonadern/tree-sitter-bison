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
#define STATE_COUNT 216
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 0
#define TOKEN_COUNT 72
#define EXTERNAL_TOKEN_COUNT 1
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
  anon_sym_PERCENTtype = 11,
  anon_sym_PERCENTrequire = 12,
  anon_sym_PERCENTtoken = 13,
  anon_sym_PERCENTnterm = 14,
  anon_sym_PERCENT = 15,
  anon_sym_left = 16,
  anon_sym_right = 17,
  anon_sym_nonassoc = 18,
  anon_sym_precedence = 19,
  anon_sym_PERCENTinitial_DASHdeclaration = 20,
  sym_decl_glr_parser = 21,
  anon_sym_PERCENTdestructor = 22,
  anon_sym_LT = 23,
  anon_sym_STAR = 24,
  anon_sym_GT = 25,
  anon_sym_PERCENTprinter = 26,
  anon_sym_expect = 27,
  anon_sym_expect_DASHrr = 28,
  aux_sym_decl_expect_token1 = 29,
  anon_sym_PERCENTstart = 30,
  anon_sym_PERCENTdefine = 31,
  anon_sym_DOT = 32,
  anon_sym_LBRACE = 33,
  anon_sym_RBRACE = 34,
  anon_sym_PERCENTcode = 35,
  anon_sym_DASH = 36,
  anon_sym_PERCENTunion = 37,
  anon_sym_PERCENTdebug = 38,
  anon_sym_PERCENTheader = 39,
  sym_decl_locations = 40,
  anon_sym_PERCENTname_DASHprefix = 41,
  sym_decl_no_lines = 42,
  anon_sym_PERCENToutput = 43,
  sym_decl_pure_parser = 44,
  anon_sym_PERCENTskeleton = 45,
  sym_decl_token_table = 46,
  sym_decl_verbose = 47,
  sym_decl_yacc = 48,
  anon_sym_PERCENTinitial_DASHaction = 49,
  anon_sym_PERCENTparse_DASHparam = 50,
  anon_sym_PERCENTmerge = 51,
  sym_directive_empty = 52,
  anon_sym__LPAREN = 53,
  anon_sym_RPAREN = 54,
  anon_sym_L_DQUOTE = 55,
  anon_sym_u_DQUOTE = 56,
  anon_sym_U_DQUOTE = 57,
  anon_sym_u8_DQUOTE = 58,
  anon_sym_DQUOTE = 59,
  aux_sym_string_literal_token1 = 60,
  sym_number_literal = 61,
  anon_sym_opt = 62,
  anon_sym_1 = 63,
  anon_sym_SQUOTE = 64,
  aux_sym_char_quoted_token1 = 65,
  anon_sym_SLASH_SLASH = 66,
  aux_sym_comment_token1 = 67,
  anon_sym_SLASH_STAR = 68,
  aux_sym_comment_token2 = 69,
  anon_sym_SLASH = 70,
  sym_undelimited_code_block = 71,
  sym_sections = 72,
  sym_prologue = 73,
  sym_prologue_body = 74,
  sym_grammar_rules_section = 75,
  sym_grammar_rules_body = 76,
  sym_grammar_rule = 77,
  sym_component = 78,
  sym_action = 79,
  sym_declaration = 80,
  sym_decl_type = 81,
  sym_decl_require = 82,
  sym_decl_token = 83,
  sym_decl_nterm = 84,
  sym_decl_op_precedence = 85,
  sym_decl_initial_declaration = 86,
  sym_decl_destructor = 87,
  sym_decl_printer = 88,
  sym_decl_expect = 89,
  sym_decl_start = 90,
  sym_decl_define = 91,
  sym_decl_code = 92,
  sym_decl_union = 93,
  sym_decl_debug = 94,
  sym_decl_header = 95,
  sym_decl_name_prefix = 96,
  sym_decl_output = 97,
  sym_decl_skeleton = 98,
  sym_decl_inial_action = 99,
  sym_decl_parse_param = 100,
  sym_directive_merge = 101,
  sym_string = 102,
  sym_string_literal = 103,
  sym_type_tag = 104,
  sym_type = 105,
  sym_grammar_rule_identifier = 106,
  sym_code_block = 107,
  sym_char_quoted = 108,
  sym_comment = 109,
  aux_sym_sections_repeat1 = 110,
  aux_sym_prologue_body_repeat1 = 111,
  aux_sym_grammar_rules_body_repeat1 = 112,
  aux_sym_grammar_rule_repeat1 = 113,
  aux_sym_grammar_rule_repeat2 = 114,
  aux_sym_decl_type_repeat1 = 115,
  aux_sym_decl_type_repeat2 = 116,
  aux_sym_decl_token_repeat1 = 117,
  aux_sym_decl_token_repeat2 = 118,
  aux_sym_decl_token_repeat3 = 119,
  aux_sym_decl_nterm_repeat1 = 120,
  aux_sym_decl_nterm_repeat2 = 121,
  aux_sym_decl_op_precedence_repeat1 = 122,
  aux_sym_decl_op_precedence_repeat2 = 123,
  aux_sym_decl_destructor_repeat1 = 124,
  aux_sym_decl_define_repeat1 = 125,
  aux_sym_decl_code_repeat1 = 126,
  aux_sym_string_literal_repeat1 = 127,
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
  [anon_sym_DASH] = "-",
  [anon_sym_PERCENTunion] = "%union",
  [anon_sym_PERCENTdebug] = "%debug",
  [anon_sym_PERCENTheader] = "%header",
  [sym_decl_locations] = "decl_locations",
  [anon_sym_PERCENTname_DASHprefix] = "%name-prefix",
  [sym_decl_no_lines] = "decl_no_lines",
  [anon_sym_PERCENToutput] = "%output",
  [sym_decl_pure_parser] = "decl_pure_parser",
  [anon_sym_PERCENTskeleton] = "%skeleton",
  [sym_decl_token_table] = "decl_token_table",
  [sym_decl_verbose] = "decl_verbose",
  [sym_decl_yacc] = "decl_yacc",
  [anon_sym_PERCENTinitial_DASHaction] = "%initial-action",
  [anon_sym_PERCENTparse_DASHparam] = "%parse-param",
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
  [anon_sym_opt] = "opt",
  [anon_sym_1] = "1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_quoted_token1] = "char_quoted_token1",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
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
  [sym_decl_header] = "decl_header",
  [sym_decl_name_prefix] = "decl_name_prefix",
  [sym_decl_output] = "decl_output",
  [sym_decl_skeleton] = "decl_skeleton",
  [sym_decl_inial_action] = "decl_inial_action",
  [sym_decl_parse_param] = "decl_parse_param",
  [sym_directive_merge] = "directive_merge",
  [sym_string] = "string",
  [sym_string_literal] = "string_literal",
  [sym_type_tag] = "type_tag",
  [sym_type] = "type",
  [sym_grammar_rule_identifier] = "grammar_rule_identifier",
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
  [aux_sym_decl_code_repeat1] = "decl_code_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
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
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PERCENTunion] = anon_sym_PERCENTunion,
  [anon_sym_PERCENTdebug] = anon_sym_PERCENTdebug,
  [anon_sym_PERCENTheader] = anon_sym_PERCENTheader,
  [sym_decl_locations] = sym_decl_locations,
  [anon_sym_PERCENTname_DASHprefix] = anon_sym_PERCENTname_DASHprefix,
  [sym_decl_no_lines] = sym_decl_no_lines,
  [anon_sym_PERCENToutput] = anon_sym_PERCENToutput,
  [sym_decl_pure_parser] = sym_decl_pure_parser,
  [anon_sym_PERCENTskeleton] = anon_sym_PERCENTskeleton,
  [sym_decl_token_table] = sym_decl_token_table,
  [sym_decl_verbose] = sym_decl_verbose,
  [sym_decl_yacc] = sym_decl_yacc,
  [anon_sym_PERCENTinitial_DASHaction] = anon_sym_PERCENTinitial_DASHaction,
  [anon_sym_PERCENTparse_DASHparam] = anon_sym_PERCENTparse_DASHparam,
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
  [aux_sym_char_quoted_token1] = aux_sym_char_quoted_token1,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
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
  [sym_decl_header] = sym_decl_header,
  [sym_decl_name_prefix] = sym_decl_name_prefix,
  [sym_decl_output] = sym_decl_output,
  [sym_decl_skeleton] = sym_decl_skeleton,
  [sym_decl_inial_action] = sym_decl_inial_action,
  [sym_decl_parse_param] = sym_decl_parse_param,
  [sym_directive_merge] = sym_directive_merge,
  [sym_string] = sym_string,
  [sym_string_literal] = sym_string_literal,
  [sym_type_tag] = sym_type_tag,
  [sym_type] = sym_type,
  [sym_grammar_rule_identifier] = sym_grammar_rule_identifier,
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
  [aux_sym_decl_code_repeat1] = aux_sym_decl_code_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
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
  [anon_sym_DASH] = {
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
  [anon_sym_PERCENTheader] = {
    .visible = true,
    .named = false,
  },
  [sym_decl_locations] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENTname_DASHprefix] = {
    .visible = true,
    .named = false,
  },
  [sym_decl_no_lines] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENToutput] = {
    .visible = true,
    .named = false,
  },
  [sym_decl_pure_parser] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENTskeleton] = {
    .visible = true,
    .named = false,
  },
  [sym_decl_token_table] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_verbose] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_yacc] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENTinitial_DASHaction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTparse_DASHparam] = {
    .visible = true,
    .named = false,
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
  [aux_sym_char_quoted_token1] = {
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
  [sym_decl_header] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_name_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_output] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_skeleton] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_inial_action] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_parse_param] = {
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
  [aux_sym_decl_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
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
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 16,
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
  [66] = 11,
  [67] = 67,
  [68] = 10,
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
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
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
  [112] = 47,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 44,
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
  [152] = 150,
  [153] = 151,
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
  [173] = 164,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 180,
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
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 186,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 190,
  [210] = 210,
  [211] = 191,
  [212] = 199,
  [213] = 213,
  [214] = 214,
  [215] = 215,
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
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '%') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(325);
      if (lookahead == ')') ADVANCE(296);
      if (lookahead == '*') ADVANCE(266);
      if (lookahead == '-') ADVANCE(278);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(341);
      if (lookahead == '1') ADVANCE(324);
      if (lookahead == ':') ADVANCE(241);
      if (lookahead == ';') ADVANCE(234);
      if (lookahead == '<') ADVANCE(265);
      if (lookahead == '>') ADVANCE(267);
      if (lookahead == 'L') ADVANCE(9);
      if (lookahead == 'U') ADVANCE(10);
      if (lookahead == '[') ADVANCE(243);
      if (lookahead == ']') ADVANCE(250);
      if (lookahead == '_') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == 'p') ADVANCE(172);
      if (lookahead == 'r') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(11);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(242);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '%') ADVANCE(215);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(237);
      if (lookahead != 0) ADVANCE(239);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(304);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '/') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(326);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '%') ADVANCE(257);
      if (lookahead == '\'') ADVANCE(325);
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '0') ADVANCE(308);
      if (lookahead == ';') ADVANCE(234);
      if (lookahead == '<') ADVANCE(265);
      if (lookahead == 'L') ADVANCE(244);
      if (lookahead == 'U') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(28);
      if (lookahead == '_') ADVANCE(248);
      if (lookahead == 'u') ADVANCE(246);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (aux_sym_component_token1_character_set_1(lookahead)) ADVANCE(249);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '%') ADVANCE(257);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ';') ADVANCE(234);
      if (lookahead == 'L') ADVANCE(244);
      if (lookahead == 'U') ADVANCE(245);
      if (lookahead == '\\') ADVANCE(28);
      if (aux_sym_component_token1_character_set_2(lookahead)) ADVANCE(249);
      if (lookahead == 'u') ADVANCE(246);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '%') ADVANCE(255);
      if (lookahead == '\'') ADVANCE(325);
      if (lookahead == ')') ADVANCE(296);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ':') ADVANCE(241);
      if (lookahead == ';') ADVANCE(234);
      if (lookahead == '<') ADVANCE(265);
      if (lookahead == 'L') ADVANCE(244);
      if (lookahead == 'U') ADVANCE(245);
      if (lookahead == '[') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(28);
      if (aux_sym_component_token1_character_set_2(lookahead)) ADVANCE(249);
      if (lookahead == 'u') ADVANCE(246);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(242);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '\'') ADVANCE(325);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ';') ADVANCE(234);
      if (lookahead == 'L') ADVANCE(244);
      if (lookahead == 'U') ADVANCE(245);
      if (lookahead == '[') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(28);
      if (aux_sym_component_token1_character_set_2(lookahead)) ADVANCE(249);
      if (lookahead == 'u') ADVANCE(246);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(301);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(297);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(299);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '8') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(300);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '(') ADVANCE(295);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(336);
      if (lookahead == '/') ADVANCE(329);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(340);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(340);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(338);
      if (lookahead == '/') ADVANCE(331);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(119);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(156);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(152);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(157);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(158);
      END_STATE();
    case 25:
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == '0') ADVANCE(308);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 26:
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == '0') ADVANCE(306);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 27:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '1') ADVANCE(323);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == 'U') ADVANCE(229);
      if (lookahead == 'u') ADVANCE(225);
      END_STATE();
    case 29:
      if (lookahead == '\\') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(13);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(116);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(208);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(149);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(118);
      END_STATE();
    case 49:
      if (lookahead == 'c') ADVANCE(290);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(194);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(205);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == '}') ADVANCE(236);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 95:
      if (lookahead == 'f') ADVANCE(191);
      END_STATE();
    case 96:
      if (lookahead == 'f') ADVANCE(102);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(280);
      END_STATE();
    case 99:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 100:
      if (lookahead == 'h') ADVANCE(192);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(212);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 113:
      if (lookahead == 'k') ADVANCE(76);
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 114:
      if (lookahead == 'k') ADVANCE(81);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 121:
      if (lookahead == 'm') ADVANCE(254);
      END_STATE();
    case 122:
      if (lookahead == 'm') ADVANCE(292);
      END_STATE();
    case 123:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 124:
      if (lookahead == 'm') ADVANCE(154);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == 'y') ADVANCE(153);
      END_STATE();
    case 141:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 142:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 143:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 144:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 145:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 146:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 147:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 148:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 150:
      if (lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 151:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 152:
      if (lookahead == 'p') ADVANCE(177);
      END_STATE();
    case 153:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 154:
      if (lookahead == 'p') ADVANCE(196);
      END_STATE();
    case 155:
      if (lookahead == 'p') ADVANCE(210);
      END_STATE();
    case 156:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 157:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 158:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 159:
      if (lookahead == 'q') ADVANCE(209);
      END_STATE();
    case 160:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 161:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 162:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 163:
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 164:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 165:
      if (lookahead == 'r') ADVANCE(264);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(282);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(322);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 201:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 202:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 203:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 207:
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 208:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 209:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 210:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 211:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 212:
      if (lookahead == 'x') ADVANCE(283);
      END_STATE();
    case 213:
      if (lookahead == 'x') ADVANCE(151);
      END_STATE();
    case 214:
      if (lookahead == 'y') ADVANCE(294);
      END_STATE();
    case 215:
      if (lookahead == '}') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(239);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(311);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      END_STATE();
    case 230:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(239);
      END_STATE();
    case 231:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 232:
      if (eof) ADVANCE(233);
      if (lookahead == '%') ADVANCE(257);
      if (lookahead == '\'') ADVANCE(325);
      if (lookahead == '*') ADVANCE(266);
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '0') ADVANCE(308);
      if (lookahead == ';') ADVANCE(234);
      if (lookahead == '<') ADVANCE(265);
      if (lookahead == '>') ADVANCE(267);
      if (lookahead == '\\') ADVANCE(28);
      if (aux_sym_component_token1_character_set_3(lookahead)) ADVANCE(249);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '|') ADVANCE(242);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(232)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(310);
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
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '%') ADVANCE(215);
      if (lookahead == '/') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_prologue_body_token1);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '%') ADVANCE(230);
      if (lookahead == '*') ADVANCE(337);
      if (lookahead == '/') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_prologue_body_token1);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '%') ADVANCE(230);
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
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '\\') ADVANCE(28);
      if (aux_sym_component_token1_character_set_4(lookahead)) ADVANCE(249);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_component_token1);
      if (lookahead == '"') ADVANCE(299);
      if (lookahead == '\\') ADVANCE(28);
      if (aux_sym_component_token1_character_set_4(lookahead)) ADVANCE(249);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_component_token1);
      if (lookahead == '"') ADVANCE(298);
      if (lookahead == '8') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(28);
      if (aux_sym_component_token1_character_set_4(lookahead)) ADVANCE(249);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_component_token1);
      if (lookahead == '"') ADVANCE(300);
      if (lookahead == '\\') ADVANCE(28);
      if (aux_sym_component_token1_character_set_4(lookahead)) ADVANCE(249);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_component_token1);
      if (lookahead == '(') ADVANCE(295);
      if (lookahead == '\\') ADVANCE(28);
      if (aux_sym_component_token1_character_set_4(lookahead)) ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_component_token1);
      if (lookahead == '\\') ADVANCE(28);
      if (aux_sym_component_token1_character_set_4(lookahead)) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_PERCENTtype);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_PERCENTrequire);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_PERCENTtoken);
      if (lookahead == '-') ADVANCE(200);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_PERCENTnterm);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(240);
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'g') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == 'p') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(131);
      if (lookahead == 'v') ADVANCE(80);
      if (lookahead == 'y') ADVANCE(31);
      if (lookahead == '{') ADVANCE(235);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(240);
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'g') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == 'p') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(131);
      if (lookahead == 'v') ADVANCE(80);
      if (lookahead == 'y') ADVANCE(31);
      if (lookahead == '{') ADVANCE(235);
      if (lookahead == '}') ADVANCE(236);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(240);
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'g') ADVANCE(115);
      if (lookahead == 'h') ADVANCE(73);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == 'p') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(131);
      if (lookahead == 'v') ADVANCE(80);
      if (lookahead == 'y') ADVANCE(31);
      if (lookahead == '{') ADVANCE(235);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_nonassoc);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_precedence);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_PERCENTinitial_DASHdeclaration);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_decl_glr_parser);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_PERCENTdestructor);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_PERCENTprinter);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_expect);
      if (lookahead == '-') ADVANCE(175);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_expect_DASHrr);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_decl_expect_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_PERCENTstart);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_PERCENTdefine);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_PERCENTcode);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_PERCENTunion);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_PERCENTdebug);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_PERCENTheader);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_decl_locations);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_PERCENTname_DASHprefix);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_decl_no_lines);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_PERCENToutput);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_decl_pure_parser);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_PERCENTskeleton);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_decl_token_table);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_decl_verbose);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_decl_yacc);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_PERCENTinitial_DASHaction);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_PERCENTparse_DASHparam);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_PERCENTmerge);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_directive_empty);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym__LPAREN);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_L_DQUOTE);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_u_DQUOTE);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_U_DQUOTE);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_u8_DQUOTE);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(304);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(304);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(217);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(321);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(218);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(315);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(318);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(316);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(218);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(318);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(316);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(216);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(317);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(26);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(318);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(216);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(320);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(221);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(318);
      if (('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          ('d' <= lookahead && lookahead <= 'f') ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(216);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (sym_number_literal_character_set_1(lookahead)) ADVANCE(321);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(222);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(311);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(220);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(222);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(318);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(220);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(318);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(221);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(222);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(318);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(316);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(221);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(318);
      if (lookahead == 'A' ||
          lookahead == 'C' ||
          lookahead == 'a' ||
          lookahead == 'c') ADVANCE(316);
      if (('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '\'') ADVANCE(221);
      if (lookahead == '.') ADVANCE(319);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(318);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(217);
      if (lookahead == '0') ADVANCE(309);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(321);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(222);
      if (lookahead == 'B' ||
          lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'b' ||
          lookahead == 'd' ||
          lookahead == 'f') ADVANCE(311);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(311);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(318);
      if (lookahead == 'B' ||
          ('D' <= lookahead && lookahead <= 'F') ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'f')) ADVANCE(313);
      if (lookahead == 'L' ||
          lookahead == 'U' ||
          lookahead == 'W' ||
          lookahead == 'l' ||
          lookahead == 'u' ||
          lookahead == 'w') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(313);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(321);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_number_literal);
      if (sym_number_literal_character_set_2(lookahead)) ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_opt);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_char_quoted_token1);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_char_quoted_token1);
      if (lookahead == '*') ADVANCE(336);
      if (lookahead == '/') ADVANCE(329);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_char_quoted_token1);
      if (lookahead == '/') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(326);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '%') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead == '*') ADVANCE(340);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(339);
      if (lookahead == '/') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '%') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(17);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(17);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(336);
      if (lookahead == '/') ADVANCE(329);
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
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 232},
  [26] = {.lex_state = 232},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 232},
  [29] = {.lex_state = 232},
  [30] = {.lex_state = 232},
  [31] = {.lex_state = 232},
  [32] = {.lex_state = 232},
  [33] = {.lex_state = 232},
  [34] = {.lex_state = 232},
  [35] = {.lex_state = 232},
  [36] = {.lex_state = 232},
  [37] = {.lex_state = 232},
  [38] = {.lex_state = 232},
  [39] = {.lex_state = 232},
  [40] = {.lex_state = 232},
  [41] = {.lex_state = 232},
  [42] = {.lex_state = 232},
  [43] = {.lex_state = 232},
  [44] = {.lex_state = 232},
  [45] = {.lex_state = 232},
  [46] = {.lex_state = 232},
  [47] = {.lex_state = 232},
  [48] = {.lex_state = 232},
  [49] = {.lex_state = 232},
  [50] = {.lex_state = 232},
  [51] = {.lex_state = 232},
  [52] = {.lex_state = 232},
  [53] = {.lex_state = 232},
  [54] = {.lex_state = 232},
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
  [70] = {.lex_state = 232},
  [71] = {.lex_state = 232},
  [72] = {.lex_state = 232},
  [73] = {.lex_state = 232},
  [74] = {.lex_state = 232},
  [75] = {.lex_state = 232},
  [76] = {.lex_state = 232},
  [77] = {.lex_state = 232},
  [78] = {.lex_state = 232},
  [79] = {.lex_state = 232},
  [80] = {.lex_state = 232},
  [81] = {.lex_state = 232},
  [82] = {.lex_state = 232},
  [83] = {.lex_state = 232},
  [84] = {.lex_state = 232},
  [85] = {.lex_state = 232},
  [86] = {.lex_state = 232},
  [87] = {.lex_state = 232},
  [88] = {.lex_state = 232},
  [89] = {.lex_state = 232},
  [90] = {.lex_state = 232},
  [91] = {.lex_state = 232},
  [92] = {.lex_state = 232},
  [93] = {.lex_state = 232},
  [94] = {.lex_state = 232},
  [95] = {.lex_state = 232},
  [96] = {.lex_state = 232},
  [97] = {.lex_state = 232},
  [98] = {.lex_state = 232},
  [99] = {.lex_state = 232},
  [100] = {.lex_state = 232},
  [101] = {.lex_state = 232},
  [102] = {.lex_state = 232},
  [103] = {.lex_state = 232},
  [104] = {.lex_state = 232},
  [105] = {.lex_state = 232},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 232},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 232},
  [136] = {.lex_state = 232},
  [137] = {.lex_state = 232},
  [138] = {.lex_state = 232},
  [139] = {.lex_state = 232},
  [140] = {.lex_state = 232},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 232},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 232},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 232},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 232},
  [164] = {.lex_state = 232},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 232},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 232},
  [174] = {.lex_state = 232},
  [175] = {.lex_state = 232},
  [176] = {.lex_state = 27},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0, .external_lex_state = 1},
  [181] = {.lex_state = 0, .external_lex_state = 1},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 16},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 232},
  [186] = {.lex_state = 3},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0, .external_lex_state = 1},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 334},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 232},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 232},
  [201] = {.lex_state = 7},
  [202] = {.lex_state = 232},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 3},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 232},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {(TSStateId)(-1)},
  [215] = {(TSStateId)(-1)},
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
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PERCENTunion] = ACTIONS(1),
    [anon_sym_PERCENTdebug] = ACTIONS(1),
    [anon_sym_PERCENTheader] = ACTIONS(1),
    [sym_decl_locations] = ACTIONS(1),
    [anon_sym_PERCENTname_DASHprefix] = ACTIONS(1),
    [sym_decl_no_lines] = ACTIONS(1),
    [anon_sym_PERCENToutput] = ACTIONS(1),
    [sym_decl_pure_parser] = ACTIONS(1),
    [anon_sym_PERCENTskeleton] = ACTIONS(1),
    [sym_decl_token_table] = ACTIONS(1),
    [sym_decl_verbose] = ACTIONS(1),
    [sym_decl_yacc] = ACTIONS(1),
    [anon_sym_PERCENTinitial_DASHaction] = ACTIONS(1),
    [anon_sym_PERCENTparse_DASHparam] = ACTIONS(1),
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
  },
  [1] = {
    [sym_sections] = STATE(206),
    [sym_prologue] = STATE(103),
    [sym_grammar_rules_section] = STATE(205),
    [sym_declaration] = STATE(82),
    [sym_decl_type] = STATE(87),
    [sym_decl_require] = STATE(87),
    [sym_decl_token] = STATE(87),
    [sym_decl_nterm] = STATE(87),
    [sym_decl_op_precedence] = STATE(87),
    [sym_decl_initial_declaration] = STATE(87),
    [sym_decl_destructor] = STATE(87),
    [sym_decl_printer] = STATE(87),
    [sym_decl_expect] = STATE(87),
    [sym_decl_start] = STATE(87),
    [sym_decl_define] = STATE(87),
    [sym_decl_code] = STATE(87),
    [sym_decl_union] = STATE(87),
    [sym_decl_debug] = STATE(87),
    [sym_decl_header] = STATE(87),
    [sym_decl_name_prefix] = STATE(87),
    [sym_decl_output] = STATE(87),
    [sym_decl_skeleton] = STATE(87),
    [sym_decl_inial_action] = STATE(87),
    [sym_decl_parse_param] = STATE(87),
    [sym_comment] = STATE(1),
    [aux_sym_sections_repeat1] = STATE(4),
    [anon_sym_PERCENT_LBRACE] = ACTIONS(7),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(9),
    [anon_sym_PERCENTtype] = ACTIONS(11),
    [anon_sym_PERCENTrequire] = ACTIONS(13),
    [anon_sym_PERCENTtoken] = ACTIONS(15),
    [anon_sym_PERCENTnterm] = ACTIONS(17),
    [anon_sym_PERCENT] = ACTIONS(19),
    [anon_sym_PERCENTinitial_DASHdeclaration] = ACTIONS(21),
    [sym_decl_glr_parser] = ACTIONS(23),
    [anon_sym_PERCENTdestructor] = ACTIONS(25),
    [anon_sym_PERCENTprinter] = ACTIONS(27),
    [anon_sym_PERCENTstart] = ACTIONS(29),
    [anon_sym_PERCENTdefine] = ACTIONS(31),
    [anon_sym_PERCENTcode] = ACTIONS(33),
    [anon_sym_PERCENTunion] = ACTIONS(35),
    [anon_sym_PERCENTdebug] = ACTIONS(37),
    [anon_sym_PERCENTheader] = ACTIONS(39),
    [sym_decl_locations] = ACTIONS(23),
    [anon_sym_PERCENTname_DASHprefix] = ACTIONS(41),
    [sym_decl_no_lines] = ACTIONS(23),
    [anon_sym_PERCENToutput] = ACTIONS(43),
    [sym_decl_pure_parser] = ACTIONS(23),
    [anon_sym_PERCENTskeleton] = ACTIONS(45),
    [sym_decl_token_table] = ACTIONS(23),
    [sym_decl_verbose] = ACTIONS(23),
    [sym_decl_yacc] = ACTIONS(23),
    [anon_sym_PERCENTinitial_DASHaction] = ACTIONS(47),
    [anon_sym_PERCENTparse_DASHparam] = ACTIONS(49),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_PERCENTtype,
    ACTIONS(13), 1,
      anon_sym_PERCENTrequire,
    ACTIONS(15), 1,
      anon_sym_PERCENTtoken,
    ACTIONS(17), 1,
      anon_sym_PERCENTnterm,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_PERCENTinitial_DASHdeclaration,
    ACTIONS(25), 1,
      anon_sym_PERCENTdestructor,
    ACTIONS(27), 1,
      anon_sym_PERCENTprinter,
    ACTIONS(29), 1,
      anon_sym_PERCENTstart,
    ACTIONS(31), 1,
      anon_sym_PERCENTdefine,
    ACTIONS(33), 1,
      anon_sym_PERCENTcode,
    ACTIONS(35), 1,
      anon_sym_PERCENTunion,
    ACTIONS(37), 1,
      anon_sym_PERCENTdebug,
    ACTIONS(39), 1,
      anon_sym_PERCENTheader,
    ACTIONS(41), 1,
      anon_sym_PERCENTname_DASHprefix,
    ACTIONS(43), 1,
      anon_sym_PERCENToutput,
    ACTIONS(45), 1,
      anon_sym_PERCENTskeleton,
    ACTIONS(47), 1,
      anon_sym_PERCENTinitial_DASHaction,
    ACTIONS(49), 1,
      anon_sym_PERCENTparse_DASHparam,
    ACTIONS(53), 1,
      aux_sym_component_token1,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_grammar_rules_body_repeat1,
    STATE(101), 1,
      sym_grammar_rule,
    STATE(179), 1,
      sym_declaration,
    STATE(196), 1,
      sym_grammar_rule_identifier,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(23), 7,
      sym_decl_glr_parser,
      sym_decl_locations,
      sym_decl_no_lines,
      sym_decl_pure_parser,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
    STATE(87), 20,
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
      sym_decl_header,
      sym_decl_name_prefix,
      sym_decl_output,
      sym_decl_skeleton,
      sym_decl_inial_action,
      sym_decl_parse_param,
  [117] = 29,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(57), 1,
      aux_sym_component_token1,
    ACTIONS(60), 1,
      anon_sym_PERCENTtype,
    ACTIONS(63), 1,
      anon_sym_PERCENTrequire,
    ACTIONS(66), 1,
      anon_sym_PERCENTtoken,
    ACTIONS(69), 1,
      anon_sym_PERCENTnterm,
    ACTIONS(72), 1,
      anon_sym_PERCENT,
    ACTIONS(75), 1,
      anon_sym_PERCENTinitial_DASHdeclaration,
    ACTIONS(81), 1,
      anon_sym_PERCENTdestructor,
    ACTIONS(84), 1,
      anon_sym_PERCENTprinter,
    ACTIONS(87), 1,
      anon_sym_PERCENTstart,
    ACTIONS(90), 1,
      anon_sym_PERCENTdefine,
    ACTIONS(93), 1,
      anon_sym_PERCENTcode,
    ACTIONS(96), 1,
      anon_sym_PERCENTunion,
    ACTIONS(99), 1,
      anon_sym_PERCENTdebug,
    ACTIONS(102), 1,
      anon_sym_PERCENTheader,
    ACTIONS(105), 1,
      anon_sym_PERCENTname_DASHprefix,
    ACTIONS(108), 1,
      anon_sym_PERCENToutput,
    ACTIONS(111), 1,
      anon_sym_PERCENTskeleton,
    ACTIONS(114), 1,
      anon_sym_PERCENTinitial_DASHaction,
    ACTIONS(117), 1,
      anon_sym_PERCENTparse_DASHparam,
    STATE(101), 1,
      sym_grammar_rule,
    STATE(179), 1,
      sym_declaration,
    STATE(196), 1,
      sym_grammar_rule_identifier,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
    STATE(3), 2,
      sym_comment,
      aux_sym_grammar_rules_body_repeat1,
    ACTIONS(78), 7,
      sym_decl_glr_parser,
      sym_decl_locations,
      sym_decl_no_lines,
      sym_decl_pure_parser,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
    STATE(87), 20,
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
      sym_decl_header,
      sym_decl_name_prefix,
      sym_decl_output,
      sym_decl_skeleton,
      sym_decl_inial_action,
      sym_decl_parse_param,
  [232] = 30,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(9), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(11), 1,
      anon_sym_PERCENTtype,
    ACTIONS(13), 1,
      anon_sym_PERCENTrequire,
    ACTIONS(15), 1,
      anon_sym_PERCENTtoken,
    ACTIONS(17), 1,
      anon_sym_PERCENTnterm,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_PERCENTinitial_DASHdeclaration,
    ACTIONS(25), 1,
      anon_sym_PERCENTdestructor,
    ACTIONS(27), 1,
      anon_sym_PERCENTprinter,
    ACTIONS(29), 1,
      anon_sym_PERCENTstart,
    ACTIONS(31), 1,
      anon_sym_PERCENTdefine,
    ACTIONS(33), 1,
      anon_sym_PERCENTcode,
    ACTIONS(35), 1,
      anon_sym_PERCENTunion,
    ACTIONS(37), 1,
      anon_sym_PERCENTdebug,
    ACTIONS(39), 1,
      anon_sym_PERCENTheader,
    ACTIONS(41), 1,
      anon_sym_PERCENTname_DASHprefix,
    ACTIONS(43), 1,
      anon_sym_PERCENToutput,
    ACTIONS(45), 1,
      anon_sym_PERCENTskeleton,
    ACTIONS(47), 1,
      anon_sym_PERCENTinitial_DASHaction,
    ACTIONS(49), 1,
      anon_sym_PERCENTparse_DASHparam,
    STATE(4), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_sections_repeat1,
    STATE(82), 1,
      sym_declaration,
    STATE(103), 1,
      sym_prologue,
    STATE(178), 1,
      sym_grammar_rules_section,
    ACTIONS(23), 7,
      sym_decl_glr_parser,
      sym_decl_locations,
      sym_decl_no_lines,
      sym_decl_pure_parser,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
    STATE(87), 20,
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
      sym_decl_header,
      sym_decl_name_prefix,
      sym_decl_output,
      sym_decl_skeleton,
      sym_decl_inial_action,
      sym_decl_parse_param,
  [348] = 30,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_PERCENTtype,
    ACTIONS(13), 1,
      anon_sym_PERCENTrequire,
    ACTIONS(15), 1,
      anon_sym_PERCENTtoken,
    ACTIONS(17), 1,
      anon_sym_PERCENTnterm,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_PERCENTinitial_DASHdeclaration,
    ACTIONS(25), 1,
      anon_sym_PERCENTdestructor,
    ACTIONS(27), 1,
      anon_sym_PERCENTprinter,
    ACTIONS(29), 1,
      anon_sym_PERCENTstart,
    ACTIONS(31), 1,
      anon_sym_PERCENTdefine,
    ACTIONS(33), 1,
      anon_sym_PERCENTcode,
    ACTIONS(35), 1,
      anon_sym_PERCENTunion,
    ACTIONS(37), 1,
      anon_sym_PERCENTdebug,
    ACTIONS(39), 1,
      anon_sym_PERCENTheader,
    ACTIONS(41), 1,
      anon_sym_PERCENTname_DASHprefix,
    ACTIONS(43), 1,
      anon_sym_PERCENToutput,
    ACTIONS(45), 1,
      anon_sym_PERCENTskeleton,
    ACTIONS(47), 1,
      anon_sym_PERCENTinitial_DASHaction,
    ACTIONS(49), 1,
      anon_sym_PERCENTparse_DASHparam,
    ACTIONS(53), 1,
      aux_sym_component_token1,
    STATE(2), 1,
      aux_sym_grammar_rules_body_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(101), 1,
      sym_grammar_rule,
    STATE(162), 1,
      sym_grammar_rules_body,
    STATE(179), 1,
      sym_declaration,
    STATE(196), 1,
      sym_grammar_rule_identifier,
    ACTIONS(23), 7,
      sym_decl_glr_parser,
      sym_decl_locations,
      sym_decl_no_lines,
      sym_decl_pure_parser,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
    STATE(87), 20,
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
      sym_decl_header,
      sym_decl_name_prefix,
      sym_decl_output,
      sym_decl_skeleton,
      sym_decl_inial_action,
      sym_decl_parse_param,
  [464] = 28,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(120), 1,
      anon_sym_PERCENT_LBRACE,
    ACTIONS(123), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(125), 1,
      anon_sym_PERCENTtype,
    ACTIONS(128), 1,
      anon_sym_PERCENTrequire,
    ACTIONS(131), 1,
      anon_sym_PERCENTtoken,
    ACTIONS(134), 1,
      anon_sym_PERCENTnterm,
    ACTIONS(137), 1,
      anon_sym_PERCENT,
    ACTIONS(140), 1,
      anon_sym_PERCENTinitial_DASHdeclaration,
    ACTIONS(146), 1,
      anon_sym_PERCENTdestructor,
    ACTIONS(149), 1,
      anon_sym_PERCENTprinter,
    ACTIONS(152), 1,
      anon_sym_PERCENTstart,
    ACTIONS(155), 1,
      anon_sym_PERCENTdefine,
    ACTIONS(158), 1,
      anon_sym_PERCENTcode,
    ACTIONS(161), 1,
      anon_sym_PERCENTunion,
    ACTIONS(164), 1,
      anon_sym_PERCENTdebug,
    ACTIONS(167), 1,
      anon_sym_PERCENTheader,
    ACTIONS(170), 1,
      anon_sym_PERCENTname_DASHprefix,
    ACTIONS(173), 1,
      anon_sym_PERCENToutput,
    ACTIONS(176), 1,
      anon_sym_PERCENTskeleton,
    ACTIONS(179), 1,
      anon_sym_PERCENTinitial_DASHaction,
    ACTIONS(182), 1,
      anon_sym_PERCENTparse_DASHparam,
    STATE(82), 1,
      sym_declaration,
    STATE(103), 1,
      sym_prologue,
    STATE(6), 2,
      sym_comment,
      aux_sym_sections_repeat1,
    ACTIONS(143), 7,
      sym_decl_glr_parser,
      sym_decl_locations,
      sym_decl_no_lines,
      sym_decl_pure_parser,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
    STATE(87), 20,
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
      sym_decl_header,
      sym_decl_name_prefix,
      sym_decl_output,
      sym_decl_skeleton,
      sym_decl_inial_action,
      sym_decl_parse_param,
  [575] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(189), 1,
      anon_sym_DOT,
    STATE(7), 1,
      sym_comment,
    ACTIONS(187), 3,
      aux_sym_component_token1,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(185), 39,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [634] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      aux_sym_component_token1,
    ACTIONS(197), 1,
      anon_sym_LT,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_decl_type_repeat1,
    STATE(51), 1,
      aux_sym_decl_type_repeat2,
    STATE(120), 1,
      sym_type_tag,
    ACTIONS(195), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    STATE(24), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_quoted,
    ACTIONS(199), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(191), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [707] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      aux_sym_component_token1,
    ACTIONS(197), 1,
      anon_sym_LT,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_decl_type_repeat1,
    STATE(55), 1,
      aux_sym_decl_type_repeat2,
    STATE(120), 1,
      sym_type_tag,
    ACTIONS(205), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    STATE(24), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_quoted,
    ACTIONS(199), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(203), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [780] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(10), 1,
      sym_comment,
    ACTIONS(209), 3,
      aux_sym_component_token1,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(207), 39,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PIPE,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
      anon_sym_PERCENTmerge,
      anon_sym_RPAREN,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [836] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(11), 1,
      sym_comment,
    ACTIONS(213), 3,
      aux_sym_component_token1,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(211), 39,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PIPE,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
      anon_sym_PERCENTmerge,
      anon_sym_RPAREN,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [892] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 1,
      sym_comment,
    ACTIONS(217), 3,
      aux_sym_component_token1,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(215), 39,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [948] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(221), 1,
      aux_sym_component_token1,
    ACTIONS(229), 1,
      anon_sym_SQUOTE,
    ACTIONS(224), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    STATE(13), 2,
      sym_comment,
      aux_sym_decl_type_repeat1,
    STATE(24), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_quoted,
    ACTIONS(226), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(219), 28,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [1011] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      aux_sym_component_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    STATE(13), 1,
      aux_sym_decl_type_repeat1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(234), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    STATE(24), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_quoted,
    ACTIONS(199), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(232), 28,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [1076] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(240), 1,
      anon_sym__LPAREN,
    ACTIONS(244), 1,
      sym_number_literal,
    STATE(15), 1,
      sym_comment,
    STATE(64), 1,
      sym_string_literal,
    STATE(67), 1,
      sym_string,
    ACTIONS(238), 3,
      aux_sym_component_token1,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(242), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(236), 28,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [1140] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(16), 1,
      sym_comment,
    ACTIONS(248), 3,
      aux_sym_component_token1,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(246), 37,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PIPE,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
      anon_sym_PERCENTmerge,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1194] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(240), 1,
      anon_sym__LPAREN,
    STATE(17), 1,
      sym_comment,
    STATE(64), 1,
      sym_string_literal,
    STATE(70), 1,
      sym_string,
    ACTIONS(252), 3,
      aux_sym_component_token1,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(242), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(250), 28,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [1255] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(256), 1,
      aux_sym_component_token1,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_decl_define_repeat1,
    STATE(91), 1,
      sym_string_literal,
    ACTIONS(258), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(199), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(254), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [1320] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(266), 1,
      aux_sym_component_token1,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      aux_sym_decl_define_repeat1,
    STATE(19), 1,
      sym_comment,
    STATE(81), 1,
      sym_string_literal,
    ACTIONS(268), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(199), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(264), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [1385] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(276), 1,
      anon_sym_DOT,
    STATE(20), 2,
      sym_comment,
      aux_sym_decl_define_repeat1,
    ACTIONS(274), 3,
      aux_sym_component_token1,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(272), 33,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1439] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(283), 1,
      sym_number_literal,
    STATE(21), 1,
      sym_comment,
    STATE(63), 1,
      sym_string_literal,
    ACTIONS(281), 3,
      aux_sym_component_token1,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(242), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(279), 28,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [1497] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(274), 3,
      aux_sym_component_token1,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(272), 34,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [1548] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    STATE(72), 1,
      sym_string_literal,
    ACTIONS(287), 3,
      aux_sym_component_token1,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(242), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(285), 28,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [1603] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
      sym_comment,
    ACTIONS(291), 3,
      aux_sym_component_token1,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(289), 34,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [1654] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(295), 1,
      aux_sym_component_token1,
    ACTIONS(299), 1,
      anon_sym_LT,
    ACTIONS(301), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_decl_op_precedence_repeat1,
    STATE(35), 1,
      sym_char_quoted,
    STATE(45), 1,
      aux_sym_decl_op_precedence_repeat2,
    STATE(138), 1,
      sym_type_tag,
    ACTIONS(297), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(293), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [1718] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(295), 1,
      aux_sym_component_token1,
    ACTIONS(299), 1,
      anon_sym_LT,
    ACTIONS(301), 1,
      anon_sym_SQUOTE,
    STATE(26), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_decl_op_precedence_repeat1,
    STATE(35), 1,
      sym_char_quoted,
    STATE(60), 1,
      aux_sym_decl_op_precedence_repeat2,
    STATE(138), 1,
      sym_type_tag,
    ACTIONS(305), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(303), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [1782] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
      sym_comment,
    STATE(74), 1,
      sym_string_literal,
    ACTIONS(309), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(199), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(307), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [1835] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(313), 1,
      aux_sym_component_token1,
    ACTIONS(316), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    STATE(28), 2,
      sym_comment,
      aux_sym_decl_nterm_repeat1,
    ACTIONS(311), 30,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [1885] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      anon_sym_LT,
    ACTIONS(320), 1,
      aux_sym_component_token1,
    STATE(28), 1,
      aux_sym_decl_nterm_repeat1,
    STATE(29), 1,
      sym_comment,
    STATE(48), 1,
      aux_sym_decl_nterm_repeat2,
    STATE(53), 1,
      sym_type_tag,
    ACTIONS(322), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(318), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [1943] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      anon_sym_LT,
    ACTIONS(326), 1,
      aux_sym_component_token1,
    STATE(30), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym_decl_token_repeat1,
    STATE(59), 1,
      aux_sym_decl_token_repeat3,
    STATE(163), 1,
      sym_type_tag,
    ACTIONS(328), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(324), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [2001] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(295), 1,
      aux_sym_component_token1,
    ACTIONS(301), 1,
      anon_sym_SQUOTE,
    STATE(31), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_decl_op_precedence_repeat1,
    STATE(35), 1,
      sym_char_quoted,
    ACTIONS(332), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(330), 28,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [2057] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(336), 1,
      aux_sym_component_token1,
    ACTIONS(341), 1,
      anon_sym_SQUOTE,
    STATE(35), 1,
      sym_char_quoted,
    ACTIONS(339), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    STATE(32), 2,
      sym_comment,
      aux_sym_decl_op_precedence_repeat1,
    ACTIONS(334), 28,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [2111] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      anon_sym_LT,
    ACTIONS(326), 1,
      aux_sym_component_token1,
    STATE(33), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_decl_token_repeat3,
    STATE(57), 1,
      aux_sym_decl_token_repeat1,
    STATE(163), 1,
      sym_type_tag,
    ACTIONS(346), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(344), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [2169] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      anon_sym_LT,
    ACTIONS(320), 1,
      aux_sym_component_token1,
    STATE(28), 1,
      aux_sym_decl_nterm_repeat1,
    STATE(34), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_decl_nterm_repeat2,
    STATE(53), 1,
      sym_type_tag,
    ACTIONS(350), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(348), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [2227] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(356), 1,
      sym_number_literal,
    STATE(35), 1,
      sym_comment,
    ACTIONS(354), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(352), 30,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
      anon_sym_SQUOTE,
  [2276] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(360), 1,
      aux_sym_component_token1,
    ACTIONS(365), 1,
      anon_sym_LT,
    STATE(65), 1,
      sym_type_tag,
    ACTIONS(363), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    STATE(36), 2,
      sym_comment,
      aux_sym_decl_destructor_repeat1,
    ACTIONS(358), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [2329] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(370), 1,
      aux_sym_component_token1,
    ACTIONS(374), 1,
      anon_sym_LT,
    STATE(37), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_decl_destructor_repeat1,
    STATE(65), 1,
      sym_type_tag,
    ACTIONS(372), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(368), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [2384] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
      sym_comment,
    ACTIONS(248), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(246), 31,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
      sym_number_literal,
      anon_sym_SQUOTE,
  [2431] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(370), 1,
      aux_sym_component_token1,
    ACTIONS(374), 1,
      anon_sym_LT,
    STATE(39), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_decl_destructor_repeat1,
    STATE(65), 1,
      sym_type_tag,
    ACTIONS(378), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(376), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [2486] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(370), 1,
      aux_sym_component_token1,
    ACTIONS(374), 1,
      anon_sym_LT,
    STATE(36), 1,
      aux_sym_decl_destructor_repeat1,
    STATE(40), 1,
      sym_comment,
    STATE(65), 1,
      sym_type_tag,
    ACTIONS(382), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(380), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [2541] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(41), 1,
      sym_comment,
    ACTIONS(386), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(384), 31,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
      anon_sym_PERCENTnterm,
      anon_sym_PERCENTinitial_DASHdeclaration,
      sym_decl_glr_parser,
      anon_sym_PERCENTdestructor,
      anon_sym_LT,
      anon_sym_STAR,
      anon_sym_GT,
      anon_sym_PERCENTprinter,
      anon_sym_PERCENTstart,
      anon_sym_PERCENTdefine,
      anon_sym_PERCENTcode,
      anon_sym_PERCENTunion,
      anon_sym_PERCENTdebug,
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [2588] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(370), 1,
      aux_sym_component_token1,
    ACTIONS(374), 1,
      anon_sym_LT,
    STATE(36), 1,
      aux_sym_decl_destructor_repeat1,
    STATE(42), 1,
      sym_comment,
    STATE(65), 1,
      sym_type_tag,
    ACTIONS(390), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(388), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [2643] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      anon_sym_LT,
    STATE(43), 1,
      sym_comment,
    STATE(56), 1,
      aux_sym_decl_token_repeat3,
    STATE(163), 1,
      sym_type_tag,
    ACTIONS(328), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(324), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [2695] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(44), 1,
      sym_comment,
    ACTIONS(394), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(392), 30,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
      anon_sym_SQUOTE,
  [2741] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      anon_sym_LT,
    STATE(45), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_decl_op_precedence_repeat2,
    STATE(138), 1,
      sym_type_tag,
    ACTIONS(305), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(303), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [2793] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(320), 1,
      aux_sym_component_token1,
    STATE(28), 1,
      aux_sym_decl_nterm_repeat1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(396), 28,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [2843] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(47), 1,
      sym_comment,
    ACTIONS(402), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(400), 30,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PIPE,
      aux_sym_component_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [2889] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      anon_sym_LT,
    STATE(48), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_decl_nterm_repeat2,
    STATE(53), 1,
      sym_type_tag,
    ACTIONS(406), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(404), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [2941] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(408), 1,
      anon_sym_LT,
    STATE(120), 1,
      sym_type_tag,
    ACTIONS(234), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    STATE(49), 2,
      sym_comment,
      aux_sym_decl_type_repeat2,
    ACTIONS(232), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [2991] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      anon_sym_LT,
    STATE(50), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym_decl_nterm_repeat2,
    STATE(53), 1,
      sym_type_tag,
    ACTIONS(322), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(318), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [3043] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(197), 1,
      anon_sym_LT,
    STATE(49), 1,
      aux_sym_decl_type_repeat2,
    STATE(51), 1,
      sym_comment,
    STATE(120), 1,
      sym_type_tag,
    ACTIONS(413), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(411), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [3095] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(415), 1,
      anon_sym_LT,
    STATE(53), 1,
      sym_type_tag,
    ACTIONS(398), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    STATE(52), 2,
      sym_comment,
      aux_sym_decl_nterm_repeat2,
    ACTIONS(396), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [3145] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(320), 1,
      aux_sym_component_token1,
    STATE(46), 1,
      aux_sym_decl_nterm_repeat1,
    STATE(53), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(418), 28,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [3195] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(54), 1,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(334), 30,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
      anon_sym_SQUOTE,
  [3241] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(197), 1,
      anon_sym_LT,
    STATE(49), 1,
      aux_sym_decl_type_repeat2,
    STATE(55), 1,
      sym_comment,
    STATE(120), 1,
      sym_type_tag,
    ACTIONS(195), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(191), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [3293] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(426), 1,
      anon_sym_LT,
    STATE(163), 1,
      sym_type_tag,
    ACTIONS(424), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    STATE(56), 2,
      sym_comment,
      aux_sym_decl_token_repeat3,
    ACTIONS(422), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [3343] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(429), 1,
      aux_sym_component_token1,
    ACTIONS(252), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    STATE(57), 2,
      sym_comment,
      aux_sym_decl_token_repeat1,
    ACTIONS(250), 28,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [3391] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(432), 1,
      anon_sym_LT,
    STATE(138), 1,
      sym_type_tag,
    ACTIONS(332), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    STATE(58), 2,
      sym_comment,
      aux_sym_decl_op_precedence_repeat2,
    ACTIONS(330), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [3441] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      anon_sym_LT,
    STATE(56), 1,
      aux_sym_decl_token_repeat3,
    STATE(59), 1,
      sym_comment,
    STATE(163), 1,
      sym_type_tag,
    ACTIONS(437), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(435), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [3493] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      anon_sym_LT,
    STATE(58), 1,
      aux_sym_decl_op_precedence_repeat2,
    STATE(60), 1,
      sym_comment,
    STATE(138), 1,
      sym_type_tag,
    ACTIONS(441), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(439), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [3545] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(443), 1,
      aux_sym_component_token1,
    STATE(61), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_decl_token_repeat2,
    ACTIONS(424), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(422), 28,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [3595] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(445), 1,
      aux_sym_component_token1,
    ACTIONS(287), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    STATE(62), 2,
      sym_comment,
      aux_sym_decl_token_repeat2,
    ACTIONS(285), 28,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [3643] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(63), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(285), 29,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [3688] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(64), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(448), 29,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [3733] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(65), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(452), 29,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [3778] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(66), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(211), 29,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [3823] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(67), 1,
      sym_comment,
    ACTIONS(252), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(250), 29,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [3868] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(68), 1,
      sym_comment,
    ACTIONS(209), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(207), 29,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [3913] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(69), 1,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(456), 29,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [3958] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(70), 1,
      sym_comment,
    ACTIONS(462), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(460), 29,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [4003] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(71), 1,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(464), 29,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [4048] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(72), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(468), 29,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [4093] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(73), 1,
      sym_comment,
    ACTIONS(363), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(358), 29,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [4138] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(74), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(472), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [4181] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(75), 1,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(476), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [4224] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(76), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(480), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [4267] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(77), 1,
      sym_comment,
    ACTIONS(486), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(484), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [4310] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(78), 1,
      sym_comment,
    ACTIONS(490), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(488), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [4353] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(79), 1,
      sym_comment,
    ACTIONS(494), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(492), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [4396] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(80), 1,
      sym_comment,
    ACTIONS(498), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(496), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [4439] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(81), 1,
      sym_comment,
    ACTIONS(258), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(254), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [4482] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(500), 1,
      anon_sym_SEMI,
    STATE(82), 1,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(502), 26,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [4527] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(83), 1,
      sym_comment,
    ACTIONS(508), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(506), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [4570] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(84), 1,
      sym_comment,
    ACTIONS(512), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(510), 27,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [4613] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(85), 1,
      sym_comment,
    ACTIONS(514), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(55), 27,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [4656] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(86), 1,
      sym_comment,
    ACTIONS(518), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(516), 27,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [4699] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(87), 1,
      sym_comment,
    ACTIONS(522), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(520), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [4742] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(88), 1,
      sym_comment,
    ACTIONS(526), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(524), 27,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [4785] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(89), 1,
      sym_comment,
    ACTIONS(530), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(528), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [4828] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(90), 1,
      sym_comment,
    ACTIONS(534), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(532), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [4871] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(91), 1,
      sym_comment,
    ACTIONS(538), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(536), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [4914] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(92), 1,
      sym_comment,
    ACTIONS(542), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(540), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [4957] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(93), 1,
      sym_comment,
    ACTIONS(546), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(544), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [5000] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(94), 1,
      sym_comment,
    ACTIONS(550), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(548), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [5043] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(95), 1,
      sym_comment,
    ACTIONS(554), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(552), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [5086] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(96), 1,
      sym_comment,
    ACTIONS(558), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(556), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [5129] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(97), 1,
      sym_comment,
    ACTIONS(562), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(560), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [5172] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(98), 1,
      sym_comment,
    ACTIONS(566), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(564), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [5215] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 1,
      sym_comment,
    ACTIONS(570), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(568), 27,
      anon_sym_SEMI,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [5258] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(100), 1,
      sym_comment,
    ACTIONS(574), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(572), 27,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [5301] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(101), 1,
      sym_comment,
    ACTIONS(578), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(576), 27,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
      aux_sym_component_token1,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [5344] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(102), 1,
      sym_comment,
    ACTIONS(582), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(580), 26,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [5386] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(103), 1,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(502), 26,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [5428] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(104), 1,
      sym_comment,
    ACTIONS(586), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(584), 26,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [5470] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(105), 1,
      sym_comment,
    ACTIONS(588), 2,
      anon_sym_PERCENTtoken,
      anon_sym_PERCENT,
    ACTIONS(123), 26,
      anon_sym_PERCENT_LBRACE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENTtype,
      anon_sym_PERCENTrequire,
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
      anon_sym_PERCENTheader,
      sym_decl_locations,
      anon_sym_PERCENTname_DASHprefix,
      sym_decl_no_lines,
      anon_sym_PERCENToutput,
      sym_decl_pure_parser,
      anon_sym_PERCENTskeleton,
      sym_decl_token_table,
      sym_decl_verbose,
      sym_decl_yacc,
      anon_sym_PERCENTinitial_DASHaction,
      anon_sym_PERCENTparse_DASHparam,
  [5512] = 16,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      aux_sym_component_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    ACTIONS(592), 1,
      anon_sym_PIPE,
    ACTIONS(594), 1,
      anon_sym_LBRACE,
    ACTIONS(596), 1,
      anon_sym_PERCENTmerge,
    STATE(106), 1,
      sym_comment,
    STATE(108), 1,
      aux_sym_grammar_rule_repeat1,
    STATE(113), 1,
      sym_code_block,
    STATE(114), 1,
      sym_grammar_rule_identifier,
    STATE(116), 1,
      sym_component,
    STATE(147), 1,
      aux_sym_grammar_rule_repeat2,
    STATE(121), 4,
      sym_action,
      sym_directive_merge,
      sym_string_literal,
      sym_char_quoted,
    ACTIONS(199), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [5568] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      aux_sym_component_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(594), 1,
      anon_sym_LBRACE,
    ACTIONS(596), 1,
      anon_sym_PERCENTmerge,
    STATE(107), 1,
      sym_comment,
    STATE(108), 1,
      aux_sym_grammar_rule_repeat1,
    STATE(113), 1,
      sym_code_block,
    STATE(114), 1,
      sym_grammar_rule_identifier,
    STATE(116), 1,
      sym_component,
    ACTIONS(598), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
    STATE(121), 4,
      sym_action,
      sym_directive_merge,
      sym_string_literal,
      sym_char_quoted,
    ACTIONS(199), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [5619] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(602), 1,
      aux_sym_component_token1,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
    ACTIONS(608), 1,
      anon_sym_PERCENTmerge,
    ACTIONS(614), 1,
      anon_sym_SQUOTE,
    STATE(113), 1,
      sym_code_block,
    STATE(114), 1,
      sym_grammar_rule_identifier,
    STATE(116), 1,
      sym_component,
    ACTIONS(600), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
    STATE(108), 2,
      sym_comment,
      aux_sym_grammar_rule_repeat1,
    STATE(121), 4,
      sym_action,
      sym_directive_merge,
      sym_string_literal,
      sym_char_quoted,
    ACTIONS(611), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [5668] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      aux_sym_component_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(594), 1,
      anon_sym_LBRACE,
    ACTIONS(596), 1,
      anon_sym_PERCENTmerge,
    ACTIONS(617), 1,
      sym_directive_empty,
    STATE(106), 1,
      aux_sym_grammar_rule_repeat1,
    STATE(109), 1,
      sym_comment,
    STATE(113), 1,
      sym_code_block,
    STATE(114), 1,
      sym_grammar_rule_identifier,
    STATE(115), 1,
      sym_action,
    STATE(116), 1,
      sym_component,
    STATE(121), 3,
      sym_directive_merge,
      sym_string_literal,
      sym_char_quoted,
    ACTIONS(199), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [5720] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      aux_sym_component_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    ACTIONS(594), 1,
      anon_sym_LBRACE,
    ACTIONS(596), 1,
      anon_sym_PERCENTmerge,
    ACTIONS(619), 1,
      sym_directive_empty,
    STATE(107), 1,
      aux_sym_grammar_rule_repeat1,
    STATE(110), 1,
      sym_comment,
    STATE(113), 1,
      sym_code_block,
    STATE(114), 1,
      sym_grammar_rule_identifier,
    STATE(116), 1,
      sym_component,
    STATE(121), 4,
      sym_action,
      sym_directive_merge,
      sym_string_literal,
      sym_char_quoted,
    ACTIONS(199), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [5770] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      aux_sym_component_token1,
    ACTIONS(197), 1,
      anon_sym_LT,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    STATE(9), 1,
      aux_sym_decl_type_repeat1,
    STATE(111), 1,
      sym_comment,
    STATE(119), 1,
      sym_type_tag,
    STATE(24), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_quoted,
    ACTIONS(199), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [5807] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(402), 1,
      aux_sym_component_token1,
    STATE(112), 1,
      sym_comment,
    ACTIONS(400), 11,
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
  [5833] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(623), 1,
      aux_sym_component_token1,
    STATE(113), 1,
      sym_comment,
    ACTIONS(621), 11,
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
  [5859] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(627), 1,
      anon_sym_LBRACK,
    ACTIONS(629), 1,
      aux_sym_component_token1,
    STATE(114), 1,
      sym_comment,
    ACTIONS(625), 10,
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
  [5887] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(629), 1,
      aux_sym_component_token1,
    ACTIONS(631), 1,
      sym_directive_empty,
    STATE(115), 1,
      sym_comment,
    ACTIONS(625), 10,
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
  [5915] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(635), 1,
      aux_sym_component_token1,
    STATE(116), 1,
      sym_comment,
    ACTIONS(633), 10,
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
  [5940] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(639), 1,
      aux_sym_component_token1,
    STATE(117), 1,
      sym_comment,
    ACTIONS(637), 10,
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
  [5965] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(643), 1,
      aux_sym_component_token1,
    STATE(118), 1,
      sym_comment,
    ACTIONS(641), 10,
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
  [5990] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      aux_sym_component_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    STATE(8), 1,
      aux_sym_decl_type_repeat1,
    STATE(119), 1,
      sym_comment,
    STATE(24), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_quoted,
    ACTIONS(199), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [6021] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      aux_sym_component_token1,
    ACTIONS(201), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      aux_sym_decl_type_repeat1,
    STATE(120), 1,
      sym_comment,
    STATE(24), 3,
      sym_string_literal,
      sym_grammar_rule_identifier,
      sym_char_quoted,
    ACTIONS(199), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [6052] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(629), 1,
      aux_sym_component_token1,
    STATE(121), 1,
      sym_comment,
    ACTIONS(625), 10,
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
  [6077] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(394), 1,
      aux_sym_component_token1,
    STATE(122), 1,
      sym_comment,
    ACTIONS(392), 6,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
  [6098] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(645), 1,
      aux_sym_component_token1,
    STATE(123), 1,
      sym_comment,
    STATE(193), 1,
      sym_string_literal,
    ACTIONS(199), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [6121] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(647), 1,
      aux_sym_component_token1,
    STATE(124), 1,
      sym_comment,
    STATE(187), 1,
      sym_string_literal,
    ACTIONS(199), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [6144] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(99), 1,
      sym_string_literal,
    STATE(125), 1,
      sym_comment,
    ACTIONS(199), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [6164] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(590), 1,
      anon_sym_SEMI,
    ACTIONS(592), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    STATE(113), 1,
      sym_code_block,
    STATE(126), 1,
      sym_comment,
    STATE(147), 1,
      aux_sym_grammar_rule_repeat2,
    STATE(148), 1,
      sym_action,
  [6192] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(79), 1,
      sym_string_literal,
    STATE(127), 1,
      sym_comment,
    ACTIONS(199), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [6212] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(592), 1,
      anon_sym_PIPE,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    ACTIONS(651), 1,
      anon_sym_SEMI,
    STATE(113), 1,
      sym_code_block,
    STATE(128), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym_grammar_rule_repeat2,
    STATE(158), 1,
      sym_action,
  [6240] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(83), 1,
      sym_string_literal,
    STATE(129), 1,
      sym_comment,
    ACTIONS(199), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [6260] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(655), 1,
      anon_sym_expect,
    ACTIONS(657), 1,
      anon_sym_expect_DASHrr,
    STATE(130), 1,
      sym_comment,
    ACTIONS(653), 4,
      anon_sym_left,
      anon_sym_right,
      anon_sym_nonassoc,
      anon_sym_precedence,
  [6282] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(295), 1,
      aux_sym_component_token1,
    ACTIONS(299), 1,
      anon_sym_LT,
    ACTIONS(301), 1,
      anon_sym_SQUOTE,
    STATE(25), 1,
      aux_sym_decl_op_precedence_repeat1,
    STATE(35), 1,
      sym_char_quoted,
    STATE(131), 1,
      sym_comment,
    STATE(143), 1,
      sym_type_tag,
  [6310] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(132), 1,
      sym_comment,
    STATE(210), 1,
      sym_string_literal,
    ACTIONS(199), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [6330] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(96), 1,
      sym_string_literal,
    STATE(133), 1,
      sym_comment,
    ACTIONS(199), 5,
      anon_sym_L_DQUOTE,
      anon_sym_u_DQUOTE,
      anon_sym_U_DQUOTE,
      anon_sym_u8_DQUOTE,
      anon_sym_DQUOTE,
  [6350] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    ACTIONS(659), 1,
      anon_sym_DASH,
    STATE(89), 1,
      sym_code_block,
    STATE(134), 1,
      sym_comment,
    STATE(149), 1,
      aux_sym_decl_code_repeat1,
  [6372] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(661), 1,
      aux_sym_component_token1,
    ACTIONS(663), 1,
      anon_sym_STAR,
    ACTIONS(665), 1,
      anon_sym_GT,
    STATE(135), 1,
      sym_comment,
    STATE(209), 1,
      sym_type,
  [6394] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      anon_sym_LT,
    ACTIONS(320), 1,
      aux_sym_component_token1,
    STATE(34), 1,
      aux_sym_decl_nterm_repeat1,
    STATE(136), 1,
      sym_comment,
    STATE(175), 1,
      sym_type_tag,
  [6416] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(320), 1,
      aux_sym_component_token1,
    ACTIONS(667), 1,
      anon_sym_STAR,
    ACTIONS(669), 1,
      anon_sym_GT,
    STATE(28), 1,
      aux_sym_decl_nterm_repeat1,
    STATE(137), 1,
      sym_comment,
  [6438] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(295), 1,
      aux_sym_component_token1,
    ACTIONS(301), 1,
      anon_sym_SQUOTE,
    STATE(31), 1,
      aux_sym_decl_op_precedence_repeat1,
    STATE(35), 1,
      sym_char_quoted,
    STATE(138), 1,
      sym_comment,
  [6460] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(299), 1,
      anon_sym_LT,
    ACTIONS(326), 1,
      aux_sym_component_token1,
    STATE(33), 1,
      aux_sym_decl_token_repeat1,
    STATE(139), 1,
      sym_comment,
    STATE(174), 1,
      sym_type_tag,
  [6482] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(320), 1,
      aux_sym_component_token1,
    ACTIONS(671), 1,
      anon_sym_STAR,
    ACTIONS(673), 1,
      anon_sym_GT,
    STATE(137), 1,
      aux_sym_decl_nterm_repeat1,
    STATE(140), 1,
      sym_comment,
  [6504] = 7,
    ACTIONS(675), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(677), 1,
      aux_sym_prologue_body_token1,
    ACTIONS(679), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(681), 1,
      anon_sym_SLASH_STAR,
    STATE(141), 1,
      sym_comment,
    STATE(156), 1,
      aux_sym_prologue_body_repeat1,
    STATE(201), 1,
      sym_prologue_body,
  [6526] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    ACTIONS(659), 1,
      anon_sym_DASH,
    STATE(80), 1,
      sym_code_block,
    STATE(134), 1,
      aux_sym_decl_code_repeat1,
    STATE(142), 1,
      sym_comment,
  [6548] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(295), 1,
      aux_sym_component_token1,
    ACTIONS(301), 1,
      anon_sym_SQUOTE,
    STATE(26), 1,
      aux_sym_decl_op_precedence_repeat1,
    STATE(35), 1,
      sym_char_quoted,
    STATE(143), 1,
      sym_comment,
  [6570] = 5,
    ACTIONS(679), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(681), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(683), 1,
      anon_sym_PERCENT_RBRACE,
    ACTIONS(685), 1,
      aux_sym_prologue_body_token1,
    STATE(144), 2,
      sym_comment,
      aux_sym_prologue_body_repeat1,
  [6587] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    ACTIONS(688), 1,
      aux_sym_component_token1,
    STATE(93), 1,
      sym_code_block,
    STATE(145), 1,
      sym_comment,
  [6606] = 5,
    ACTIONS(679), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(681), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(690), 1,
      anon_sym_DQUOTE,
    ACTIONS(692), 1,
      aux_sym_string_literal_token1,
    STATE(146), 2,
      sym_comment,
      aux_sym_string_literal_repeat1,
  [6623] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(592), 1,
      anon_sym_PIPE,
    ACTIONS(651), 1,
      anon_sym_SEMI,
    STATE(147), 1,
      sym_comment,
    STATE(159), 1,
      aux_sym_grammar_rule_repeat2,
  [6642] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(592), 1,
      anon_sym_PIPE,
    ACTIONS(651), 1,
      anon_sym_SEMI,
    STATE(148), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym_grammar_rule_repeat2,
  [6661] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(695), 1,
      anon_sym_LBRACE,
    ACTIONS(697), 1,
      anon_sym_DASH,
    STATE(149), 2,
      sym_comment,
      aux_sym_decl_code_repeat1,
  [6678] = 6,
    ACTIONS(679), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(681), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(700), 1,
      anon_sym_DQUOTE,
    ACTIONS(702), 1,
      aux_sym_string_literal_token1,
    STATE(146), 1,
      aux_sym_string_literal_repeat1,
    STATE(150), 1,
      sym_comment,
  [6697] = 6,
    ACTIONS(679), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(681), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(702), 1,
      aux_sym_string_literal_token1,
    ACTIONS(704), 1,
      anon_sym_DQUOTE,
    STATE(150), 1,
      aux_sym_string_literal_repeat1,
    STATE(151), 1,
      sym_comment,
  [6716] = 6,
    ACTIONS(679), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(681), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(702), 1,
      aux_sym_string_literal_token1,
    ACTIONS(706), 1,
      anon_sym_DQUOTE,
    STATE(146), 1,
      aux_sym_string_literal_repeat1,
    STATE(152), 1,
      sym_comment,
  [6735] = 6,
    ACTIONS(679), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(681), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(702), 1,
      aux_sym_string_literal_token1,
    ACTIONS(708), 1,
      anon_sym_DQUOTE,
    STATE(152), 1,
      aux_sym_string_literal_repeat1,
    STATE(153), 1,
      sym_comment,
  [6754] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(592), 1,
      anon_sym_PIPE,
    ACTIONS(710), 1,
      anon_sym_SEMI,
    STATE(154), 1,
      sym_comment,
    STATE(159), 1,
      aux_sym_grammar_rule_repeat2,
  [6773] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(592), 1,
      anon_sym_PIPE,
    ACTIONS(712), 1,
      anon_sym_SEMI,
    STATE(155), 1,
      sym_comment,
    STATE(159), 1,
      aux_sym_grammar_rule_repeat2,
  [6792] = 6,
    ACTIONS(677), 1,
      aux_sym_prologue_body_token1,
    ACTIONS(679), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(681), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(714), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(144), 1,
      aux_sym_prologue_body_repeat1,
    STATE(156), 1,
      sym_comment,
  [6811] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    ACTIONS(716), 1,
      aux_sym_component_token1,
    STATE(92), 1,
      sym_code_block,
    STATE(157), 1,
      sym_comment,
  [6830] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(592), 1,
      anon_sym_PIPE,
    ACTIONS(710), 1,
      anon_sym_SEMI,
    STATE(155), 1,
      aux_sym_grammar_rule_repeat2,
    STATE(158), 1,
      sym_comment,
  [6849] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(598), 1,
      anon_sym_SEMI,
    ACTIONS(718), 1,
      anon_sym_PIPE,
    STATE(159), 2,
      sym_comment,
      aux_sym_grammar_rule_repeat2,
  [6866] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_code_block,
    STATE(160), 1,
      sym_comment,
  [6882] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_code_block,
    STATE(161), 1,
      sym_comment,
  [6898] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(721), 1,
      ts_builtin_sym_end,
    ACTIONS(723), 1,
      anon_sym_PERCENT_PERCENT,
    STATE(162), 1,
      sym_comment,
  [6914] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(443), 1,
      aux_sym_component_token1,
    STATE(61), 1,
      aux_sym_decl_token_repeat2,
    STATE(163), 1,
      sym_comment,
  [6930] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(661), 1,
      aux_sym_component_token1,
    STATE(164), 1,
      sym_comment,
    STATE(190), 1,
      sym_type,
  [6946] = 4,
    ACTIONS(679), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(681), 1,
      anon_sym_SLASH_STAR,
    STATE(165), 1,
      sym_comment,
    ACTIONS(725), 2,
      anon_sym_PERCENT_RBRACE,
      aux_sym_prologue_body_token1,
  [6960] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(166), 1,
      sym_comment,
    ACTIONS(695), 2,
      anon_sym_LBRACE,
      anon_sym_DASH,
  [6974] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_code_block,
    STATE(167), 1,
      sym_comment,
  [6990] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_code_block,
    STATE(168), 1,
      sym_comment,
  [7006] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(661), 1,
      aux_sym_component_token1,
    STATE(169), 1,
      sym_comment,
    STATE(188), 1,
      sym_type,
  [7022] = 5,
    ACTIONS(679), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(681), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(727), 1,
      anon_sym_DQUOTE,
    ACTIONS(729), 1,
      aux_sym_string_literal_token1,
    STATE(170), 1,
      sym_comment,
  [7038] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(171), 1,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_SEMI,
      anon_sym_PIPE,
  [7052] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_code_block,
    STATE(172), 1,
      sym_comment,
  [7068] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(661), 1,
      aux_sym_component_token1,
    STATE(173), 1,
      sym_comment,
    STATE(209), 1,
      sym_type,
  [7084] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(326), 1,
      aux_sym_component_token1,
    STATE(30), 1,
      aux_sym_decl_token_repeat1,
    STATE(174), 1,
      sym_comment,
  [7100] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(320), 1,
      aux_sym_component_token1,
    STATE(29), 1,
      aux_sym_decl_nterm_repeat1,
    STATE(175), 1,
      sym_comment,
  [7116] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(176), 1,
      sym_comment,
    ACTIONS(731), 2,
      anon_sym_opt,
      anon_sym_1,
  [7130] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(649), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_code_block,
    STATE(177), 1,
      sym_comment,
  [7146] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(733), 1,
      ts_builtin_sym_end,
    STATE(178), 1,
      sym_comment,
  [7159] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(735), 1,
      anon_sym_SEMI,
    STATE(179), 1,
      sym_comment,
  [7172] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(737), 1,
      sym_undelimited_code_block,
    STATE(180), 1,
      sym_comment,
  [7185] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(739), 1,
      sym_undelimited_code_block,
    STATE(181), 1,
      sym_comment,
  [7198] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(741), 1,
      aux_sym_decl_expect_token1,
    STATE(182), 1,
      sym_comment,
  [7211] = 4,
    ACTIONS(679), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(681), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(743), 1,
      aux_sym_comment_token2,
    STATE(183), 1,
      sym_comment,
  [7224] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(669), 1,
      anon_sym_GT,
    STATE(184), 1,
      sym_comment,
  [7237] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(745), 1,
      aux_sym_component_token1,
    STATE(185), 1,
      sym_comment,
  [7250] = 4,
    ACTIONS(679), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(681), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(747), 1,
      aux_sym_char_quoted_token1,
    STATE(186), 1,
      sym_comment,
  [7263] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(749), 1,
      anon_sym_RBRACE,
    STATE(187), 1,
      sym_comment,
  [7276] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(751), 1,
      anon_sym_GT,
    STATE(188), 1,
      sym_comment,
  [7289] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(753), 1,
      sym_undelimited_code_block,
    STATE(189), 1,
      sym_comment,
  [7302] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(755), 1,
      anon_sym_GT,
    STATE(190), 1,
      sym_comment,
  [7315] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(757), 1,
      anon_sym_SQUOTE,
    STATE(191), 1,
      sym_comment,
  [7328] = 4,
    ACTIONS(679), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(681), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(759), 1,
      aux_sym_comment_token1,
    STATE(192), 1,
      sym_comment,
  [7341] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(761), 1,
      anon_sym_RBRACE,
    STATE(193), 1,
      sym_comment,
  [7354] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(763), 1,
      aux_sym_component_token1,
    STATE(194), 1,
      sym_comment,
  [7367] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(765), 1,
      anon_sym_RBRACK,
    STATE(195), 1,
      sym_comment,
  [7380] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(767), 1,
      anon_sym_COLON,
    STATE(196), 1,
      sym_comment,
  [7393] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(769), 1,
      anon_sym_GT,
    STATE(197), 1,
      sym_comment,
  [7406] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(771), 1,
      anon_sym_GT,
    STATE(198), 1,
      sym_comment,
  [7419] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(773), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym_comment,
  [7432] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(775), 1,
      aux_sym_component_token1,
    STATE(200), 1,
      sym_comment,
  [7445] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(777), 1,
      anon_sym_PERCENT_RBRACE,
    STATE(201), 1,
      sym_comment,
  [7458] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(779), 1,
      aux_sym_component_token1,
    STATE(202), 1,
      sym_comment,
  [7471] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(781), 1,
      anon_sym_SLASH,
    STATE(203), 1,
      sym_comment,
  [7484] = 4,
    ACTIONS(679), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(681), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(783), 1,
      aux_sym_char_quoted_token1,
    STATE(204), 1,
      sym_comment,
  [7497] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(785), 1,
      ts_builtin_sym_end,
    STATE(205), 1,
      sym_comment,
  [7510] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(787), 1,
      ts_builtin_sym_end,
    STATE(206), 1,
      sym_comment,
  [7523] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(789), 1,
      aux_sym_component_token1,
    STATE(207), 1,
      sym_comment,
  [7536] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(791), 1,
      anon_sym_LT,
    STATE(208), 1,
      sym_comment,
  [7549] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(793), 1,
      anon_sym_GT,
    STATE(209), 1,
      sym_comment,
  [7562] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
    STATE(210), 1,
      sym_comment,
  [7575] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(797), 1,
      anon_sym_SQUOTE,
    STATE(211), 1,
      sym_comment,
  [7588] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(799), 1,
      anon_sym_RBRACE,
    STATE(212), 1,
      sym_comment,
  [7601] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(801), 1,
      ts_builtin_sym_end,
    STATE(213), 1,
      sym_comment,
  [7614] = 1,
    ACTIONS(803), 1,
      ts_builtin_sym_end,
  [7618] = 1,
    ACTIONS(805), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 117,
  [SMALL_STATE(4)] = 232,
  [SMALL_STATE(5)] = 348,
  [SMALL_STATE(6)] = 464,
  [SMALL_STATE(7)] = 575,
  [SMALL_STATE(8)] = 634,
  [SMALL_STATE(9)] = 707,
  [SMALL_STATE(10)] = 780,
  [SMALL_STATE(11)] = 836,
  [SMALL_STATE(12)] = 892,
  [SMALL_STATE(13)] = 948,
  [SMALL_STATE(14)] = 1011,
  [SMALL_STATE(15)] = 1076,
  [SMALL_STATE(16)] = 1140,
  [SMALL_STATE(17)] = 1194,
  [SMALL_STATE(18)] = 1255,
  [SMALL_STATE(19)] = 1320,
  [SMALL_STATE(20)] = 1385,
  [SMALL_STATE(21)] = 1439,
  [SMALL_STATE(22)] = 1497,
  [SMALL_STATE(23)] = 1548,
  [SMALL_STATE(24)] = 1603,
  [SMALL_STATE(25)] = 1654,
  [SMALL_STATE(26)] = 1718,
  [SMALL_STATE(27)] = 1782,
  [SMALL_STATE(28)] = 1835,
  [SMALL_STATE(29)] = 1885,
  [SMALL_STATE(30)] = 1943,
  [SMALL_STATE(31)] = 2001,
  [SMALL_STATE(32)] = 2057,
  [SMALL_STATE(33)] = 2111,
  [SMALL_STATE(34)] = 2169,
  [SMALL_STATE(35)] = 2227,
  [SMALL_STATE(36)] = 2276,
  [SMALL_STATE(37)] = 2329,
  [SMALL_STATE(38)] = 2384,
  [SMALL_STATE(39)] = 2431,
  [SMALL_STATE(40)] = 2486,
  [SMALL_STATE(41)] = 2541,
  [SMALL_STATE(42)] = 2588,
  [SMALL_STATE(43)] = 2643,
  [SMALL_STATE(44)] = 2695,
  [SMALL_STATE(45)] = 2741,
  [SMALL_STATE(46)] = 2793,
  [SMALL_STATE(47)] = 2843,
  [SMALL_STATE(48)] = 2889,
  [SMALL_STATE(49)] = 2941,
  [SMALL_STATE(50)] = 2991,
  [SMALL_STATE(51)] = 3043,
  [SMALL_STATE(52)] = 3095,
  [SMALL_STATE(53)] = 3145,
  [SMALL_STATE(54)] = 3195,
  [SMALL_STATE(55)] = 3241,
  [SMALL_STATE(56)] = 3293,
  [SMALL_STATE(57)] = 3343,
  [SMALL_STATE(58)] = 3391,
  [SMALL_STATE(59)] = 3441,
  [SMALL_STATE(60)] = 3493,
  [SMALL_STATE(61)] = 3545,
  [SMALL_STATE(62)] = 3595,
  [SMALL_STATE(63)] = 3643,
  [SMALL_STATE(64)] = 3688,
  [SMALL_STATE(65)] = 3733,
  [SMALL_STATE(66)] = 3778,
  [SMALL_STATE(67)] = 3823,
  [SMALL_STATE(68)] = 3868,
  [SMALL_STATE(69)] = 3913,
  [SMALL_STATE(70)] = 3958,
  [SMALL_STATE(71)] = 4003,
  [SMALL_STATE(72)] = 4048,
  [SMALL_STATE(73)] = 4093,
  [SMALL_STATE(74)] = 4138,
  [SMALL_STATE(75)] = 4181,
  [SMALL_STATE(76)] = 4224,
  [SMALL_STATE(77)] = 4267,
  [SMALL_STATE(78)] = 4310,
  [SMALL_STATE(79)] = 4353,
  [SMALL_STATE(80)] = 4396,
  [SMALL_STATE(81)] = 4439,
  [SMALL_STATE(82)] = 4482,
  [SMALL_STATE(83)] = 4527,
  [SMALL_STATE(84)] = 4570,
  [SMALL_STATE(85)] = 4613,
  [SMALL_STATE(86)] = 4656,
  [SMALL_STATE(87)] = 4699,
  [SMALL_STATE(88)] = 4742,
  [SMALL_STATE(89)] = 4785,
  [SMALL_STATE(90)] = 4828,
  [SMALL_STATE(91)] = 4871,
  [SMALL_STATE(92)] = 4914,
  [SMALL_STATE(93)] = 4957,
  [SMALL_STATE(94)] = 5000,
  [SMALL_STATE(95)] = 5043,
  [SMALL_STATE(96)] = 5086,
  [SMALL_STATE(97)] = 5129,
  [SMALL_STATE(98)] = 5172,
  [SMALL_STATE(99)] = 5215,
  [SMALL_STATE(100)] = 5258,
  [SMALL_STATE(101)] = 5301,
  [SMALL_STATE(102)] = 5344,
  [SMALL_STATE(103)] = 5386,
  [SMALL_STATE(104)] = 5428,
  [SMALL_STATE(105)] = 5470,
  [SMALL_STATE(106)] = 5512,
  [SMALL_STATE(107)] = 5568,
  [SMALL_STATE(108)] = 5619,
  [SMALL_STATE(109)] = 5668,
  [SMALL_STATE(110)] = 5720,
  [SMALL_STATE(111)] = 5770,
  [SMALL_STATE(112)] = 5807,
  [SMALL_STATE(113)] = 5833,
  [SMALL_STATE(114)] = 5859,
  [SMALL_STATE(115)] = 5887,
  [SMALL_STATE(116)] = 5915,
  [SMALL_STATE(117)] = 5940,
  [SMALL_STATE(118)] = 5965,
  [SMALL_STATE(119)] = 5990,
  [SMALL_STATE(120)] = 6021,
  [SMALL_STATE(121)] = 6052,
  [SMALL_STATE(122)] = 6077,
  [SMALL_STATE(123)] = 6098,
  [SMALL_STATE(124)] = 6121,
  [SMALL_STATE(125)] = 6144,
  [SMALL_STATE(126)] = 6164,
  [SMALL_STATE(127)] = 6192,
  [SMALL_STATE(128)] = 6212,
  [SMALL_STATE(129)] = 6240,
  [SMALL_STATE(130)] = 6260,
  [SMALL_STATE(131)] = 6282,
  [SMALL_STATE(132)] = 6310,
  [SMALL_STATE(133)] = 6330,
  [SMALL_STATE(134)] = 6350,
  [SMALL_STATE(135)] = 6372,
  [SMALL_STATE(136)] = 6394,
  [SMALL_STATE(137)] = 6416,
  [SMALL_STATE(138)] = 6438,
  [SMALL_STATE(139)] = 6460,
  [SMALL_STATE(140)] = 6482,
  [SMALL_STATE(141)] = 6504,
  [SMALL_STATE(142)] = 6526,
  [SMALL_STATE(143)] = 6548,
  [SMALL_STATE(144)] = 6570,
  [SMALL_STATE(145)] = 6587,
  [SMALL_STATE(146)] = 6606,
  [SMALL_STATE(147)] = 6623,
  [SMALL_STATE(148)] = 6642,
  [SMALL_STATE(149)] = 6661,
  [SMALL_STATE(150)] = 6678,
  [SMALL_STATE(151)] = 6697,
  [SMALL_STATE(152)] = 6716,
  [SMALL_STATE(153)] = 6735,
  [SMALL_STATE(154)] = 6754,
  [SMALL_STATE(155)] = 6773,
  [SMALL_STATE(156)] = 6792,
  [SMALL_STATE(157)] = 6811,
  [SMALL_STATE(158)] = 6830,
  [SMALL_STATE(159)] = 6849,
  [SMALL_STATE(160)] = 6866,
  [SMALL_STATE(161)] = 6882,
  [SMALL_STATE(162)] = 6898,
  [SMALL_STATE(163)] = 6914,
  [SMALL_STATE(164)] = 6930,
  [SMALL_STATE(165)] = 6946,
  [SMALL_STATE(166)] = 6960,
  [SMALL_STATE(167)] = 6974,
  [SMALL_STATE(168)] = 6990,
  [SMALL_STATE(169)] = 7006,
  [SMALL_STATE(170)] = 7022,
  [SMALL_STATE(171)] = 7038,
  [SMALL_STATE(172)] = 7052,
  [SMALL_STATE(173)] = 7068,
  [SMALL_STATE(174)] = 7084,
  [SMALL_STATE(175)] = 7100,
  [SMALL_STATE(176)] = 7116,
  [SMALL_STATE(177)] = 7130,
  [SMALL_STATE(178)] = 7146,
  [SMALL_STATE(179)] = 7159,
  [SMALL_STATE(180)] = 7172,
  [SMALL_STATE(181)] = 7185,
  [SMALL_STATE(182)] = 7198,
  [SMALL_STATE(183)] = 7211,
  [SMALL_STATE(184)] = 7224,
  [SMALL_STATE(185)] = 7237,
  [SMALL_STATE(186)] = 7250,
  [SMALL_STATE(187)] = 7263,
  [SMALL_STATE(188)] = 7276,
  [SMALL_STATE(189)] = 7289,
  [SMALL_STATE(190)] = 7302,
  [SMALL_STATE(191)] = 7315,
  [SMALL_STATE(192)] = 7328,
  [SMALL_STATE(193)] = 7341,
  [SMALL_STATE(194)] = 7354,
  [SMALL_STATE(195)] = 7367,
  [SMALL_STATE(196)] = 7380,
  [SMALL_STATE(197)] = 7393,
  [SMALL_STATE(198)] = 7406,
  [SMALL_STATE(199)] = 7419,
  [SMALL_STATE(200)] = 7432,
  [SMALL_STATE(201)] = 7445,
  [SMALL_STATE(202)] = 7458,
  [SMALL_STATE(203)] = 7471,
  [SMALL_STATE(204)] = 7484,
  [SMALL_STATE(205)] = 7497,
  [SMALL_STATE(206)] = 7510,
  [SMALL_STATE(207)] = 7523,
  [SMALL_STATE(208)] = 7536,
  [SMALL_STATE(209)] = 7549,
  [SMALL_STATE(210)] = 7562,
  [SMALL_STATE(211)] = 7575,
  [SMALL_STATE(212)] = 7588,
  [SMALL_STATE(213)] = 7601,
  [SMALL_STATE(214)] = 7614,
  [SMALL_STATE(215)] = 7618,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rules_body, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(7),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(111),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(133),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(139),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(136),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(130),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(172),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(87),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(177),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(161),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(202),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(194),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(145),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(157),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(97),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(27),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(129),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(127),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(125),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(160),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2), SHIFT_REPEAT(168),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(141),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(111),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(133),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(139),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(136),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(130),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(172),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(87),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(177),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(161),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(202),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(194),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(145),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(157),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(97),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(27),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(129),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(127),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(125),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(160),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 2), SHIFT_REPEAT(168),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule_identifier, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule_identifier, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_type, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_type, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_type, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_type, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule_identifier, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule_identifier, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_type_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_decl_type_repeat1, 2), SHIFT_REPEAT(7),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_type_repeat1, 2),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_type_repeat1, 2), SHIFT_REPEAT(153),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_type_repeat1, 2), SHIFT_REPEAT(186),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_type_repeat2, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_type_repeat2, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_token_repeat1, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_token_repeat1, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_quoted, 3),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char_quoted, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_token_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_token_repeat1, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_define, 3),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_define, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_define, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_define, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_define_repeat1, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_define_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_define_repeat1, 2), SHIFT_REPEAT(200),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_token_repeat2, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_token_repeat2, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_token_repeat2, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_token_repeat2, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_type_repeat1, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_type_repeat1, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_op_precedence, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_op_precedence, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_op_precedence, 4),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_op_precedence, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_header, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_header, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_nterm_repeat1, 2),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_nterm_repeat1, 2), SHIFT_REPEAT(41),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_nterm_repeat1, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_nterm, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_nterm, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_token, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_token, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_op_precedence_repeat2, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_op_precedence_repeat2, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_op_precedence_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_op_precedence_repeat1, 2), SHIFT_REPEAT(35),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_op_precedence_repeat1, 2),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_op_precedence_repeat1, 2), SHIFT_REPEAT(204),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_token, 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_token, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_nterm, 2),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_nterm, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_op_precedence_repeat1, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_op_precedence_repeat1, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_destructor_repeat1, 2),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_destructor_repeat1, 2), SHIFT_REPEAT(65),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_destructor_repeat1, 2),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_destructor_repeat1, 2), SHIFT_REPEAT(135),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_printer, 2),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_printer, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_destructor, 2),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_destructor, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_printer, 3),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_printer, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_nterm_repeat1, 1),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_nterm_repeat1, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_destructor, 3),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_destructor, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_tag, 3),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_tag, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_nterm_repeat2, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_nterm_repeat2, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_nterm, 4),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_nterm, 4),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_type_repeat2, 2), SHIFT_REPEAT(164),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_type, 4),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_type, 4),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_nterm_repeat2, 2), SHIFT_REPEAT(173),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_nterm_repeat2, 1),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_nterm_repeat2, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_token_repeat3, 2),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_token_repeat3, 2),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_token_repeat3, 2), SHIFT_REPEAT(173),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_token_repeat1, 2), SHIFT_REPEAT(15),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_op_precedence_repeat2, 2), SHIFT_REPEAT(173),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_token, 4),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_token, 4),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_op_precedence, 5),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_op_precedence, 5),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_token_repeat2, 2), SHIFT_REPEAT(21),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_destructor_repeat1, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_destructor_repeat1, 1),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_destructor_repeat1, 3),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_destructor_repeat1, 3),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_token_repeat1, 3),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_token_repeat1, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_token_repeat2, 3),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_decl_token_repeat2, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_header, 2),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_header, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_define, 6),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_define, 6),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_inial_action, 2),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_inial_action, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_parse_param, 2),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_parse_param, 2),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_union, 3),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_union, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_output, 2),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_output, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_code, 3),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_code, 3),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sections_repeat1, 1),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_name_prefix, 2),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_name_prefix, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 7),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 7),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 4),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 4),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_code, 4),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_code, 4),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_expect, 3),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_expect, 3),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_define, 4),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_define, 4),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_union, 2),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_union, 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_code, 2),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_code, 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_start, 2),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_start, 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_initial_declaration, 2),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_initial_declaration, 2),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_require, 2),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_require, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_debug, 1),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_debug, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_define, 5),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_define, 5),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_skeleton, 2),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_skeleton, 2),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 1),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rules_body_repeat1, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prologue, 2),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prologue, 2),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prologue, 3),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prologue, 3),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sections_repeat1, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat2, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2),
  [602] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 2), SHIFT_REPEAT(7),
  [605] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2), SHIFT_REPEAT(180),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2), SHIFT_REPEAT(208),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2), SHIFT_REPEAT(153),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 2), SHIFT_REPEAT(186),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 1),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_action, 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat1, 1),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_grammar_rule_repeat1, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component, 4),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component, 4),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_merge, 4),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive_merge, 4),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prologue_body_repeat1, 2),
  [685] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_prologue_body_repeat1, 2), SHIFT_REPEAT(165),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(170),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_decl_code_repeat1, 2),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_decl_code_repeat1, 2), SHIFT_REPEAT(207),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prologue_body, 1),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [718] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grammar_rule_repeat2, 2), SHIFT_REPEAT(110),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rules_section, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_prologue_body_repeat1, 1),
  [727] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections, 1),
  [787] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rules_section, 4),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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
