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
        EndingManager(int&, int&, int&, int&, int&, string);
        void printEnding();
};


#endif