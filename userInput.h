#ifndef __USERINPUT_H
#define __USERINPUT_H

#include <termios.h>
#include <fcntl.h>
#include <unistd.h>

class userInput{
    private:
        short inputMode; //0 = off; 1 = write; 2 = map
        void flushInputBuffer(); 
    
        //TERMIOS VARIABLES
        struct termios termSettings;
        int flags;
        bool toggleFlush; 
        
    public:
        userInput();  
        char getUserInput(); 
        void setInputMode(const short &);
        short getInputMode() const;    
};

#endif