#include <gtest/gtest.h>
#include <string>
#include "../header/PlayerManager.hpp"
#include "../header/characterCustomization.hpp"

TEST(playerCustomization, playerNameTest){
    PlayerManager p1;
    p1.setPlayerName();
    EXPECT_EQ("bip", p1.getPlayerName());
}


TEST(playerCustomization, playerType_Popular){
    PlayerManager p1;
    p1.setPlayerType();
    EXPECT_EQ("Popular", p1.getPlayerType());
}

TEST(playerCustomization, playerType_Normie){
    PlayerManager p1;
    p1.setPlayerType();
    EXPECT_EQ("Normie", p1.getPlayerType()); 
}

TEST(playerCustomization, playerType_Outcast){
    PlayerManager p1;
    p1.setPlayerType();
    EXPECT_EQ("Outcast", p1.getPlayerType());
}

TEST(createChar, fullFunctionTest){
    PlayerManager p1;
    characterCustom cc;

    EXPECT_NO_THROW(cc.createCharacter(p1));
}

