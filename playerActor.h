#ifndef __PLAYERACTOR_H
#define __PLAYERACTOR_H

class playerActor{ //PUT EVERYTHING HERE INTO MAP MANAGER
    private:
        int xpos; 
        int ypos; 

    public:
        playerActor(); 
        int getXPos() const;
        int getYPos() const;
        void setXPos(const int &);
        void setYPos(const int &); 
        void movePlayerPosition(const int &);  

};

#endif