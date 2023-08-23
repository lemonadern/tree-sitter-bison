#include <stdint.h>
#include <tree_sitter/parser.h>
#include <stdio.h>
#include <signal.h>

enum TokenType {
  UNDELIMITED_CODE_BLOCK
};

void *tree_sitter_bison_external_scanner_create() {
    return NULL;
}

void tree_sitter_bison_external_scanner_destroy(void* payload) {
  (void) payload; // Suppress unused argument warning
}

unsigned tree_sitter_bison_external_scanner_serialize(
  void *payload,
  char *buffer
) {
  (void) payload;
  (void) buffer;
  return 0;
}

void tree_sitter_bison_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {
  (void) payload;
  (void) buffer;
  (void) length;
}

/**
   Advance the lexer to the end of the string. It takes in account backslashes.
   When calling, the lookahead must be a quote, and when it ends the lookahead will be
   the caracter just after the closing quote.
 */
void eat_entire_string(TSLexer* lexer) {
  lexer->advance(lexer, false);

  bool backslash_active = false;

  while (!lexer->eof(lexer)) {
	if (!backslash_active && lexer->lookahead == '\"') {
	  lexer->advance(lexer, false);
	  break;
	}
	if (!backslash_active && lexer->lookahead == '\\') {
	  backslash_active = true;
	} else {
	  backslash_active = false;
	}
	lexer->advance(lexer, false);
  }
}


bool tree_sitter_bison_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols) {

  int scope_level = 0;

  lexer->result_symbol = UNDELIMITED_CODE_BLOCK;

  while (!lexer->eof(lexer) && !(scope_level == 0 && lexer->lookahead == '}')) {

	switch (lexer->lookahead) {
	case '\"':
	  eat_entire_string(lexer);
	  continue;
	  break;
	case '{':
	  scope_level++;
	  break;
	case '}':
	  scope_level--;
	  break;
	}

	lexer->advance(lexer, false);

  }

  lexer->mark_end(lexer);

  return true;
}
