#include <iostream>
#include "coord.h"

coord::coord(){
    character = ' '; 
    color = "\033[30m";
    walkable = true; 
    playerActive = false; 
}

void coord::setCoordCharacter(const char & newChar){
    character = newChar; 
}

void coord::setCoordColor(const string & newColor){
    color = newColor; 
}

char coord::getCoordCharacter()const{
    return character; 
}

string coord::getCoordColor()const{
    return color; 
}

void coord::toggleWalkable(){
    walkable = !walkable;
}

bool coord::getWalkable() const{
    return walkable; 
}

void coord::togglePlayerActive(){
    playerActive = !playerActive;
}

bool coord::getPlayerActive() const{
    return playerActive; 
}