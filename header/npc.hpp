#ifndef NPC_H
#define NPC_H
#include <string>
#include <iostream>
using namespace std;

class npc {
    private:
        string dialogue[5];
        string responses[4][4];
        string npcType;
        string npcName;
        string introduction;
    public:
        npc(int id);
        string getName();
        string getType();
        void printDialogue();
        void printIntroduction();
};
#endif