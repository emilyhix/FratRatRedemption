#ifndef __MAPMANAGER_H
#define __MAPMANAGER_H

#include <iostream>
#include "coord.h"

class mapManager{
    private:
        coord mapXY[23][100];

    public:
        mapManager();
        ~mapManager(); 
        coord getXYCoord(const int &, const int &); 
        void initializeMap(const string &); 
};

// class gameClock{

//     private:
//         unsigned timerPeriod; 
//         bool timerRun;
        

//     public:  
//         bool timerFlag; 
//         //bool timerRun; 

//         gameClock();
//         //~gameClock(); 
//         void timerOn();
//         void timerOff();
//         void setTimerPeriod(const int &); 
//         void timerISR(); 
//         bool getTimerStatus(); 

// };


#endif