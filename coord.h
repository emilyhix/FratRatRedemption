#ifndef __COORD_H
#define __COORD_H

#include <string>

using std::string; 
using std::ifstream;

class coord{
    private:
        char character; 
        std::string color;
        bool walkable; 
        bool playerActive;
        bool containsNPC;

    public: 
        coord(); 
        void setCoordColor(const string &); 
        void setCoordCharacter(const char &); 
        char getCoordCharacter() const;
        std::string getCoordColor() const;
        void toggleWalkable(); 
        bool getWalkable() const; 
        void togglePlayerActive(); 
        bool getPlayerActive() const; 

        void toggleContainsNPC();
        bool getContainsNPC() const; 
};


#endif