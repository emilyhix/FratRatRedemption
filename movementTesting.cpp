#include <iostream>
// #include <termios.h>
// #include <fcntl.h>
// #include <unistd.h>
// #include <chrono>
// #include <thread> 
#include <cstdlib>

#include "gameClock.h"
#include "userInput.h"
#include "mapManager.h"
#include "playerActor.h"

using namespace std; 

#define MOVE_UP 0
#define MOVE_RIGHT 1
#define MOVE_DOWN 2
#define MOVE_LEFT 3

#define ANSI_CLEAR_TERMINAL "\x1B[2J\x1B[H"
#define ANSI_DEFAULT_TERMINAL_COLOR "\033[37m"
#define ANSI_RED "\033[31m"
#define ANSI_LIME "\033[38;5;10m"
#define ANSI_ORANGE "\033[38;5;208m"
#define ANSI_GREEN "\033[32m"
#define ANSI_PINK "\033[38;5;205m"
#define ANSI_YELLOW "\033[33m"
#define ANSI_BLUE "\033[34m"
#define ANSI_NAVY_BLUE "\033[38;5;17m"
#define ANSI_LIGHT_BLUE "\033[38;5;39m"
#define ANSI_PURPLE "\033[35m"


void printBoldText(const string& text) {
    cout << "\033[1m" << text << "\033[0m";
}

void clearTerminal() {
    // CSI[2J clears screen, CSI[H moves the cursor to top-left corner
    cout << "\x1B[2J\x1B[H";
}

void interactionOptionAdjust(int & currentOptionSelected, const int & directionInput){ //0 = up, 2 = down
    switch(directionInput){
        case 0:
        currentOptionSelected--;
        break;

        case 2:
        currentOptionSelected++; 
        break; 
    }
    
    if(currentOptionSelected>3){
        currentOptionSelected = 0; 
    } else if (currentOptionSelected < 0){
        currentOptionSelected = 3; 
    }
}

int main()
{
    //SETUP
    gameClock mapClock; 
    gameClock interactionClock; 
    userInput inputGetter; 
    mapManager map; 
    playerActor player;
    unsigned tcnt = 0; 

    bool primaryLoopFlag = 1; 
    int gameMode = 0; //0 == map; 1 == interaction

    map.initializeMap("map.txt"); 
    map.initializePlayer(player.getXPos(),player.getYPos()); 
    map.initalizeNPC(41,14,ANSI_RED);
    map.initalizeNPC(65,10,ANSI_ORANGE);
    map.initalizeNPC(58,16,ANSI_LIGHT_BLUE);
    map.initalizeNPC(48,17,ANSI_GREEN);
    map.initalizeNPC(28,18,ANSI_YELLOW);
    map.initalizeNPC(39,5,ANSI_PINK);
    map.initalizeNPC(9,19,ANSI_LIME);
    map.initalizeNPC(10,11,ANSI_NAVY_BLUE);
    map.initalizeNPC(19,7,ANSI_BLUE);
    map.initalizeNPC(21,12,ANSI_PURPLE);

    mapClock.timerOn(); 
    mapClock.setTimerPeriod(100); 
    inputGetter.setInputMode(2); 

    interactionClock.timerOn();
    interactionClock.setTimerPeriod(50);

    char keyboardInput=0;
    int selectedInteractionOption = 0; 

    //map.printMap(); 

    //PRIMARY LOOP
    while(primaryLoopFlag){
        //map.printMap(); 
        while(gameMode == 0){ //MAP LOOP
            map.printMap();
            keyboardInput = inputGetter.getUserInput(); 
            if(keyboardInput>0){
                map.removePlayer(player.getXPos(),player.getYPos());
                switch(keyboardInput){
                    case 'w':   
                        if(map.getXYCoord(player.getXPos(),player.getYPos()-1).getWalkable()){
                            player.movePlayerPosition(MOVE_UP);
                        }
                        
                    break;

                    case 'a': 
                        if(map.getXYCoord(player.getXPos()-1,player.getYPos()).getWalkable()){
                        player.movePlayerPosition(MOVE_LEFT);
                        }
                    break; 

                    case 's':
                        if(map.getXYCoord(player.getXPos(),player.getYPos()+1).getWalkable()){
                            player.movePlayerPosition(MOVE_DOWN);
                        }
                    break; 

                    case 'd':
                        if(map.getXYCoord(player.getXPos()+1,player.getYPos()).getWalkable()){
                            player.movePlayerPosition(MOVE_RIGHT);
                        }
                    break;

                    default:
                    break; 
                }
                //cout<< "\033[31m"<<"\rCOORDINATE(x,y): ( "<<x<<" , "<<y<<" )\n"<< "\033[0m"; 
                map.movePlayer(player.getXPos(),player.getYPos());
                if(map.getXYCoord(player.getXPos(),player.getYPos()).getContainsNPC()){
                    mapClock.timerOff(); 
                    gameMode = 1;
                }
                //map.printMap(); 
            }

                if(keyboardInput==27){
                    mapClock.timerOff(); 
                    primaryLoopFlag = 0; 
                    break;
                }

                // if(tcnt==100){
                //     cout<<"it has been 10 seconds"<<endl; 
                //     mapClock.timerOff(); 
                //     primaryLoopFlag = 0; 
                //     break;
                // }

            tcnt++; 
            mapClock.timerISR(); 
        } //END OF MAP LOOP


        while(gameMode==1){//INTERACTION LOOP
            map.printMap(); 
            cout<<"CHOOSE OPTION:\nOPTION SELECTED: "<<selectedInteractionOption;
            keyboardInput = inputGetter.getUserInput();
            switch(keyboardInput){
                case 'w':
                    interactionOptionAdjust(selectedInteractionOption,MOVE_UP);
                break;

                case 's':
                    interactionOptionAdjust(selectedInteractionOption,MOVE_DOWN);
                break; 
            }
            if(keyboardInput==10){
                interactionClock.timerOff(); 
                map.deactivateNPC(player.getXPos(),player.getYPos());
                clearTerminal(); 
                gameMode=0; 
                break; 
            }

            if(keyboardInput==27){
                interactionClock.timerOff(); 
                primaryLoopFlag = 0; 
                break;
            }
            //primaryLoopFlag = 0; 
            cout<<"\n"; 
            interactionClock.timerISR(); 
        }
    }

    inputGetter.setInputMode(0); 

    cout<<"\f\nGAME EXITED!\n"; 
    return 0; 
}