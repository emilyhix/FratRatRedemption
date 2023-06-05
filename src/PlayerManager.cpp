#include "../header/PlayerManager.hpp"

void PlayerManager::setPlayerType(string type) {
    playerType = type;
}

void PlayerManager::setPlayerRep(int newReputation) {
    reputation = newReputation;
}


int PlayerManager::getPlayerRep() {
    return reputation;
}

void PlayerManager::setPlayerMor(int newMorality) {
    morality = newMorality;
}

int PlayerManager::getPlayerMor() {
    return morality;
}

void PlayerManager::setPopularRep(int popRep) {
    popularReputation = popRep;
}

int PlayerManager::getPopularRep() {
    return popularReputation;
}

void PlayerManager::setNormieRep(int normieRep) {
    normieReputation = normieRep;
}

int PlayerManager::getNormieRep() {
    return normieReputation;
}

void PlayerManager::setOutcastRep(int outcastRep) {
    outcastReputation = outcastRep;
}

int PlayerManager::getOutcastRep() {
    return outcastReputation;
}