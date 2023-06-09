#include <iostream>
#include "../header/playerCustomization.hpp"
#include "../header/PlayerManager.hpp"
#include <string>
#include <stdlib.h>

playerCustom::playerCustom(){

    customizationLines[0] = "Welcome to Frat Rat Redemption! It's your first frat party of the year, let's get you started.";
    customizationLines[1] = "First and foremost, how shall we refer to you?";
    customizationLines[2] = "What a lovely name. What type of person do you think you are?\nAre you popular? Perhaps a normie? Or how about an Outcast?\n(Choose 1-3)";
    customizationLines[3] = "Prepare for your runthrough of Frat Rat Redemption!";
    customizationLines[4] = "TW/CW: Misogyny/Misogynistic characters, very clique-y characters, rude interactions, etc.";

}

string playerCustom::getCustomizationLine(int num){
    return customizationLines[num];
}

void playerCustom::createPlayer(PlayerManager &player){
    cout << getCustomizationLine(0) << endl;
    cout << getCustomizationLine(1) << endl;

    player.setPlayerName();
    cout << endl;

    cout << player.getPlayerName() << ". ";
    cout << getCustomizationLine(2) << endl << endl;
    cout << "1. Popular" << endl << "2. Normie" << endl << "3. Outcast" << endl << endl;

    bool validType = false;
    char chosenNum[10] = "";
    char *end;
    double realNum = 0;

    while(validType == false){
        chosenNum[0] = '\0';
        cin >> chosenNum;
        realNum = strtod(chosenNum, &end);
        if(realNum > 0 && realNum < 4){
            player.setPlayerType(realNum);
            validType = true;
        }
        else if(!(realNum > 0 && realNum < 4)){
            cout << "INVALID TYPE SELECTED." << endl << endl;
            validType = false;
        }
    }

    if (player.getPlayerType() == "Outcast"){
        cout << "Oh, so you're an " << player.getPlayerType() << "?" << endl << endl;
    }
    else{
        cout << "Oh, so you're a " << player.getPlayerType() << "?" << endl << endl;
    }

    cout << getCustomizationLine(3) << endl;
    cout << getCustomizationLine(4) << endl;

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
