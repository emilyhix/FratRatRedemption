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

int main()
{
    //SETUP
    gameClock mainClock; 
    userInput inputGetter; 
    mapManager map; 
    playerActor player;
    unsigned tcnt = 0; 

    bool primaryLoopFlag = 1; 
    int gameMode = 0;

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

    mainClock.timerOn(); 
    mainClock.setTimerPeriod(100); 
    inputGetter.setInputMode(2); 

    char keyboardInput=0;

    map.printMap(); 

    //PRIMARY LOOP
    while(primaryLoopFlag){
        while(mainClock.getTimerStatus() == 1){ //MAP LOOP
                if(tcnt%1==0){
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
                        map.printMap(); 
                    }

                }
                if(keyboardInput==27){
                    mainClock.timerOff(); 
                    primaryLoopFlag = 0; 
                    break;
                }

                // if(tcnt==100){
                //     cout<<"it has been 10 seconds"<<endl; 
                //     mainClock.timerOff(); 
                //     primaryLoopFlag = 0; 
                //     break;
                // }

            tcnt++; 
            mainClock.timerISR(); 
        } //END OF MAP LOOP


        while(1){//INTERACTION LOOP

        }
    }

    inputGetter.setInputMode(0); 

    cout<<"\f\nDONE!\n"; 
    return 0; 
}