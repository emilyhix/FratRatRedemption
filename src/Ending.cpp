#include "../header/Ending.hpp"

Ending::Ending(PlayerManager &player) {
    endingReputation = player.getReputation();
    endingMorality = player.getMorality();
    
    int endingPopularRep = player.getPopularRep();
    int endingNormieRep = player.getNormieRep();
    int endingOutcastRep = player.getOutcastRep();

    if (endingPopularRep > endingNormieRep && endingPopularRep > endingOutcastRep) {
        endingType = 0;
    }
    else if (endingNormieRep > endingOutcastRep) {
        endingType = 1;
    }
    else {
        endingType = 2;
    }
}

// assign ending id based on either ratio or number of reputation and morality values
int Ending::calculateEnding() {
    
}

void Ending::printEnding() {
    int ending = calculateEnding();

    if (ending == 1) {
        endingText = "";
    }
    // TO UPDATE: continue with same logic for each potential ending

    // print results to terminal
    if (endingType == 0) {
        cout << "You meshed well with the popular crowd!" << endl;
        cout << "Enter description of player traits" << endl;
    }
    else if (endingType == 1) {
        cout << "You meshed well with the normie crowd!" << endl;
        cout << "Enter description of player traits" << endl;
    }    
    else (endingType == 2) {
        cout << "You meshed well with the outcast crowd!" << endl;
        cout << "Enter description of player traits" << endl;
    }

    cout << "STATS" << endl;

    cout << "Reputation: " << endingReputation << "     Morality: " << endingMorality << endl;

    cout << endingText << endl;

}