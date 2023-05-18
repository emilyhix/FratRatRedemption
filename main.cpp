#include <iostream>
#include <chrono>
#include <thread> 

#include <cstdlib>

void clearTerminal() {
    std::system("clear"); // Use "clear" command on Unix-like systems
}


#include "gameClock.h"

using namespace std::chrono;
using namespace std::literals::chrono_literals; 
using namespace std; 

int main()
{
    clearTerminal(); 
    //gameCLOCK class testing
    gameClock mainClock; 
    unsigned tcnt = 0; 

    mainClock.timerOn(); 

    while(mainClock.getTimerStatus() == 1){

        if(tcnt==600){
            mainClock.timerOff(); 
        }

        if(tcnt%10==0){
            cout << "\r" << tcnt/10 << flush;
        }

        tcnt++; 

        mainClock.timerISR(); 
    }

    cout<<"\nITS BEEN ONE MINUTE!\n"; 
    return 0; 
}