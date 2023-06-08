#ifndef ENDINGMANAGER_H
#define ENDINGMANAGER_H

#include <iostream>
#include <string>
using namespace std;

class EndingManager {
    private:
        int finalReputation;
        int finalMorality;
        string playerResultText;

    public:
        EndingManager();
        EndingManager(const int &, const int &, const int &, const int &, const int &, string);
        void printEnding();
};


#endif