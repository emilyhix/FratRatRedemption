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

bool coord::operator==(const coord& c) {
    bool result = true;
    if (c.character != this->character) {
        result = false;
    }
    if (c.color != this->color) {
        result = false;
    }
    if (c.walkable != this->walkable) {
        result = false;
    }
    if (c.playerActive != this->playerActive) {
        result = false;
    }
    if (c.containsNPC != this->containsNPC) {
        result = false;
    }
    return result;
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