#ifndef PARSER_HPP
#define PARSER_HPP

#include <iostream>
#include "Scanner.hpp"

using namespace std;

class Parser {
    public:
        Parser(const string& filePath);

    private:
        const string& _filePath;
        Scanner myScanner;

};

#endif