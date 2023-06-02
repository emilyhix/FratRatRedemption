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
#include "playerManager.h"

// using namespace std::chrono;
// using namespace std::literals::chrono_literals; 
using namespace std; 

#define MOVE_UP 0
#define MOVE_RIGHT 1
#define MOVE_DOWN 2
#define MOVE_LEFT 3


void printBoldText(const std::string& text) {
    std::cout << "\033[1m" << text << "\033[0m";
}

void clearTerminal() {
    // CSI[2J clears screen, CSI[H moves the cursor to top-left corner
    std::cout << "\x1B[2J\x1B[H";
}

int main()
{
    //clearTerminal(); 
    //gameCLOCK class testing
    gameClock mainClock; 
    userInput inputGetter; 
    mapManager map; 
    playerManager player;
    unsigned tcnt = 0; 

    map.initializeMap("map.txt"); 
   map.initializePlayer(player.getXPos(),player.getYPos()); 

    mainClock.timerOn(); 
    mainClock.setTimerPeriod(100); 
    inputGetter.setInputMode(2); 

    char keyboardInput=0;
    //int x = 0; 
    //int y = 0; 
        clearTerminal(); 
        for(int i = 0; i<23;i++){
            for(int j = 0; j <100; j++){
                cout<<map.getXYCoord(j,i).getCoordCharacter(); 
            }
        cout<<"\n";
        }

    while(mainClock.getTimerStatus() == 1){ //MAIN CLOCK
        if(tcnt%1==0){
            keyboardInput = inputGetter.getUserInput(); 
            if(keyboardInput>0){
                map.removePlayer(player.getXPos(),player.getYPos());
                //map.getXYCoord(player.getXPos(),player.getYPos()).playerActiveFalse(); 
            switch(keyboardInput){
                case 'w':
                    //y++;
                    
                    if(map.getXYCoord(player.getXPos(),player.getYPos()-1).getWalkable()){
                        //player.moveUp();
                        player.movePlayerPosition(MOVE_UP);
                    }
                    //player.moveUp();
                    
                break;

                case 'a': 
                    //x--;
                     if(map.getXYCoord(player.getXPos()-1,player.getYPos()).getWalkable()){
                       //player.moveLeft();
                       player.movePlayerPosition(MOVE_LEFT);
                    }
                     //player.moveLeft(); 
                break; 

                case 's':
                    //y--;
                    if(map.getXYCoord(player.getXPos(),player.getYPos()+1).getWalkable()){
                        //player.moveDown();
                        player.movePlayerPosition(MOVE_DOWN);
                    }
                    //player.moveDown();
                break; 

                case 'd':
                    //x++; 
                    if(map.getXYCoord(player.getXPos()+1,player.getYPos()).getWalkable()){
                         //player.moveRight(); 
                         player.movePlayerPosition(MOVE_RIGHT);
                    }
                    //player.moveRight(); 
                break;

                case '0':
                break;

                default:
                break; 
            }

            //cout<< "\033[31m"<<"\rCOORDINATE(x,y): ( "<<x<<" , "<<y<<" )\n"<< "\033[0m"; 
            map.movePlayer(player.getXPos(),player.getYPos());

        //clearTerminal(); 
        clearTerminal(); 
        for(int i = 0; i<23;i++){
            for(int j = 0; j <100; j++){
                if(!map.getXYCoord(j,i).getPlayerActive()){
                    cout<<map.getXYCoord(j,i).getCoordCharacter(); 
                } else {
                    cout<<"@"; 
                }
                 
            }
        cout<<"\n";
        }
        }

        }
        if(keyboardInput==27){
            mainClock.timerOff(); 
        }

        // if(tcnt==100){
        //     cout<<"it has been 10 seconds"<<endl; 
        //     break; 
        // }

       tcnt++; 
        mainClock.timerISR(); 
    }

    inputGetter.setInputMode(0); 

    cout<<"\f\nDONE!\n"; 
    return 0; 
}