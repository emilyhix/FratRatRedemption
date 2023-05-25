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


#include "gameClock.h"
#include "userInput.h"

using namespace std::chrono;
using namespace std::literals::chrono_literals; 
using namespace std; 

int main()
{
    //clearTerminal(); 
    //gameCLOCK class testing
    gameClock mainClock; 
    userInput inputGetter; 
    unsigned tcnt = 0; 

    mainClock.timerOn(); 
    mainClock.setTimerPeriod(100); 
    inputGetter.setInputMode(2); 

    char keyboardInput=0;
    int x = 0; 
    int y = 0; 

    while(mainClock.getTimerStatus() == 1){ //MAIN CLOCK
        if(tcnt%5==0){
            keyboardInput = inputGetter.getUserInput(); 
            if(keyboardInput>0){
            switch(keyboardInput){
                case 'w':
                    y++;
                break;

                case 'a': 
                    x--;
                break; 

                case 's':
                    y--;
                break; 

                case 'd':
                    x++; 
                break;

                case '0':
                break;

                default:
                break; 
            }
            //clearTerminal(); 
            cout<< "\033[31m"<<"\rCOORDINATE(x,y): ( "<<x<<" , "<<y<<" )\n"<< "\033[0m"; 
        }

        }
        if(keyboardInput=='0'){
            mainClock.timerOff(); 
        }
       tcnt++; 
        mainClock.timerISR(); 
    }

    inputGetter.setInputMode(0); 

    cout<<"\nDONE!\n"; 
    return 0; 
}