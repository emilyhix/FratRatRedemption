#ifndef STATSMANAGER_H
#define STATSMANAGER_H
#include <string>
#include "..header/PlayerManager.hpp"
 
using namespace std;

class StatsManager {

    public:
        void updateStats(PlayerManager& player, int result, string npcType);

};

#endif