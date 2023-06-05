#include "../header/EndingManager.hpp"

EndingManager::EndingManager(int& finalReputation, int& finalMorality, int& finalPopularRep, int& finalNormieRep, int& finalOutcastRep, string playerType) {

    this->finalReputation = finalReputation;
    this->finalMorality = finalMorality;

    // Assigns ending text based on player's final reputation and morality stats
    if (finalMorality < 10) {
        playerResultText = "low morality ending";
    }
    else if ((finalPopularRep < 0) && (finalNormieRep < 0) && (finalOutcastRep < 0)) {
        playerResultText = "";
    }
    else if (finalPopularRep > finalNormieRep && finalPopularRep > finalOutcastRep) {
        if (playerType == "popular") { 
            playerResultText = "";
        }
        else if (playerType == "normie") {
            playerResultText = "";
        }
        else {
            playerResultText = "";
        }
    }
    else if (finalNormieRep > finalOutcastRep) {
        if (playerType == "popular") { 
            playerResultText = "";
        }
        else if (playerType == "normie") {
            playerResultText = "";
        }
        else {
            playerResultText = "";
        }
    }
    else {
        if (playerType == "popular") { 
            playerResultText = "";
        }
        else if (playerType == "normie") {
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