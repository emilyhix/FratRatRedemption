#include <iostream>
#include "../header/characterCustomization.hpp"
#include "../header/PlayerManager.hpp"
#include <string>

void characterCustom::createIntro(){

    customizationLines[0] = "Welcome to Frat Rat Redemption! It's your first frat party of the year, let's get you started.";
    customizationLines[1] = "First and foremost, what shall we refer to you as?";
    customizationLines[2] = "What a lovely name. What type of person do you think you are?\nAre you popular? Perhaps a normie? Or how about an Outcast?";
    customizationLines[3] = "Prepare for your runthrough of Frat Rat Redemption!";
    customizationLines[4] = "TW/CW: Misogyny/Misogynistic characters, very clique-y characters, rude interactions, etc.";

}

void characterCustom::print(playerManager &player){
    
    cout << customizationLines[0] << endl;
    cout << customizationLines[1] << endl << endl;

    player.setPlayerName();
    cout << endl;

    cout << customizationLines[2] << endl;
    cout << "Popular" << endl << "Normie" << endl << "Outcast" << endl << endl;

    player.setPlayerType(1);
    cout << endl;

    cout << customizationLines[3] << endl;
    cout << customizationLines[4] << endl;
}

