import XCTest
import SwiftTreeSitter
import TreeSitterBison

final class TreeSitterBisonTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_bison())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Bison grammar")
    }
}
