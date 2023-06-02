#include <iostream>
#include <fstream>
#include <string> 
#include "mapManager.h"

mapManager::mapManager(){

}

mapManager::~mapManager(){

}

coord mapManager::getXYCoord(const int & xPos, const int & yPos) const{
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
            if(read[x]!=' '){
                mapXY[y][x].toggleWalkable();
            }
        }
    }

    inFS.close(); 
}

void mapManager::initializePlayer(const int & initialXPos, const int & initialYPos){
    mapXY[initialYPos][initialXPos].togglePlayerActive(); 
}

void mapManager::movePlayer(const int & newXPos, const int & newYPos){
    if(mapXY[newYPos][newXPos].getCoordCharacter()==' '){
        mapXY[newYPos][newXPos].togglePlayerActive(); 
    }
}

 void mapManager::removePlayer(const int & currXPos, const int & currYPos){
        mapXY[currYPos][currXPos].togglePlayerActive(); 
 }

 void mapManager::printMap() const{ // WAS TOLD BY GARRET THAT PUTTING PRINT IN HERE IS OK

 }