#include <iostream>
#include "../header/playerCustomization.hpp"
#include "../header/PlayerManager.hpp"
#include <string>

playerCustom::playerCustom(){

    customizationLines[0] = "Welcome to Frat Rat Redemption! It's your first frat party of the year, let's get you started.";
    customizationLines[1] = "First and foremost, what shall we refer to you as?";
    customizationLines[2] = "What a lovely name. What type of person do you think you are?\nAre you popular? Perhaps a normie? Or how about an Outcast?\n (Choose 1-3)";
    customizationLines[3] = "Prepare for your runthrough of Frat Rat Redemption!";
    customizationLines[4] = "TW/CW: Misogyny/Misogynistic characters, very clique-y characters, rude interactions, etc.";

}

void playerCustom::createPlayer(PlayerManager &player){
    cout << customizationLines[0] << endl;
    cout << customizationLines[1] << endl << endl;

    player.setPlayerName();
    cout << endl;

    cout << player.getPlayerName() << ". " << customizationLines[2] << endl;
    cout << "1. Popular" << endl << "2. Normie" << endl << "3. Outcast" << endl << endl;
   
    player.setPlayerType();


    if (player.getPlayerType() == "Outcast"){
        cout << "Oh, so you're an " << player.getPlayerType() << "?" << endl << endl;
    }
    else{
        cout << "Oh, so you're a " << player.getPlayerType() << "?" << endl << endl;
    }
    cout << customizationLines[3] << endl;
    cout << customizationLines[4] << endl;

    bool ready_flag = false;
    while(ready_flag == false){
        cout << "Are you ready? (yes/no)" << endl;
        string answer = "";
        cin >> answer;
        if(answer == "yes"){
            ready_flag = true;
        }
        if(answer == "no"){
            cout << "Come back when you're ready!" << endl;
            cout << "GAME EXITED." << endl;
            exit(0);
        }
    }
}

