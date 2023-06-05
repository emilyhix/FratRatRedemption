#include "../header/playerActor.hpp"

//Constructor
playerActor::playerActor(){
    xpos = 61; 
    ypos = 4; 
}

//Player Actor control functions
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