#include <iostream>
#include "coord.h"

coord::coord(){
    character = ' '; 
    color = "\033[30m";
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