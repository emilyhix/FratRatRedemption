#include "../header/StatManager.hpp"

StatManager::StatManager() {

}

void StatManager::updateStats(PlayerManager& player, npc& currNPC, const int & selectedInteractionOption, const int & dialogueState) {
    string npcName = currNPC.getName();
    string npcType = currNPC.getType();
    string playerType = player.getPlayerType();
    int currRep = player.getPlayerRep();
    int currMor = player.getPlayerMor();
    int currPopularRep = player.getPopularRep();
    int currNormieRep = player.getNormieRep();
    int currOutcastRep = player.getOutcastRep();

    int repGain = 0;
    int morGain = 0;

    // Calculate morality gain
    if ((npcName == "Chad & Thad" && dialogueState == 2) || (npcName == "Bethany" && dialogueState == 2) || (npcName = "Veronica" && dialogueState == 3) || (npcName == "Marcus") || (npcName == "Harper" && dialogueState == 2)) {
        if (selectedInteractionOption == 1 || selectedInteractionOption == 2) {
            morGain = -2;
        }
        else if (selectedInteractionOption == 3 || selectedInteractionOption == 4) {
            morGain = 2;
        }
    }

    // Calaculate reputation gain
    if (playerType == npcType) {
        if (selectedInteractionOption == 1) {
            repGain = 3;
        }
        else if (selectedInteractionOption == 2) {
            repGain = 2;
        }
        else if (selectedInteractionOption == 3) {
            repGain = -1;
        }
        else if (selectedInteractionOption == 4) {
            repGain = -2;
        }
    }
    else {
        if (selectedInteractionOption == 1) {
            repGain = 2;
        }
        else if (selectedInteractionOption == 2) {
            repGain = 1;
        }
        else if (selectedInteractionOption == 3) {
            repGain = -2;
        }
        else if (selectedInteractionOption == 4) {
            repGain = -3;
        }
    }

    // Update stats
    
    player.setPlayerMor(currMor + morGain);

    player.setPlayerRep(currRep + repGain);

    if (npcType == "popular") {
        player.setPopularRep(currPopularRep + repGain);
    }
    else if (npcType == "normie") {
        player.setNormieRep(currNormieRep + repGain);
    }
    else {
        player.setOutcastRep(currOutcastRep + repGain);
    }
}


