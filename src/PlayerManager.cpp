#include "../header/PlayerManager.hpp"

#include <string>
#include <iostream>

PlayerManager::PlayerManager() {

}

PlayerManager::PlayerManager(string name, string type){
    playerName = name;
    playerType = type;
}

void PlayerManager::setPlayerName() {
    cin >> playerName;
}

string PlayerManager::getPlayerName() {
    return playerName;
}


void PlayerManager::setPlayerType(int chosenNum){
    if(chosenNum == 1){
        playerType = "Popular";
    }
    else if(chosenNum == 2){
        playerType = "Normie";
    }
    else{
        playerType = "Outcast";
    }
}

string PlayerManager::getPlayerType() {
    return playerType;
}

void PlayerManager::setPlayerRep(const int & newReputation) {
    reputation = newReputation;
}


int PlayerManager::getPlayerRep() {
    return reputation;
}

void PlayerManager::setPlayerMor(const int & newMorality) {
    morality = newMorality;
}

int PlayerManager::getPlayerMor() {
    return morality;
}

void PlayerManager::setPopularRep(const int & newPopularRep) {
    popularReputation = newPopularRep;
}

int PlayerManager::getPopularRep() {
    return popularReputation;
}

void PlayerManager::setNormieRep(const int & newNormieRep) {
    normieReputation = newNormieRep;
}

int PlayerManager::getNormieRep() {
    return normieReputation;
}

void PlayerManager::setOutcastRep(const int & newOutcastRep) {
    outcastReputation = newOutcastRep;
}

int PlayerManager::getOutcastRep() {
    return outcastReputation;
}

