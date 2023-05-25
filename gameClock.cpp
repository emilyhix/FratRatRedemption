#include <iostream>
#include <chrono>
#include <thread> 

#include "gameClock.h"

using namespace std::chrono;
using namespace std::literals::chrono_literals; 
using namespace std::this_thread; 
using namespace std; 

gameClock::gameClock(){
    timerRun = 1;
    timerFlag = 0; 
    timerPeriod = 100; 
}

void gameClock::timerISR(){ 
    sleep_for(milliseconds(timerPeriod)); // sleep for 100ms
}

void gameClock::timerOn(){
    timerRun = 1; 
}

void gameClock::timerOff(){
    timerRun = 0; 
}

void gameClock::setTimerPeriod(const int &delayMS){
    timerPeriod = delayMS; 
}

bool gameClock::getTimerStatus(){
    return timerRun; 
}