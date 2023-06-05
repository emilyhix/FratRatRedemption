#include <iostream>
#include <chrono>
#include <thread> 

#include "../header/gameClock.hpp"

using namespace std::chrono;
using namespace std::literals::chrono_literals; 
using namespace std::this_thread; 

//Constructor
gameClock::gameClock(){
    timerRun = 1;
    timerPeriod = 100; 
}

//Timer control functions
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

//Interrupt Service Routine: pauses program for *timerPeriod* amount of time (ms)
void gameClock::timerISR(){ 
    sleep_for(milliseconds(timerPeriod));
}