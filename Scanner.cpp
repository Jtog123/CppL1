#include "Scanner.hpp"

Scanner::Scanner(const string& filePath): _inputFilePath(filePath) {
            cout << "Scanner Initialized" << endl;
            _file.open(_inputFilePath);
        }

