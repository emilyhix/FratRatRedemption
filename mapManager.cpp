#include "mapManager.h"

mapManager::mapManager(){

}

mapManager::~mapManager(){

}

coord mapManager::getXYCoord(const int & xPos, const int & yPos){
    return mapXY[xPos][yPos]; 
}

void mapManager::initializeMap(const string & mapFile){

}

    //     coord mapXY[23][100];

    // public:
    //     mapManager();
    //     ~mapManager(); 
    //     coord getXYCoord(const int &, const int &); 
    //     void initializeMap(const string &); 