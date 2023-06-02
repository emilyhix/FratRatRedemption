#ifndef __PLAYERMANAGER_H
#define __PLAYERMANAGER_H

class playerManager{ //PUT EVERYTHING HERE INTO MAP MANAGER
    private:
        int xpos; 
        int ypos; 

    public:
        playerManager(); 
        int getXPos() const;
        int getYPos() const;
        void setXPos(const int &);
        void setYPos(const int &); 
        void movePlayerPosition(const int &);  

};

#endif