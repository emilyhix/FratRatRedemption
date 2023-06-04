#ifndef __PLAYERACTOR_H
#define __PLAYERACTOR_H

class playerActor{
    private:
        //coordinate positions
        int xpos; 
        int ypos; 

    public:
        //Constructor
        playerActor(); 

        //Player Control Functions
        int getXPos() const;
        int getYPos() const;
        void setXPos(const int &);
        void setYPos(const int &); 
        void movePlayerPosition(const int &);  

};

#endif