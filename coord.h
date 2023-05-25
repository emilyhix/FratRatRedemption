#ifndef __COORD_H
#define __COORD_H

#include <string>

using namespace std; 

class coord{
    private:
        char character; 
        string color;

    public: 
        coord(); 
        void setCoordColor(const string &); 
        void setCoordCharacter(const char &); 
        char getCoordCharacter();
        string getCoordColor();
};


#endif