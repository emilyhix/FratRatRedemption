#include <gtest/gtest.h>
#include "../src/playerActor.cpp"

TEST(positionTesting, initialPosition){
    playerActor player;

    EXPECT_TRUE(player.getXPos() == 61);
    EXPECT_TRUE(player.getYPos() == 4);
}

TEST(movementTesting, moveDown){
    playerActor player;
    player.movePlayerPosition(2);

    EXPECT_EQ(player.getYPos(), 5);
}

TEST(movementTesting, moveUp){
    playerActor player;
    player.movePlayerPosition(2);
    player.movePlayerPosition(2);
    player.movePlayerPosition(0);

    EXPECT_EQ(player.getYPos(), 5);
}

TEST(movementTesting, moveRight){
    playerActor player;
    player.movePlayerPosition(1);

    EXPECT_EQ(player.getXPos(), 62);
}

TEST(movementTesting, moveLeft){
    playerActor player;
    player.movePlayerPosition(3);

    EXPECT_EQ(player.getXPos(), 60);
}

TEST(movementTesting, setX){
    playerActor player;
    player.setXPos(20);

    EXPECT_FALSE(player.getXPos() == 61);
    EXPECT_TRUE(player.getXPos() == 20);
}

TEST(movementTesting, setY){
    playerActor player;
    player.setYPos(15);

    EXPECT_FALSE(player.getYPos() == 4);
    EXPECT_TRUE(player.getYPos() == 15);
}
