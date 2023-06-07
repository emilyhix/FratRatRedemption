#include "../header/StatManager.hpp"

StatManager::StatManager() {

}

void StatManager::updateStats(PlayerManager& player, string npcName, string npcType, const int & selectedInteractionOption, const int & dialogueState) {

    string playerType = player.getPlayerType();
    int currRep = player.getPlayerRep();
    int currMor = player.getPlayerMor();
    int currPopularRep = player.getPopularRep();
    int currNormieRep = player.getNormieRep();
    int currOutcastRep = player.getOutcastRep();

    int repGain = 0;
    int morGain = 0;

    // Calculate morality gain
    if ((npcName == "Chad & Thad" && dialogueState == 2) || (npcName == "Bethany" && dialogueState == 2) || (npcName == "Veronica" && dialogueState == 3) || (npcName == "Marcus") || (npcName == "Harper" && dialogueState == 2)) {
        if (selectedInteractionOption == 0 || selectedInteractionOption == 1) {
            morGain = -4;
        }
        else if (selectedInteractionOption == 2 || selectedInteractionOption == 3) {
            morGain = 4;
        }
    }

    // Calaculate reputation gain
    if (playerType == npcType) {
        if (selectedInteractionOption == 0) {
            repGain = 3;
        }
        else if (selectedInteractionOption == 1) {
            repGain = 2;
        }
        else if (selectedInteractionOption == 2) {
            repGain = -1;
        }
        else if (selectedInteractionOption == 3) {
            repGain = -2;
        }
    }
    else {
        if (selectedInteractionOption == 0) {
            repGain = 2;
        }
        else if (selectedInteractionOption == 1) {
            repGain = 1;
        }
        else if (selectedInteractionOption == 2) {
            repGain = -2;
        }
        else if (selectedInteractionOption == 3) {
            repGain = -3;
        }
    }

    // Update stats

    player.setPlayerMor(currMor + morGain);

    player.setPlayerRep(currRep + repGain);

    if (npcType == "Popular") {
        player.setPopularRep(currPopularRep + repGain);
    }
    else if (npcType == "Normie") {
        player.setNormieRep(currNormieRep + repGain);
    }
    else if (npcType == "Outcast") {
        player.setOutcastRep(currOutcastRep + repGain);
    }
}

