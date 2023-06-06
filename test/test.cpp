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

    cin >> testName;
    cin >> testType;
    cin >> testRep;
    cin >> testMor;
    cin >> testPopularRep;
    cin >> testNormieRep;
    cin >> testOutcastRep;

    
    player.setPopularRep(testPopularRep);
    player.setNormieRep(testNormieRep);
    player.setOutcastRep(testOutcastRep);

    cout << endl;
    cout << "Name: " << testName << endl;
    cout << "Type: " << testType << endl;
    cout << "Original Reputation: " << player.getPlayerRep() << endl;
    player.setPlayerRep(testRep);
    cout << "Changed Reputation according to input: " << player.getPlayerRep() << endl;
    cout << "Original Morality: " << player.getPlayerMor() << endl;
    player.setPlayerMor(testMor);
    cout << "Changed Morality according to input: " << player.getPlayerMor() << endl;
    cout << "Popular Rep: " << player.getPopularRep() << endl;
    cout << "Normie Rep: " << player.getNormieRep() << endl;
    cout << "Outcast Rep: " << player.getOutcastRep() << endl;
}