#include <gtest/gtest.h>
#include <string>
#include "../src/PlayerManager.cpp"
#include "../src/characterCustomization.cpp"

TEST(playerCustomization, playerNameTest){
    playerManager p1;
    p1.setPlayerName();
    EXPECT_EQ("bip", p1.getPlayerName());
}


TEST(playerCustomization, playerType_Popular){
    playerManager p1;
    p1.setPlayerType(1);
    EXPECT_EQ("Popular", p1.getPlayerType());
}

TEST(playerCustomization, playerType_Normie){
    playerManager p1;
    p1.setPlayerType(2);
    EXPECT_EQ("Normie", p1.getPlayerType()); 
}

TEST(playerCustomization, playerType_Outcast){
    playerManager p1;
    p1.setPlayerType(3);
    EXPECT_EQ("Outcast", p1.getPlayerType());
}
