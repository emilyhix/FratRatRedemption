#ifndef PLAYERMANAGER_H
#define PLAYERMANAGER_H
#include <string>
using namespace std;

class playerManager {
    private:
        string playerName;
        string playerType;

    public:
        void setPlayerName();
        string getPlayerName();
        void setPlayerType(const int &);
        string getPlayerType();
};

#endif