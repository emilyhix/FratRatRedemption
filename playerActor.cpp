#include "playerActor.h"

//using namespace std;

playerActor::playerActor(){
    xpos = 62; 
    ypos = 5; 
}

int playerActor::getXPos()const{
    return xpos;
}

int playerActor::getYPos()const{
    return ypos; 
}

void playerActor::setXPos(const int & newXPos){
    xpos = newXPos;
}

void playerActor::setYPos(const int & newYPos){
    ypos = newYPos;
}

void playerActor::movePlayerPosition(const int & directionOfMovement){
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