#ifndef NPC_H
#define NPC_H
#include <string>
#include <iostream>
using namespace std;
#include "../header/mapManager.hpp"

class npc {
    private:
        string dialogue[5];
        string responses[4][4];
        string npcType;
        string npcName;
        string introduction;
    public:
        npc(mapManager &map, coord id);
        string getName();
        string getType();
        void printDialogue(int);
        void printIntroduction();
};
#endif