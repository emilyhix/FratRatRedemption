#ifndef __MAPMANAGER_H
#define __MAPMANAGER_H

#include <iostream>
#include "coord.hpp"

using std::cout;

class mapManager{
    private:
        coord mapXY[23][100];
        int currMapMorality; 
        int currMapReputation; 

        int moralityRange; 
        int reputationRange; 

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
        void printMap(const string &) const; 

        void setMapMoralityRange(const int &); 
        void updateMapMorality(const int &); 

        void setMapReputationRange(const int &); 
        void updateMapReputation(const int &); 
};

#endif