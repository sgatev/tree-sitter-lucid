package tree_sitter_lucid_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-lucid"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_lucid.Language())
	if language == nil {
		t.Errorf("Error loading Lucid grammar")
	}
}
