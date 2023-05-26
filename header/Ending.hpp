#ifndef ENDING_H
#define ENDING_H

#include <vector>
#include <string>
#include "../header/PlayerManager.cpp"
using namespace std;

class Ending {
    private:
        int endingType;
        int endingMorality;
        int endingReputation;

        vector<string> endingText;
        int calculateEnding();

    public:
        Ending(PlayerManager&);
        void printEnding()
};


#endif