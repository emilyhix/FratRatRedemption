#ifndef __GAMECLOCK_H
#define __GAMECLOCK_H

class gameClock{

    private:
        unsigned timerPeriod; 
        bool timerRun;
        

    public:  
        bool timerFlag; 
        //bool timerRun; 

        gameClock();
        //~gameClock(); 
        void timerOn();
        void timerOff();
        void setTimerPeriod(const int &); 
        void timerISR(); 
        bool getTimerStatus(); 

};


#endif