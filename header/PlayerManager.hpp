#ifndef STATSMANAGER_H
#define PLAYERMANAGER_H
 
using namespace std;

class PlayerManager {
    private:
        int playerType;

        int reputation = 0;
        int morality = 0;
        int popularReputation = 0;
        int normieReputation = 0;
        int outcastReputation = 0;
    
    public:
        void setPlayerType(int);

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