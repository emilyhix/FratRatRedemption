#include "../header/PlayerManager.hpp"


PlayerManager::PlayerManager() {

}

PlayerManager::PlayerManager(string name, string type) {
    playerName = name;
    playerType = type;
}

void PlayerManager::setPlayerName(string type) {
    playerType = type;
}

string PlayerManager::getPlayerName() {
    return playerName;
}

void PlayerManager::setPlayerType(string type) {
    playerType = type;
}

string PlayerManager::getPlayerType() {
    return playerType;
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

void PlayerManager::setPopularRep(int newPopularRep) {
    popularReputation = newPopularRep;
}

int PlayerManager::getPopularRep() {
    return popularReputation;
}

void PlayerManager::setNormieRep(int newNormieRep) {
    normieReputation = newNormieRep;
}

int PlayerManager::getNormieRep() {
    return normieReputation;
}

void PlayerManager::setOutcastRep(int newOutcastRep) {
    outcastReputation = newOutcastRep;
}

int PlayerManager::getOutcastRep() {
    return outcastReputation;
}