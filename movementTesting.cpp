#include <iostream>
#include <termios.h>
#include <fcntl.h>
#include <unistd.h>
#include <chrono>
#include <thread> 

#include <cstdlib>

void clearTerminal() {
    std::system("clear"); // Use "clear" command on Unix-like systems
}

void printBoldText(const std::string& text) {
    std::cout << "\033[1m" << text << "\033[0m";
}

void clear() {
    // CSI[2J clears screen, CSI[H moves the cursor to top-left corner
    std::cout << "\x1B[2J\x1B[H";
}


#include "gameClock.h"
#include "userInput.h"
#include "mapManager.h"
#include "playerManager.h"

using namespace std::chrono;
using namespace std::literals::chrono_literals; 
using namespace std; 

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

    while(mainClock.getTimerStatus() == 1){ //MAIN CLOCK
        if(tcnt%1==0){
            keyboardInput = inputGetter.getUserInput(); 
            if(keyboardInput>0){
            switch(keyboardInput){
                case 'w':
                    //y++;
                    player.moveUp();
                break;

                case 'a': 
                    //x--;
                    player.moveLeft();
                break; 

                case 's':
                    //y--;
                    player.moveDown();
                break; 

                case 'd':
                    //x++; 
                    player.moveRight(); 
                break;

                case '0':
                break;

                default:
                break; 
            }

            //cout<< "\033[31m"<<"\rCOORDINATE(x,y): ( "<<x<<" , "<<y<<" )\n"<< "\033[0m"; 
            map.movePlayer(player.getXPos(),player.getYPos());

        //clearTerminal(); 
        clear(); 
        for(int i = 0; i<23;i++){
            for(int j = 0; j <100; j++){
                cout<<map.getXYCoord(j,i).getCoordCharacter(); 
            }
        cout<<"\n";
        }
        }

        }
        if(keyboardInput==27){
            mainClock.timerOff(); 
        }

        if(tcnt==100){
            cout<<"it has been 10 seconds"<<endl; 
            break; 
        }

       tcnt++; 
        mainClock.timerISR(); 
    }

    inputGetter.setInputMode(0); 

    cout<<"\f\nDONE!\n"; 
    return 0; 
}