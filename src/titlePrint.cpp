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
        cout << read << endl;
    }

    inFS.close();
}