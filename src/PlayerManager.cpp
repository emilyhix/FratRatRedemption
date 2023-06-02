#include "../header/PlayerManager.hpp"


PlayerManager::PlayerManager() {

}

PlayerManager::PlayerManager(string name, string type) {
    playerName = name;
    playerType = type;
}

void PlayerManager::setPlayerType(string type) {
    playerType = type;
}

void PlayerManager::setPlayerType(string type) {
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
    return normieReputation;
}

void PlayerManager::setOutcastRep(int outcastRep) {
    outcastReputation = outcastRep;
}

int PlayerManager::getOutcastRep() {
    return outcastReputation;
}