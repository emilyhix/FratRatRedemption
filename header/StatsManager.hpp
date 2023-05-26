#ifndef STATSMANAGER_H
#define STATSMANAGER_H
#include <string>
#include "..header/PlayerManager.hpp"
 
using namespace std;

class StatsManager {
    private:
        int reputation = 0;
        int popularReputation = 0;
        int normieReputation = 0;
        int outcastReputation = 0;
        int morality = 0;


    public:
        void updateStats(PlayerManager& player, int result, string npcType);

};

#endif