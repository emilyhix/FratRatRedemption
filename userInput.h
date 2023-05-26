#ifndef __USERINPUT_H
#define __USERINPUT_H

#include <termios.h>
#include <fcntl.h>
#include <unistd.h>

class userInput{
    private:
        //Keyboard input buffer settings
        short inputMode; //0 = off; 1 = write; 2 = map
        void flushInputBuffer(); 
    
        //termios library variables
        struct termios termSettings;
        int flags;
        bool toggleFlush; 
        
    public:
        //Constructor
        userInput();

         //keyboard input settings
        void setInputMode(const short &);
        short getInputMode() const;    

        //returns the char of keyboard presses
        char getUserInput(); 

       
};

#endif