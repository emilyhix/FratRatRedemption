#ifndef STATMANAGER_H
#define STATMANAGER_H

#include "../src/PlayerManager.cpp"
#include "../src/npc.cpp"
#include <string>
using namespace std;

class StatManager {
    private:
        
    public:
        StatManager();
        void updateStats(PlayerManager&, npc&, const int &, const int&);
};


#endif