#include <iostream>
#include <fstream>
#include <string>
#include "Parser.hpp"


using namespace std;


int main(int argc, char* argv[]) {

    //cout << argc << endl;

    Parser parser(argv[1]);

    system("pause");
    return 0;
}