#include "../../header/Interaction.hpp"

Interaction::Interaction(npc interactingNPC, playerManager &player, int playerChoice) {
    if (playerChoice == 1) {
        // affect morality or reputation based on some multiplier
        if (interactingNPC.getType() == player.getPlayerType()) {
            // affect morality or reputation based on player type
        }
    }
    if (playerChoice == 2) {
        // affect morality or reputation based on some multiplier
        if (interactingNPC.getType() == player.getPlayerType()) {
            // affect morality or reputation based on player type
        }
    }
    if (playerChoice == 3) {
        // affect morality or reputation based on some multiplier
        if (interactingNPC.getType() == player.getPlayerType()) {
            // affect morality or reputation based on player type
        }
    }
    if (playerChoice == 4) {
        // affect morality or reputation based on some multiplier
        if (interactingNPC.getType() == player.getPlayerType()) {
            // affect morality or reputation based on player type
        }
    }
    // repGain = however much reputation was changed by this interaction
    // moralGain = however much morality was changed by this interaction
}