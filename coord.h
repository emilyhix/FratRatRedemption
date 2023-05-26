#ifndef __COORD_H
#define __COORD_H

#include <string>

using std::string; 
using std::ifstream;

class coord{
    private:
        char character; 
        std::string color;

    public: 
        coord(); 
        void setCoordColor(const string &); 
        void setCoordCharacter(const char &); 
        char getCoordCharacter();
        std::string getCoordColor();
        
};


#endif