#include <iostream>
#include <string>
#include "../src/npc.cpp"

using namespace std;

int main(){

    int id;
    cin >> id;
    npc womp(id);

    cout << womp.getName() << endl;
    cout << womp.getType() << endl;

    womp.printIntroduction();
    womp.printDialogue();

    return 0;

}