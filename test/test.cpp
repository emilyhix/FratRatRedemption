
#include "../src/EndingManager.cpp"
#include "../src/PlayerManager.cpp"

#include <iostream>
#include <string>

using namespace std;

int main() {

    PlayerManager player;
    string testType;
    int testRep;
    int testMor;
    int testPopularRep;
    int testNormieRep;
    int testOutcastRep;

    cin >> testType;
    cin >> testRep;
    cin >> testMor;
    cin >> testPopularRep;
    cin >> testNormieRep;
    cin >> testOutcastRep;


    EndingManager testEnding(testRep, testMor, testPopularRep, testNormieRep, testOutcastRep, testType);

    testEnding.printEnding();


    playerManager player;
    characterCustom cc;
    cc.createIntro();
    cc.printCCText(player);

    int id;
    cin >> id;
    npc currNPC(id);

    cout << currNPC.getName() << endl;
    cout << currNPC.getType() << endl;

    currNPC.printIntroduction();
    currNPC.printDialogue();

    return 0;

}