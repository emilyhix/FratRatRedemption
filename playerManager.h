#ifndef __PLAYERMANAGER_H
#define __PLAYERMANAGER_H

class playerManager{
    private:
        int xpos; 
        int ypos; 

    public:
        playerManager(); 
        int getXPos() const;
        int getYPos() const;
        void setXPos(const int &);
        void setYPos(const int &); 
        void moveLeft();
        void moveRight();
        void moveUp(); 
        void moveDown(); 

};

#endif