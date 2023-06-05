#include <iostream>
#include <string>
#include "../src/npc.cpp"
#include "../src/characterCustomization.cpp"
#include "../src/PlayerManager.cpp"

using namespace std;

int main(){

    playerManager player;
    characterCustom cc;
    cc.createIntro();
    cc.print(player);

    int id;
    cin >> id;
    npc currNPC(id);

    cout << currNPC.getName() << endl;
    cout << currNPC.getType() << endl;

    currNPC.printIntroduction();
    currNPC.printDialogue();

    return 0;

}