# tree-sitter-bison

Bison grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).
Created from the official documentation and from examples.

It also supports embedded languages in grammar files (C, C++, D and Java).

## Known limitations

This parser requires a semicolon between different grammar rules. While not in
official documentation (as far as I know), it seems to be possible in practice
to omit these semicolons.

For instance, while theoretically valid, this parser cannot parse this:

```bison
first_rule: token1 token1

second_rule: token3 token4
```

If you want to use this parser, you will need to add semicolons, like this:

```bison
first_rule: token1 token1
;

second_rule: token3 token4
;
```

## License

- LGPL v3 or later: `grammar.js` and the generated parser artifacts (for
  example the files under `src/` such as `parser.c`, `scanner.c`,
  `grammar.json`, and `node-types.json`).
- GPL v3 or later: Test corpora derived from GNU projects, specifically the
  files in `test/corpus/` such as `complete.txt` and `bash.txt`.
- MIT: The remaining tree-sitter support code and bindings (the contents of
  `bindings/`, language-specific build helpers, and other infrastructure files
  that are not generated from `grammar.js`). These parts follow the `license`
  fields declared in the various package manifests.
