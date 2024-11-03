#include <iostream>
#include <fstream>
#include <string>
#include "Scanner.hpp"


using namespace std;




int main(int argc, char* argv[]) {

    cout << argc << endl;

    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <input_file>" << std::endl;
        return 1;
    }

    std::ifstream inputFile(argv[1]);
    if (!inputFile) {
        std::cerr << "Error opening file: " << argv[1] << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        std::cout << line << std::endl;  // Process each line
    }

    inputFile.close();



    Scanner myScanner;
    return 0;
}