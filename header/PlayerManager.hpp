#ifndef PLAYERMANAGER_H
#define PLAYERMANAGER_H
 
#include <string>
#include <iostream>
using namespace std;

class PlayerManager {
    private:
        string playerName = "";
        string playerType = "";
        int reputation = 0;
        int morality = 32;
        int popularReputation = 0;
        int normieReputation = 0;
        int outcastReputation = 0;
    
    public:
        PlayerManager();
        PlayerManager(string, string);
        void setPlayerName();
        string getPlayerName();
        void setPlayerType(int);
        string getPlayerType();
        void setPlayerRep(const int &);
        int getPlayerRep();
        void setPlayerMor(const int &);
        int getPlayerMor(); 
        void setPopularRep(const int &);
        int getPopularRep();      
        void setNormieRep(const int &);
        int getNormieRep();
        void setOutcastRep(const int &);
        int getOutcastRep();
};

#endif