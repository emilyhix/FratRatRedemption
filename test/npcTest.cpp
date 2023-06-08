#include <gtest/gtest.h>
#include <string>
#include "../header/npc.hpp"
#include "../header/mapManager.hpp"
#include "../header/coord.hpp"

TEST(NPC_Names, ChadAndThad){
    mapManager map;
    #define ANSI_NAVY_BLUE "\033[38;5;17m"
    map.initalizeNPC(10,11,ANSI_NAVY_BLUE);
    npc curr(map, map.getXYCoord(10,11));
    
    EXPECT_EQ(curr.getName(), "Chad & Thad");
}

TEST(NPC_Names, Bethany){
    mapManager map;
    #define ANSI_PINK "\033[38;5;205m"
    map.initalizeNPC(39,5,ANSI_PINK);
    npc curr(map, map.getXYCoord(39, 5));
    
    EXPECT_EQ(curr.getName(), "Bethany");
}

TEST(NPC_Names, Veronica){
    mapManager map;
    #define ANSI_PURPLE "\033[35m"
    map.initalizeNPC(21,12,ANSI_PURPLE);
    npc curr(map, map.getXYCoord(21, 12));
    
    EXPECT_EQ(curr.getName(), "Veronica");
}

TEST(NPC_Names, Denzel){
    mapManager map;
    #define ANSI_BLUE "\033[34m"
    map.initalizeNPC(19,7,ANSI_BLUE);
    npc curr(map, map.getXYCoord(19, 7));

    EXPECT_EQ(curr.getName(), "Denzel");
}

TEST(NPC_Names, Marcus){
    mapManager map;
    #define ANSI_ORANGE "\033[38;5;208m"
    map.initalizeNPC(65,10,ANSI_ORANGE);
    npc curr(map, map.getXYCoord(65, 10));

    EXPECT_EQ(curr.getName(), "Marcus");
}

TEST(NPC_Names, Cloud){
    mapManager map;
    #define ANSI_LIGHT_BLUE "\033[38;5;39m"
    map.initalizeNPC(58,16,ANSI_LIGHT_BLUE);
    npc curr(map, map.getXYCoord(58, 16));

    EXPECT_EQ(curr.getName(), "Cloud");
}

TEST(NPC_Names, Christina){
    mapManager map;
    #define ANSI_YELLOW "\033[33m"
    map.initalizeNPC(28,18,ANSI_YELLOW);
    npc curr(map, map.getXYCoord(28, 18));

    EXPECT_EQ(curr.getName(), "Christina");
}

TEST(NPC_Names, Trevor){
    mapManager map;
    #define ANSI_LIME "\033[38;5;10m"
    map.initalizeNPC(9,19,ANSI_LIME);
    npc curr(map, map.getXYCoord(9, 19));

    EXPECT_EQ(curr.getName(), "Trevor");
}

TEST(NPC_Names, Harper){
    mapManager map;
    #define ANSI_GREEN "\033[32m"
    map.initalizeNPC(48,17,ANSI_GREEN);
    npc curr(map, map.getXYCoord(48, 17));

    EXPECT_EQ(curr.getName(), "Harper");
}

TEST(NPC_Names, Isaiah){
    mapManager map;
    #define ANSI_RED "\033[31m"
    map.initalizeNPC(41,14,ANSI_RED);
    npc curr(map, map.getXYCoord(41,14));

    EXPECT_EQ(curr.getName(), "Isaiah");
}

TEST(NPC_Types, ChadAndThad){
    mapManager map;
    #define ANSI_NAVY_BLUE "\033[38;5;17m"
    map.initalizeNPC(10,11,ANSI_NAVY_BLUE);
    npc InteractingNPC(map, map.getXYCoord(10,11));
    
    EXPECT_EQ(InteractingNPC.getType(), "Popular");
}

TEST(NPC_Types, Bethany){
    mapManager map;
    #define ANSI_PINK "\033[38;5;205m"
    map.initalizeNPC(39,5,ANSI_PINK);
    npc curr(map, map.getXYCoord(39, 5));
    
    EXPECT_EQ(curr.getType(), "Popular");
}

