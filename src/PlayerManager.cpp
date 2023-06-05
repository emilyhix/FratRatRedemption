#include "../header/PlayerManager.hpp"
#include <iostream>
#include <string>

void playerManager::setPlayerName(){
    cin >> playerName;
}

void playerManager::setPlayerType(const int &chosenType){
    if(chosenType == 1){
        playerType = "Popular";
    }
    else if(chosenType == 2){
        playerType = "Normie";
    }
    else if(chosenType == 3){
        playerType = "Outcast";
    }
}

string playerManager::getPlayerName(){
    return playerName;
} 

string playerManager::getPlayerType(){
    return playerType;
}