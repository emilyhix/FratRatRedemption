#include "../PlayerManager.hpp"

void PlayerManager::setPlayerType(int type) {
    playerType = type;
}

void PlayerManager::setPlayerRep(int rep) {
    reputation = rep;
}


int PlayerManager::getPlayerRep() {
    return reputation;
}

void PlayerManager::setPlayerMor(int mor) {
    morality = mor;
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
    return normieRep;
}

void PlayerManager::setOutcastRep(int outcastRep) {
    outcastReputation = outcastRep;
}

int PlayerManager::getOutcastRep() {
    return outcastReputation;
}