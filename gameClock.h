#ifndef __GAMECLOCK_H
#define __GAMECLOCK_H

class gameClock{

    private:
        unsigned timerPeriod; 
        //1 if timer on, 0 if timer off
        bool timerRun;

    public:  
        //Constructor
        gameClock();

        //Timer control functions
        void timerOn(); 
        void timerOff();
        bool getTimerStatus(); 
        void setTimerPeriod(const int &);

        //Interrupt Service Routine (temporarily pauses program)
        void timerISR(); 
        
};

#endif