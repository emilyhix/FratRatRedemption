#include <iostream>
#include <termios.h>
#include <fcntl.h>
#include <unistd.h>

#include "userInput.h"

//Constructor
userInput::userInput(){
    inputMode = 0; 
    toggleFlush= 0; 
    // Set terminal attributes
    tcgetattr(STDIN_FILENO, &termSettings);
    termSettings.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &termSettings);
} 

//Keyboard input buffer settings
void userInput::setInputMode(const short &newMode){
    inputMode = newMode;

    switch(inputMode){
        case 0: //off
            termSettings.c_lflag |= (ICANON | ECHO);
            tcsetattr(STDIN_FILENO, TCSANOW, &termSettings);
            toggleFlush= 0; 
            flushInputBuffer();
        break;

        case 1: //write
            flags = fcntl(STDIN_FILENO, F_GETFL, 0);
            fcntl(STDIN_FILENO, F_SETFL, flags | O_NONBLOCK);
            toggleFlush= 0; 

        break;

        case 2: //map
            flags = fcntl(STDIN_FILENO, F_GETFL, 0);
            fcntl(STDIN_FILENO, F_SETFL, flags | O_NONBLOCK);
            toggleFlush= 1; 


        default:
        break;
    }
}

void userInput::flushInputBuffer(){
    char c = 0;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

short userInput::getInputMode() const {
    return inputMode; 
}

//Function which gets user input
char userInput::getUserInput(){
    char ch = 0;

    read(STDIN_FILENO, &ch, 1);

    if(toggleFlush){
        flushInputBuffer();
    }
    
    return ch; 
}