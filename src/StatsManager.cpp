#include "../header/StatsManager.hpp"

void StatsManager::updateStats(PlayerManager& player, int reputationResult, int moralityResult, string npcType) {
    int successMultiplier = 1;
    int failMultiplier = 2;

    // Update multiplier based on npc/character type
    // TO FIX: player type values based on those used in playerManager class
    if (npcType == "Popular" || npcType == "Alpha Male") {
        if (player.getPlayerType() == 0) {
            successMultiplier = 2;
            failMultiplier = 1;
        }
    }
    else if (npcType == "Normie" && player.getPlayerType() == 1) {
        multiplier = 2;
        failMultiplier = 1;
    }
    else if (npcType == "Outcast" && player.getPlayerType() == 2) {
        multiplier = 2;
        failMultiplier = 1;
    }

    // Update player reputation based on results of npc interaction
    // TO FIX: reputationResult value based on those used in Interaction class
    if (reputationResult == 0) {
        player.setPlayerRep(player.getPlayerRep() - ( 1 * multiplier) ) ;
    }
    else {
        player.setPlayerRep(player.getPlayerRep() + ( 1 * multiplier));
    }

    if (npcType == "Popular" || npcType == "Alpha Male") {
        if (reputationResult == 0) {
            player.setPopularRep(player.getPopularRep() - ( 1 * multiplier) ) ;
        }
        else {
            player.setPopularRep(player.getPopularRep() + ( 1 * multiplier));
        }
    }
    else if (npcType == "Normie") {
         if (reputationResult == 0) {
            player.setNormieRep(player.getNormieRep() - ( 1 * multiplier) ) ;
        }
        else {
            player.setNormieRep(player.getNormieRep() + ( 1 * multiplier));
        }       
    }
    else if (npcType == "Outcast") {
         if (reputationResult == 0) {
            player.setOutcastRep(player.getOutcastRep() - ( 1 * multiplier) ) ;
        }
        else {
            player.setOutcastRep(player.getOucastRep() + ( 1 * multiplier));
        }       
    }

    // Update player morality based on result of npc interaction
    if (moralityResult == 0) {
        player.setPlayerMor(player.getPlayerMor() - 1) ;
    }
    else {
        player.setPlayerMor(player.getPlayerMor() + 1);
    }

}
