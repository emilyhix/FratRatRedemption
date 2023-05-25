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


#include "gameClock.h"
#include "userInput.h"

using namespace std::chrono;
using namespace std::literals::chrono_literals; 
using namespace std; 

int main()
{
    clearTerminal(); 
    //gameCLOCK class testing
    gameClock mainClock; 
    userInput x; 
    unsigned tcnt = 0; 

    mainClock.timerOn(); 
    mainClock.setTimerPeriod(10); 
    x.setInputMode(1); 


    char ch;

    while(mainClock.getTimerStatus() == 1){ //MAIN CLOCK

        ch = x.getUserInput(); 
         if (ch > 0) {
            if(ch == 27){
                break; 
            }
            // Process the key press
            cout << "Key pressed: " << ch << std::endl;
        }

        

        if(tcnt==12000){
            mainClock.timerOff(); 
        }

        if(tcnt%10==0){
            //cout << "\r" << tcnt/10 << flush;
        }

        tcnt++; 

        mainClock.timerISR(); 
    }

    x.setInputMode(0); 

    cout<<"\nDONE!\n"; 
    return 0; 
}