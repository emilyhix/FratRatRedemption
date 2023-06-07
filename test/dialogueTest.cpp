#include <gtest/gtest.h>
#include <string>
#include "../header/npc.hpp"


TEST(NPC_Name_Testing, NPC_Names_1){
    int id = 1;
    npc currNPC(id);

    EXPECT_EQ(currNPC.getName(), "Chad & Thad");
}

TEST(NPC_Name_Testing, NPC_Names_2) {
    int id = 2;
    npc currNPC(id);

    EXPECT_EQ(currNPC.getName(), "Bethany");
}

TEST(NPC_Name_Testing, NPC_Names_3) {
    int id = 3;
    npc currNPC(id);

    EXPECT_EQ(currNPC.getName(), "Veronica");
}

TEST(NPC_Name_Testing, NPC_Names_4) {
    int id = 4;
    npc currNPC(id);

    EXPECT_EQ(currNPC.getName(), "Denzel");
}

TEST(NPC_Name_Testing, NPC_Names_5) {
    int id = 5;
    npc currNPC(id);

    EXPECT_EQ(currNPC.getName(), "Marcus");
}

TEST(NPC_Name_Testing, NPC_Names_6) {
    int id = 6;
    npc currNPC(id);

    EXPECT_EQ(currNPC.getName(), "Cloud");
}

TEST(NPC_Name_Testing, NPC_Names_7) {
    int id = 7;
    npc currNPC(id);

    EXPECT_EQ(currNPC.getName(), "Christina");
}

TEST(NPC_Name_Testing, NPC_Names_8) {
    int id = 8;
    npc currNPC(id);

    EXPECT_EQ(currNPC.getName(), "Trevor");
}

TEST(NPC_Name_Testing, NPC_Names_9) {
    int id = 9;
    npc currNPC(id);

    EXPECT_EQ(currNPC.getName(), "Harper");
}

TEST(NPC_Name_Testing, NPC_Names_10) {
    int id = 10;
    npc currNPC(id);

    EXPECT_EQ(currNPC.getName(), "Isaiah");
}

TEST(NPC_Type_Testing, NPC_Types_1){
    int id = 1;
    npc currNPC(id);

    EXPECT_EQ(currNPC.getType(), "Popular");
}

TEST(NPC_Type_Testing, NPC_Types_2){
    int id = 2;
    npc currNPC(id);

    EXPECT_EQ(currNPC.getType(), "Popular");
}

TEST(NPC_Type_Testing, NPC_Types_3){
    int id = 3;
    npc currNPC(id);

    EXPECT_EQ(currNPC.getType(), "Outcast");
}

TEST(NPC_Type_Testing, NPC_Types_4){
    int id = 4;
    npc currNPC(id);

    EXPECT_EQ(currNPC.getType(), "Normie");
}

TEST(NPC_Type_Testing, NPC_Types_5){
    int id = 5;
    npc currNPC(id);

    EXPECT_EQ(currNPC.getType(), "Alpha Male");
}

TEST(NPC_Type_Testing, NPC_Types_6){
    int id = 6;
    npc currNPC(id);

    EXPECT_EQ(currNPC.getType(), "Normie");
}

TEST(NPC_Type_Testing, NPC_Types_7){
    int id = 7;
    npc currNPC(id);

    EXPECT_EQ(currNPC.getType(), "Outcast");
}

TEST(NPC_Type_Testing, NPC_Types_8){
    int id = 8;
    npc currNPC(id);

    EXPECT_EQ(currNPC.getType(), "Normie");
}

TEST(NPC_Type_Testing, NPC_Types_9){
    int id = 9;
    npc currNPC(id);

    EXPECT_EQ(currNPC.getType(), "Outcast");
}

TEST(NPC_Type_Testing, NPC_Types_10){
    int id = 10;
    npc currNPC(id);

    EXPECT_EQ(currNPC.getType(), "Popular");
}
