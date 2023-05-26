#include <iostream>
#include <fstream>
#include <string> 
#include "mapManager.h"

mapManager::mapManager(){

}

mapManager::~mapManager(){

}

coord mapManager::getXYCoord(const int & xPos, const int & yPos){
    return mapXY[yPos][xPos]; 
}

void mapManager::initializeMap(const string & mapFile){
    ifstream inFS; 
    inFS.open(mapFile); 
    
    string read = ""; 

    for(int y = 0; y < 23; y++){
        getline(inFS,read);
        for(int x = 0; x < read.size(); x++){
            mapXY[y][x].setCoordCharacter(read[x]); 
        }
    }
}

void mapManager::initializePlayer(const int & initialXPos, const int & initialYPos){
    mapXY[initialYPos][initialXPos].setCoordCharacter('@'); 
}

void mapManager::movePlayer(const int & newXPos, const int & newYPos){
    if(mapXY[newYPos][newXPos].getCoordCharacter()==' '){
        mapXY[newYPos][newXPos].setCoordCharacter('@');
    }
}