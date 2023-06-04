#ifndef __MAPMANAGER_H
#define __MAPMANAGER_H

#include <iostream>
#include "coord.h"

using std::cout;

class mapManager{
    private:
        coord mapXY[23][100];

    public:
        mapManager();
        ~mapManager(); 
        coord getXYCoord(const int &, const int &) const; 
        void initializeMap(const string &); 
        void initializePlayer(const int &, const int &); 
        void movePlayer(const int &, const int &); 
        void removePlayer(const int &, const int &); 
        void initalizeNPC(const int &, const int &, const string &);
        void deactivateNPC(const int &, const int &); 
        void printMap() const; 
};

#endif