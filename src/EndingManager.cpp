#include "../header/EndingManager.hpp"

EndingManager::EndingManager(const int finalReputation, const int finalMorality, const int finalPopularRep, const int finalNormieRep, const int finalOutcastRep, const string playerType) {

    if (morality < 10) {
        playerResultText = "";
    }
    else if (finalPopularRep > finalNormieRep && finalPopularRep > finalOutcastRep) {
        if (playerType == "popular") { 
            playerResultText = "";
        }
        else {
            playerResultText = "";
        }
    }
    else if (finalNormieRep > finalOutcastRep) {
        if (playerType == "normie") { 
            playerResultText = "";
        }
        else {
            playerResultText = "";
        }
    }
    else {
        if (playerType == "outcast") { 
            playerResultText = "";
        }
        else {
            playerResultText = "";
        }      
    } 
}


void Ending::printEnding() {

    // print player's end results to terminal
    cout << "PARTY OVER!\n\n";

    cout << playerResultText << endl;

    cout << "\nSTATS" << endl;

    cout << "Reputation: " << endingReputation << "     Morality: " << endingMorality << endl;

}