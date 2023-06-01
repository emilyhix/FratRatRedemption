#include "playerManager.h"

//using namespace std;

playerManager::playerManager(){
    xpos = 62; 
    ypos = 5; 
}

int playerManager::getXPos()const{
    return xpos;
}

int playerManager::getYPos()const{
    return ypos; 
}

void playerManager::setXPos(const int & newXPos){
    xpos = newXPos;
}

void playerManager::setYPos(const int & newYPos){
    ypos = newYPos;
}

void playerManager::movePlayerPosition(const int & directionOfMovement){
    switch(directionOfMovement){
        case 0: // up
            ypos--;
        break;

        case 1: // right
            xpos++; 
        break;

        case 2: // down
            ypos++;
        break;

        case 3: // left
            xpos--;
        break;

        default:
        break;
    }
}