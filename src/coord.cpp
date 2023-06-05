#include <iostream>
#include "../header/coord.hpp"

//Constructor
coord::coord(){
    character = ' '; 
    color = "\033[37m";
    walkable = true; 
    playerActive = false; 
    containsNPC = false; 
}

//Coord Control Functions
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

void coord::toggleContainsNPC(){
    containsNPC = !containsNPC; 
}

bool coord::getContainsNPC() const{
    return containsNPC; 
}