#include <iostream>
#include <termios.h>
#include <fcntl.h>
#include <unistd.h>

#include "userInput.h"

userInput::userInput(){
    inputMode = 0; 
    flush = 0; 
    // Set terminal attributes
    tcgetattr(STDIN_FILENO, &termSettings);
    termSettings.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &termSettings);
} 

void userInput::setInputMode(const short &newMode){
    inputMode = newMode;

    switch(inputMode){
        case 0: //off
            termSettings.c_lflag |= (ICANON | ECHO);
            tcsetattr(STDIN_FILENO, TCSANOW, &termSettings);
            flush = 0; 
            flushInputBuffer();
        break;

        case 1: //write
            flags = fcntl(STDIN_FILENO, F_GETFL, 0);
            fcntl(STDIN_FILENO, F_SETFL, flags | O_NONBLOCK);
            flush = 0; 

        break;

        case 2: //map
            flags = fcntl(STDIN_FILENO, F_GETFL, 0);
            fcntl(STDIN_FILENO, F_SETFL, flags | O_NONBLOCK);
            flush = 1; 


        default:
        break;
    }
}

short userInput::getInputMode() const {
    return inputMode; 
}

void userInput::flushInputBuffer(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

char userInput::getUserInput(){
    char ch;

    read(STDIN_FILENO, &ch, 1);

    if(flush){
        flushInputBuffer();
    }
    
    return ch; 
}