# tree-sitter-bison (forked by lemonadern) - Changelog

This changelog tracks changes on this fork.

## Unreleased

- fix: allow `=` after `%name-prefix` (Bison declaration), e.g. `%name-prefix="base_yy"`

## 2025-11-19

- feat: support `%prec` at grammar definitions (enables parsing of precedence
  directives on rule RHS)

## 2025-11-17

- chore: add unicode flag to identifier patterns
- chore: clarify licensing (add MIT text, package includes, per-file license
  map)
- chore: update tree-sitter to 0.25.10

## 2025-11-02

- chore: update cargo metadata
