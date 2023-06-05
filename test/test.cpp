#include <iostream>
#include <string>
#include "../src/PlayerManager.cpp"

#include <iostream>
#include <string>
using namespace std;

int main(){

    PlayerManager player;

    string testName;
    string testType;

    int testRep;
    int testMor;
    int testPopularRep;
    int testNormieRep;
    int testOutcastRep;

    cin >> testRep;
    cin >> testMor;
    cin >> testPopularRep;
    cin >> testNormieRep;
    cin >> testOutcastRep;

    player.setPlayerRep(testRep);
    player.setPlayerMor(testMor);
    player.setPopularRep(testPopularRep);
    player.setNormieRep(testNormieRep);
    player.setOutcastRep(testOutcastRep);

    cout << endl;
    cout << "Original Rep: " << player.getPlayerRep() << endl;
    cout << 
}