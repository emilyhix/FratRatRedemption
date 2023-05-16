#include <iostream>
#include <chrono>
#include <thread> 

#include "gameClock.h"

using namespace std::chrono;
using namespace std::literals::chrono_literals; 
using namespace std; 

int main()
{
    // unsigned tcnt = 0; 
    // while (true) {
    //     if(tcnt%10==0){
    //         cout<<tcnt/10<<"\n";
    //     }
        
    //     tcnt++; 
    //     this_thread::sleep_for(std::chrono::milliseconds(100)); // sleep for 100ms
    // }

    //gameCLOCK class testing
    gameClock mainClock; 
    unsigned tcnt = 0; 

    mainClock.timerOn(); 

    while(mainClock.timerRun == 1){

        if(tcnt==150){
            mainClock.timerOff();
        }

        if(tcnt%10==0){
            cout<<tcnt/10<<"\n"; 
        }

        tcnt++; 

        mainClock.timerISR(); 
    }

    return 0; 
}