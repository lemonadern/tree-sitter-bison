/* Bison Grammar Parser

   Copyright (C) 2023 BTuin.

   This file is part of tree-sitter-bison, a Bison grammar for tree-sitter.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU Lesser General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */



const IDENTIFIER = /(\p{XID_Start}|_|\\u[0-9A-Fa-f]{4}|\\U[0-9A-Fa-f]{8})(\p{XID_Continue}|\\u[0-9A-Fa-f]{4}|\\U[0-9A-Fa-f]{8})*/
const RESULT = IDENTIFIER
const CHAR = /[^\n']/
const NONTERMINAL = IDENTIFIER
const TERMINAL = NONTERMINAL

module.exports = grammar({
	name: 'bison',
    extras: $ => [
        /\s/,
        $.comment,
    ],

	externals: $ => [
		// undelimited_code_block manages blocks of code that don't have delimiters. It
		// needs to have a minimal understanding of the syntax to correctly find the
		// closing bracket. It cannot be done here without reimplementing every supported
		// language (C, C++, D, Java), and even then I don't think it would actually work.
		// This is why it is implemented in the external scanner.
		$.undelimited_code_block
	],

	rules: {
		sections : $ =>
			seq (
				repeat(
					choice(
						$.prologue,
						$.declaration)),
				$.grammar_rules_section),

		prologue: $ =>
			seq (
				'%{',
				optional($.prologue_body),
				'%}'),

		prologue_body: $ =>
			repeat1(
				choice(
					token(/([^%\n"]|%[^{}\n]|"([^"\\]|\\.)+")+/))),


		grammar_rules_section: $ =>
			seq(
				'%%',
				$.grammar_rules_body,
				optional(
					seq('%%',
						$.undelimited_code_block))

			),

		grammar_rules_body: $ =>
			repeat1($.grammar_rule),

		grammar_rule: $ =>
			seq(
				RESULT,
				':',
				seq(
					choice(
						$.directive_empty,
						repeat1($.component)),
					repeat(
						seq(
							'|',
							choice(
								$.directive_empty,
								repeat1($.component))))),
				';'
			),

		component: $ =>
			choice(
				IDENTIFIER,
				$.char_quoted,
				$.string_literal,
				$.action,
				$.directive_merge),

		action: $ =>
			seq(
				$.code_block
			),

		declaration: $ =>
			choice(
				$.decl_type,
				$.decl_require,
				$.decl_token,
				$.decl_nterm,
				$.decl_op_precedence,
				$.decl_initial_declaration,
				$.decl_glr_parser,
				$.decl_destructor,
				$.decl_printer,
				$.decl_expect,
				$.decl_start,
				$.decl_define,
				$.decl_code,
				$.decl_union,
				$.decl_debug,
				$.decl_header,
				$.decl_locations),

		decl_type: $ =>
			seq('%type',
				optional($.type_tag),
				repeat1(
					choice(
						IDENTIFIER,
						$.char_quoted,
						$.string_literal)
				),
				repeat(
					seq($.type_tag,
						repeat1(
							choice(IDENTIFIER,
								$.char_quoted,
								$.string_literal))))),

		decl_require: $ =>
			seq(
				'%require',
				$.string_literal),

		decl_token: $ =>
			seq(
				'%token',
				optional($.type_tag),
				repeat1(
					seq(
						IDENTIFIER,
						optional($.number_literal),
						optional($.string))),
				repeat(
					seq(
						$.type_tag,
						repeat1(
							seq(
								IDENTIFIER,
								optional($.number_literal),
								optional($.string_literal)))))),

		decl_nterm: $ =>
			seq(
				'%nterm',
				optional($.type_tag),
				repeat1(IDENTIFIER),
				repeat(
					seq(
						$.type_tag,
						repeat(IDENTIFIER)))),

		decl_op_precedence: $ =>
			seq(
				'%',
				choice(
					'left',
					'right',
					'nonassoc',
					'precedence'
				),
				optional($.type_tag),
				repeat1(
					seq(
						choice(
							IDENTIFIER,
							$.char_quoted),
						optional($.number_literal))
				),
				repeat(
					seq(
						$.type_tag,
						repeat1(
							seq(
								choice(
									IDENTIFIER,
									$.char_quoted),
								optional($.number_literal)))))),

		decl_initial_declaration: $ =>
			seq(
				'%initial-declaration',
				$.code_block),

		decl_glr_parser: $ =>
			token('%glr-parser'),

		decl_destructor: $ =>
			seq(
				'%destructor',
				$.code_block,
				repeat(
					choice(
						$.type_tag,
						seq(
							'<',
							optional('*'),
							'>'),
						IDENTIFIER))),

		decl_printer: $ =>
			seq(
				'%printer',
				$.code_block,
				repeat(
					choice(
						$.type_tag,
						seq('<',
							optional('*'),
						'>'),
						IDENTIFIER))),

		decl_expect: $ =>
			seq(
				'%',
				choice(
					'expect',
					'expect-rr'),
				token(/[0-9]+/)),

		decl_start: $ =>
			seq('%start',
				IDENTIFIER),

		decl_define: $ =>
			seq(
				'%define',
				seq(
					IDENTIFIER,
					repeat(
						seq(
							'.',
							IDENTIFIER))),
				optional(
					choice(
						IDENTIFIER,
						seq('{',
							choice(
								IDENTIFIER,
								$.string_literal),
							'}'),
						$.string_literal))),

		decl_code: $ =>
			seq('%code',
				optional(IDENTIFIER),
				$.code_block
			),

		decl_union: $ =>
			seq('%union',
				optional(IDENTIFIER),
				$.code_block),

		decl_debug: $ =>
			seq('%debug'),

		decl_header: $ =>
			token('%header'),

		decl_locations: $ =>
			token('%locations'),

		directive: $ =>
			choice(
				$.directive_merge,
				$.directive_empty),

		directive_merge: $ =>
			seq(
				'%merge',
				'<',
				IDENTIFIER,
				'>'),

		directive_empty: $ =>
			token('%empty'),

		string: $ =>
			choice(
				$.string_literal,
				seq('_(',
					$.string_literal,
					')')),

		string_literal: $ => seq(
			choice('L"', 'u"', 'U"', 'u8"', '"'),
			repeat(choice(
				alias(token.immediate(prec(1, /[^\\"\n]+/)), $.string_content))),
			'"'),

		// number_literal: extracted from tree-sitter-c
		number_literal: _ => {
			const separator = '\'';
			const hex = /[0-9a-fA-F]/;
			const decimal = /[0-9]/;
			const hexDigits = seq(repeat1(hex), repeat(seq(separator, repeat1(hex))));
			const decimalDigits = seq(repeat1(decimal), repeat(seq(separator, repeat1(decimal))));
			return token(seq(
				optional(/[-\+]/),
				optional(choice(/0[xX]/, /0[bB]/)),
				choice(
					seq(
						choice(
							decimalDigits,
							seq(/0[bB]/, decimalDigits),
							seq(/0[xX]/, hexDigits),
						),
						optional(seq('.', optional(hexDigits))),
					),
					seq('.', decimalDigits),
				),
				optional(seq(
					/[eEpP]/,
					optional(seq(
						optional(/[-\+]/),
						hexDigits,
					)),
				)),
				/[uUlLwWfFbBdD]*/,
			));
			},

		type_tag: $ =>
			seq(
				'<',
				seq(
					seq(
						IDENTIFIER,
						repeat(
							seq(
								'_',
								IDENTIFIER))),
					optional('*')),
				'>'),

		code_block: $ =>
			seq('{',
				$.undelimited_code_block,
				'}'),

		char_quoted: $ =>
			seq(
				'\'',
				CHAR,
				'\''),

		comment: $ =>
			seq(
				'/*',
				/[^*]*\*+([^/*][^*]*\*+)*/,
				'/'),

	}
});
