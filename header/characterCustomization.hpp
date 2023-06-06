#ifndef CHARACTERCUSTOMIZATION_HPP
#define CHARACTERCUSTOMIZATION_HPP
#include <string>
#include "../header/PlayerManager.hpp"
using namespace std;

class characterCustom{
    private:
        string customizationLines[5];
    
    public:
        characterCustom();
        void createCharacter(PlayerManager &);

};

#endif