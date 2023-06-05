#include <iostream>
#include <fstream>
#include <string> 
#include "mapManager.h"

#define ANSI_CLEAR_TERMINAL "\x1B[2J\x1B[H"
#define ANSI_DEFAULT_TERMINAL_COLOR "\033[37m"

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

void mapManager::initalizeNPC(const int & npcXPos, const int & npcYPos, const string & npcColor){
    mapXY[npcYPos][npcXPos].toggleContainsNPC(); 
    mapXY[npcYPos][npcXPos].setCoordCharacter('X'); 
    mapXY[npcYPos][npcXPos].setCoordColor(npcColor); 
}

void mapManager::deactivateNPC(const int & npcXPos, const int & npcYPos){
    mapXY[npcYPos][npcXPos].toggleContainsNPC();
}

void mapManager::movePlayer(const int & newXPos, const int & newYPos){
    mapXY[newYPos][newXPos].togglePlayerActive(); 
}

void mapManager::removePlayer(const int & currXPos, const int & currYPos){
        mapXY[currYPos][currXPos].togglePlayerActive(); 
 }

void mapManager::printMap(const string & currentDefaultColor) const{ // WAS TOLD BY GARRET THAT PUTTING PRINT IN HERE IS OK
    std::cout<<ANSI_CLEAR_TERMINAL;
    for(int i = 0; i<23;i++){
        for(int j = 0; j <100; j++){
            if(!mapXY[i][j].getPlayerActive()){
                if(mapXY[i][j].getCoordColor()==ANSI_DEFAULT_TERMINAL_COLOR){
                    std::cout<<mapXY[i][j].getCoordCharacter(); 
                } else {
                    std::cout<<mapXY[i][j].getCoordColor()<<mapXY[i][j].getCoordCharacter()<<currentDefaultColor;
                }
                
            } else {
                if(!mapXY[i][j].getContainsNPC()){
                    std::cout<<"@"; 
                } else {
                    std::cout<<mapXY[i][j].getCoordColor()<<"@"<<currentDefaultColor;
                }
                
            }
            
        }
        std::cout<<"\n";
    }
}