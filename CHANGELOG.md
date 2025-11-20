# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]

## [0.1.0](https://github.com/lemonadern/tree-sitter-bison/releases/tag/v0.1.0) - 2025-11-20

### Added

- support prec at grammar definition

### Fixed

- allow empty alternatives (RHS may have zero components; `%empty` remains supported)
- allow `=` after `%name-prefix`

### Other

- *(ci)* add release-plz
- add changelog of this fork
- add unicode flag to identifier patterns
- Clarify licensing.
- update tree-sitter to 0.25.10
- update cargo metadata
- Fix some issues in the grammar
- Add two declarations and improve type recognition for C++
- Fix injections file
- Add a test file
- Add informations to the README
- Do not hide "decl_language" node and add an "epilogue" node
- Correct some rules
- Use the alias $.embedded_code
- Handle comments in UNDELIMITED_CODE_BLOCK in the scanner
- Hide $.component and differentiate a grammar rule declaration
- Rename some nodes
- Add error_sentinel token to the grammar and update generated files
- Improve error recovery by adding an error sentinel.
- Put each declaration name in a node
- Hide all decl_* nodes in the syntax tree by adding a leading "_"
- Add a field name to each declaration
- Manage many more cases and declarations
- Add a README
- Add tree-sitter Bison grammar
