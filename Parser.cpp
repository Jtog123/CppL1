#include "Parser.hpp"

Parser::Parser(const string& filePath) : 
                _filePath(filePath), myScanner(_filePath) {
                    cout << "Parser initialized" << endl;
                }