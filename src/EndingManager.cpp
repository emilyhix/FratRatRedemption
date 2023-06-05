#include "../header/EndingManager.hpp"

EndingManager::EndingManager(const int finalReputation, const int finalMorality, const int finalPopularRep, const int finalNormieRep, const int finalOutcastRep, const string playerType) {

    this->finalReputation = finalReputation;
    this->finalMorality = finalMorality;

    // Assigns ending text based on player's final reputation and morality stats
    if (finalMorality < 10) {
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


void EndingManager::printEnding() {

    // Print player's end results to terminal
    cout << "PARTY OVER!\n\n";

    cout << playerResultText << endl;

    cout << "\nSTATS" << endl;

    cout << "Reputation: " << finalReputation << "     Morality: " << finalMorality << endl;

}