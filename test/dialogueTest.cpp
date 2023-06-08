#include <gtest/gtest.h>
#include <string>
#include "../header/npc.hpp"
#include "../header/mapManager.hpp"
#include "../header/coord.hpp"

TEST(NPC_Dialogue, ChadAndThad){
    mapManager map;
    #define ANSI_NAVY_BLUE "\033[38;5;17m"
    map.initalizeNPC(10,11,ANSI_NAVY_BLUE);
    npc curr(map, map.getXYCoord(10,11));

    EXPECT_NO_THROW(curr.printDialogue(0));
    EXPECT_NO_THROW(curr.printDialogue(1));
    EXPECT_NO_THROW(curr.printDialogue(2));
    EXPECT_NO_THROW(curr.printDialogue(3));
}

TEST(NPC_Dialogue, Bethany){
    mapManager map;
    #define ANSI_PINK "\033[38;5;205m"
    map.initalizeNPC(39,5,ANSI_PINK);
    npc curr(map, map.getXYCoord(39, 5));
    
    EXPECT_NO_THROW(curr.printDialogue(0));
    EXPECT_NO_THROW(curr.printDialogue(1));
    EXPECT_NO_THROW(curr.printDialogue(2));
    EXPECT_NO_THROW(curr.printDialogue(3));
}

TEST(NPC_Dialogue, Veronica){
    mapManager map;
    #define ANSI_PURPLE "\033[35m"
    map.initalizeNPC(21,12,ANSI_PURPLE);
    npc curr(map, map.getXYCoord(21, 12));

    EXPECT_NO_THROW(curr.printDialogue(0));
    EXPECT_NO_THROW(curr.printDialogue(1));
    EXPECT_NO_THROW(curr.printDialogue(2));
    EXPECT_NO_THROW(curr.printDialogue(3));
}

TEST(NPC_Dialogue, Denzel){
    mapManager map;
    #define ANSI_BLUE "\033[34m"
    map.initalizeNPC(19,7,ANSI_BLUE);
    npc curr(map, map.getXYCoord(19, 7));

    EXPECT_NO_THROW(curr.printDialogue(0));
    EXPECT_NO_THROW(curr.printDialogue(1));
    EXPECT_NO_THROW(curr.printDialogue(2));
    EXPECT_NO_THROW(curr.printDialogue(3));
}

TEST(NPC_Dialogue, Marcus){
    mapManager map;
    #define ANSI_BLUE "\033[34m"
    map.initalizeNPC(19,7,ANSI_BLUE);
    npc curr(map, map.getXYCoord(19, 7));

    EXPECT_NO_THROW(curr.printDialogue(0));
    EXPECT_NO_THROW(curr.printDialogue(1));
    EXPECT_NO_THROW(curr.printDialogue(2));
    EXPECT_NO_THROW(curr.printDialogue(3));
}

TEST(NPC_Dialogue, Cloud){
    mapManager map;
    #define ANSI_LIGHT_BLUE "\033[38;5;39m"
    map.initalizeNPC(58,16,ANSI_LIGHT_BLUE);
    npc curr(map, map.getXYCoord(58, 16));

    EXPECT_NO_THROW(curr.printDialogue(0));
    EXPECT_NO_THROW(curr.printDialogue(1));
    EXPECT_NO_THROW(curr.printDialogue(2));
    EXPECT_NO_THROW(curr.printDialogue(3));
}

TEST(NPC_Dialogue, Christina){
    mapManager map;
    #define ANSI_YELLOW "\033[33m"
    map.initalizeNPC(28,18,ANSI_YELLOW);
    npc curr(map, map.getXYCoord(28, 18));

    EXPECT_NO_THROW(curr.printDialogue(0));
    EXPECT_NO_THROW(curr.printDialogue(1));
    EXPECT_NO_THROW(curr.printDialogue(2));
    EXPECT_NO_THROW(curr.printDialogue(3));
}

TEST(NPC_Dialogue, Trevor){
    mapManager map;
    #define ANSI_LIME "\033[38;5;10m"
    map.initalizeNPC(9,19,ANSI_LIME);
    npc curr(map, map.getXYCoord(9, 19));

    EXPECT_NO_THROW(curr.printDialogue(0));
    EXPECT_NO_THROW(curr.printDialogue(1));
    EXPECT_NO_THROW(curr.printDialogue(2));
    EXPECT_NO_THROW(curr.printDialogue(3));
}

TEST(NPC_Dialogue, Harper){
    mapManager map;
    #define ANSI_GREEN "\033[32m"
    map.initalizeNPC(48,17,ANSI_GREEN);
    npc curr(map, map.getXYCoord(48, 17));

    EXPECT_NO_THROW(curr.printDialogue(0));
    EXPECT_NO_THROW(curr.printDialogue(1));
    EXPECT_NO_THROW(curr.printDialogue(2));
    EXPECT_NO_THROW(curr.printDialogue(3));
}

TEST(NPC_Dialogue, Isaiah){
    mapManager map;
    #define ANSI_RED "\033[31m"
    map.initalizeNPC(41,14,ANSI_RED);
    npc curr(map, map.getXYCoord(41,14));

    EXPECT_NO_THROW(curr.printDialogue(0));
    EXPECT_NO_THROW(curr.printDialogue(1));
    EXPECT_NO_THROW(curr.printDialogue(2));
    EXPECT_NO_THROW(curr.printDialogue(3));
}