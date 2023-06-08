#ifndef PLAYERCUSTOMIZATION_HPP
#define PLAYERCUSTOMIZATION_HPP
#include <string>
#include "../header/PlayerManager.hpp"
using namespace std;

class playerCustom{
    private:
        string customizationLines[5];
        string playerName;
        string playerType;
    
    public:
        playerCustom();
        void setPlayerName();
        string getPlayerName();
        void setPlayerType();
        string getPlayerType();
        void printCustomizationLine(int);
        void createPlayer(PlayerManager &);
        

};

#endif