#ifndef STATMANAGER_H
#define STATMANAGER_H

#include "../header/PlayerManager.hpp"
#include "../header/npc.hpp"
#include <string>
using namespace std;

class StatManager {
    private:
        
    public:
        StatManager();
        void updateStats(PlayerManager&, string, string, const int &, const int&);
};


#endif