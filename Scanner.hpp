#ifndef SCANNER_HPP
#define SCANNER_HPP

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Scanner {

    private:
        string _inputFilePath;
        ifstream _file;

    public:
        Scanner(const string& filePath);

};

#endif