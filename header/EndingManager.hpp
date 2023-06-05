#ifndef ENDINGMANAGER_H
#define ENDINGMANAGER_H

#include <string>
#include "../src/PlayerManager.cpp"
using namespace std;

class EndingManager {
    private:
        string playerResultText;

    public:
        EndingManager(const int, const int, const int, const int, const int, string);
        void printEnding();
};


#endif