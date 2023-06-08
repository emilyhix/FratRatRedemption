#include <gtest/gtest.h>
#include <string>
#include "../header/playerActor.hpp"
#include "../src/playerActor.cpp"

TEST(playerActorTests, runningConstructor) {
    EXPECT_NO_THROW(playerActor *testActor = new playerActor());
}

TEST(playerActorTests, constructorInitialValues) {
    playerActor *testActor = new playerActor();

    EXPECT_EQ(testActor->getXPos(),61);
    EXPECT_EQ(testActor->getYPos(),6);
}

TEST(playerActorTests, testSetters) {
    playerActor *testActor = new playerActor();

    testActor->setXPos(5); 
    testActor->setYPos(5); 

    EXPECT_EQ(testActor->getXPos(),5);
    EXPECT_EQ(testActor->getYPos(),5);
}

TEST(playerActorTests, movingPlayerActor) {
    playerActor *testActor = new playerActor();

    //UP
    EXPECT_NO_THROW(testActor->movePlayerPosition(0));
    EXPECT_EQ(testActor->getYPos(),5); 

    //RIGHT
    EXPECT_NO_THROW(testActor->movePlayerPosition(1));
    EXPECT_EQ(testActor->getXPos(),62); 

    //DOWN
    EXPECT_NO_THROW(testActor->movePlayerPosition(2));
    EXPECT_EQ(testActor->getYPos(),6); 

    //LEFT
    EXPECT_NO_THROW(testActor->movePlayerPosition(3));
    EXPECT_EQ(testActor->getXPos(),61); 

    //INPUT NOT IN RANGE
    EXPECT_NO_THROW(testActor->movePlayerPosition(5000));
}