TEST(NPC_Types, Veronica){
    mapManager map;
    #define ANSI_PURPLE "\033[35m"
    map.initalizeNPC(21,12,ANSI_PURPLE);
    npc curr(map, map.getXYCoord(21, 12));
    
    EXPECT_EQ(curr.getType(), "Outcast");
}

TEST(NPC_Types, Denzel){
    mapManager map;
    #define ANSI_BLUE "\033[34m"
    map.initalizeNPC(19,7,ANSI_BLUE);
    npc curr(map, map.getXYCoord(19, 7));

    EXPECT_EQ(curr.getType(), "Normie");
}

TEST(NPC_Types, Marcus){
    mapManager map;
    #define ANSI_ORANGE "\033[38;5;208m"
    map.initalizeNPC(65,10,ANSI_ORANGE);
    npc curr(map, map.getXYCoord(65, 10));

    EXPECT_EQ(curr.getType(), "Alpha Male");
}

TEST(NPC_Types, Cloud){
    mapManager map;
    #define ANSI_LIGHT_BLUE "\033[38;5;39m"
    map.initalizeNPC(58,16,ANSI_LIGHT_BLUE);
    npc curr(map, map.getXYCoord(58, 16));

    EXPECT_EQ(curr.getType(), "Normie");
}

TEST(NPC_Types, Christina){
    mapManager map;
    #define ANSI_YELLOW "\033[33m"
    map.initalizeNPC(28,18,ANSI_YELLOW);
    npc curr(map, map.getXYCoord(28, 18));

    EXPECT_EQ(curr.getType(), "Outcast");
}

TEST(NPC_Types, Trevor){
    mapManager map;
    #define ANSI_LIME "\033[38;5;10m"
    map.initalizeNPC(9,19,ANSI_LIME);
    npc curr(map, map.getXYCoord(9, 19));

    EXPECT_EQ(curr.getType(), "Normie");
}

TEST(NPC_Types, Harper){
    mapManager map;
    #define ANSI_GREEN "\033[32m"
    map.initalizeNPC(48,17,ANSI_GREEN);
    npc curr(map, map.getXYCoord(48, 17));

    EXPECT_EQ(curr.getType(), "Outcast");
}

TEST(NPC_Types, Isaiah){
    mapManager map;
    #define ANSI_RED "\033[31m"
    map.initalizeNPC(41,14,ANSI_RED);
    npc curr(map, map.getXYCoord(41,14));

    EXPECT_EQ(curr.getType(), "Popular");
}

TEST(NPC_Introductions, ChadAndThad){
    mapManager map;
    #define ANSI_NAVY_BLUE "\033[38;5;17m"
    map.initalizeNPC(10,11,ANSI_NAVY_BLUE);
    npc InteractingNPC(map, map.getXYCoord(10,11));
    
    EXPECT_EQ(InteractingNPC.getIntroduction(), "You walk into the master bathroom and see two identical, muscular, blond haired men facing the \n"
                        "mirror. They quickly turn around and you see some powdery substance on the counter. They give you a \n"
                        "sheepish smile before speaking.");
}

TEST(NPC_Introductions, Bethany){
    mapManager map;
    #define ANSI_PINK "\033[38;5;205m"
    map.initalizeNPC(39,5,ANSI_PINK);
    npc curr(map, map.getXYCoord(39, 5));
    
    EXPECT_EQ(curr.getIntroduction(), "A platinum blonde girl is mean muggin' the rest of the party from the snack table. She seems to be \n"
                        "scanning the crowd of people, judging everyone who passes her field of vision. \n"
                        "Though she does smile at a few people here and there. You decide to approach her.");
}

TEST(NPC_Introductions, Veronica){
    mapManager map;
    #define ANSI_PURPLE "\033[35m"
    map.initalizeNPC(21,12,ANSI_PURPLE);
    npc curr(map, map.getXYCoord(21, 12));
    
    EXPECT_EQ(curr.getIntroduction(), "You see a person wearing all black standing at the edge of the party. She has tall black boots, \n"
                        "thick black eyeliner, and a lot of piercings. They seem to really hate it here and like they're \n"
                        "looking for someone.");
}

