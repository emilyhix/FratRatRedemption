#ifndef PLAYERMANAGER_H
#define PLAYERMANAGER_H
 
#include <string>
using namespace std;

class PlayerManager {
    private:
        string playerName = "";
        string playerType = "";
        int reputation = 0;
        int morality = 17;
        int popularReputation = 0;
        int normieReputation = 0;
        int outcastReputation = 0;
    
    public:
        PlayerManager();
        PlayerManager(string, string);
        void setPlayerName(string);
        string getPlayerName();
        void setPlayerType(const int &);
        string getPlayerType();
        void setPlayerRep(int);
        int getPlayerRep();
        void setPlayerMor(int);
        int getPlayerMor(); 
        void setPopularRep(int);
        int getPopularRep();      
        void setNormieRep(int);
        int getNormieRep();
        void setOutcastRep(int);
        int getOutcastRep();
};

#endif