#ifndef NPC_H
#define NPC_H
#include <string>
using namespace std;

class npc : public characters {
    private:
        string dialog[5];
        string responses[4][4];
        string npcType;
        string npcName;
    public:
     npc(int id);
     string getName();
     string getType();
     void printDialogue();
};
#endif