#ifndef PLAYERCUSTOMIZATION_HPP
#define PLAYERCUSTOMIZATION_HPP
#include <string>
#include "../header/PlayerManager.hpp"
using namespace std;

class playerCustom{
    private:
        string customizationLines[5];
    
    public:
        playerCustom();
        string getCustomizationLine(int);
        void createPlayer(PlayerManager &);
        

};

#endif