TEST(NPC_Introductions, Denzel){
    mapManager map;
    #define ANSI_BLUE "\033[34m"
    map.initalizeNPC(19,7,ANSI_BLUE);
    npc curr(map, map.getXYCoord(19, 7));

    EXPECT_EQ(curr.getIntroduction(), "A tall, dark, and handsome man flashes you a smile. He's wearing a letterman jacket, \n"
                        "dark jeans, and sneakers. He seems very friendly and like he wants to say something \n"
                        "to you.");
}

TEST(NPC_Introductions, Marcus){
    mapManager map;
    #define ANSI_ORANGE "\033[38;5;208m"
    map.initalizeNPC(65,10,ANSI_ORANGE);
    npc curr(map, map.getXYCoord(65, 10));

    EXPECT_EQ(curr.getIntroduction(), "There's some random guy side-eyeing every girl he sees. He seems like he wants to talk to a lot of people, \n"
                        "but there is quite literally 5 feet between him and any person around him. It's a little embarassing honestly. \n"
                        "You feel bad, so you go talk to him.");
}

TEST(NPC_Introductions, Cloud){
    mapManager map;
    #define ANSI_LIGHT_BLUE "\033[38;5;39m"
    map.initalizeNPC(58,16,ANSI_LIGHT_BLUE);
    npc curr(map, map.getXYCoord(58, 16));

    EXPECT_EQ(curr.getIntroduction(), "There's a super hyper and eccentric person you see walking around. They say 'hi' to everyone \n"
                        "they run into and seem to have a genuine smile on their face when they do so. They're wearing \n"
                        "a sage green dress with a flower pattern all over. They have patchwork tattoos covering their \n"
                        "arms.");
}

TEST(NPC_Introductions, Christina){
    mapManager map;
    #define ANSI_YELLOW "\033[33m"
    map.initalizeNPC(28,18,ANSI_YELLOW);
    npc curr(map, map.getXYCoord(28, 18));

    EXPECT_EQ(curr.getIntroduction(), "Near the entrance to the bathroom, you see a doe-eyed girl wearing some casual clothes, though \n"
                        "she seems fearful and like she doesn't want to be here. She's clutching her tote bag and staring \n"
                        "at her sneakers. You decide to walk over to her.");
}

TEST(NPC_Introductions, Trevor){
    mapManager map;
    #define ANSI_LIME "\033[38;5;10m"
    map.initalizeNPC(9,19,ANSI_LIME);
    npc curr(map, map.getXYCoord(9, 19));

    EXPECT_EQ(curr.getIntroduction(), "There's a scrawny, goofy kid that is walking away from a few frat guys. From what you heard, you think \n"
                        "they were yelling at him, but he still seems to be upbeat and happy. He seems intriguing enough to catch \n"
                        "your attention.");
}

TEST(NPC_Introductions, Harper){
    mapManager map;
    #define ANSI_GREEN "\033[32m"
    map.initalizeNPC(48,17,ANSI_GREEN);
    npc curr(map, map.getXYCoord(48, 17));

    EXPECT_EQ(curr.getIntroduction(), "There's a girl staring off into the abyss on the couch. She seems to be in her own \n"
                        "little world. You can't tell if she has no thoughts or all the thoughts in that pretty \n"
                        "head of hers'. You decide to approach her to get an answer.");
}

TEST(NPC_Introductions, Isaiah){
    mapManager map;
    #define ANSI_RED "\033[31m"
    map.initalizeNPC(41,14,ANSI_RED);
    npc curr(map, map.getXYCoord(41,14));

    EXPECT_EQ(curr.getIntroduction(), "In the center of the house, there's a very handsome fella. They're wearing \n"
                        "a very well fitted blazer and dress shirt. His shoes match the accents on \n"
                        "their blazer and his skin looks flawless. You're so entranced by his beauty, \n"
                        "so you walk up to them.");
}
