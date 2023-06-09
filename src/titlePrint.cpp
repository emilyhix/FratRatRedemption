#include "../header/titlePrint.hpp"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

void TitlePrint::initializeTitle(const string & titleFile) {
    ifstream inFS;
    inFS.open(titleFile);
    string read;
    while (inFS) {
        getline(inFS, read);
        cout << "\033[34m"; 
        cout << read;
        cout << "\033[0m" << endl;
    }

    inFS.close();
}
