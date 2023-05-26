#include "playerManager.h"

using namespace std;

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

void playerManager::moveUp(){
    ypos--;
}

void playerManager::moveDown(){
    ypos++;
}

void playerManager::moveLeft(){
    xpos--;
}

void playerManager::moveRight(){
    xpos++; 
}