#include <iostream>
#include <string>
#include "../src/npc.cpp"

using namespace std;

int main(){

    int id;
    cin >> id;
    npc currNPC(id);

    cout << currNPC.getName() << endl;
    cout << currNPC.getType() << endl;

    currNPC.printIntroduction();
    currNPC.printDialogue();

    return 0;

}