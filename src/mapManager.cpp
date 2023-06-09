#include <iostream>
#include <fstream>
#include <string> 
#include "../header/mapManager.hpp"
#include "../header/titlePrint.hpp"
using namespace std;

#define ANSI_CLEAR_TERMINAL "\x1B[2J\x1B[H"
#define ANSI_DEFAULT_TERMINAL_COLOR "\033[37m"

mapManager::mapManager(){
    currMapMorality = 0; 
    currMapReputation = 0; 
    moralityRange = 0; 
    reputationRange = 0; 
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

    TitlePrint title;
    title.initializeTitle("./title.txt");
    cout << currentDefaultColor;
    
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

void mapManager::setMapMoralityRange(const int & newRange){
    moralityRange = newRange; 
}

void mapManager::updateMapMorality(const int & newMorality){

    currMapMorality = (85 * newMorality)/moralityRange; 
    for(int i = 20; i >=3; i--){
        for(int j = 79; j < 84; j++){
            mapXY[i][j].setCoordCharacter(' '); 
        }
    }

    if(currMapMorality<=0){
        return;
    } else if (currMapMorality >= 85) {
        currMapMorality = 85; 
    }

    for(int i = 20; i >=3; i-- ){
        if(currMapMorality<=0){
            break; 
        }
        for(int j = 79; j < 84; j++){
            if(currMapMorality<=0){
                break; 
            }
            mapXY[i][j].setCoordCharacter('#');
            mapXY[i][j].setCoordColor("\033[34m"); 
            currMapMorality--; 
        }
    }
}

void mapManager::setMapReputationRange(const int & newRange){
    reputationRange = newRange; 
}

void mapManager::updateMapReputation(const int & newReputation){

    currMapReputation = (85 * newReputation)/reputationRange; 
    for(int i = 20; i >=3; i--){
        for(int j = 89; j < 95; j++){
            mapXY[i][j].setCoordCharacter(' '); 
        }
    }

    if(currMapReputation<=0){
        return;
    } else if (currMapReputation >= 85) {
        currMapReputation = 85; 
    }

    for(int i = 20; i >=3; i-- ){
        if(currMapReputation<=0){
            break; 
        }
        for(int j = 89; j < 94; j++){
            if(currMapReputation<=0){
                break; 
            }
            mapXY[i][j].setCoordCharacter('#');
            mapXY[i][j].setCoordColor("\033[34m"); 
            currMapReputation--; 
        }
    }
}