#include "../header/EndingManager.hpp"

EndingManager::EndingManager(int& finalReputation, int& finalMorality, int& finalPopularRep, int& finalNormieRep, int& finalOutcastRep, string playerType) {

    this->finalReputation = finalReputation;
    this->finalMorality = finalMorality;

    // Assigns ending text based on player's final reputation and morality stats
    if (finalMorality < 10) {
        playerResultText = "low morality ending";
    }
    else if (finalPopularRep > finalNormieRep && finalPopularRep > finalOutcastRep) {
        if (playerType == "popular") { 
            playerResultText = "popular-popular";
        }
        else {
            playerResultText = "nonpopular-popular";
        }
    }
    else if (finalNormieRep > finalOutcastRep) {
        if (playerType == "normie") { 
            playerResultText = "normie-normie";
        }
        else {
            playerResultText = "nonnormie-normie";
        }
    }
    else {
        if (playerType == "outcast") { 
            playerResultText = "outcast-outcast";
        }
        else {
            playerResultText = "nonoutcast-outcast";
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