package tree_sitter_bison_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_bison "github.com/tree-sitter/tree-sitter-bison/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_bison.Language())
	if language == nil {
		t.Errorf("Error loading Bison grammar")
	}
}
