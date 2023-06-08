#include <gtest/gtest.h>
#include "../src/PlayerManager.cpp"


TEST(playerManagerTests, playerReputationTest) {
    PlayerManager p1;
    p1.setPlayerRep(15);
    EXPECT_EQ(p1.getPlayerRep(), 15);
}

TEST(playerManagerTests, playerMoralityTest) {
    PlayerManager p1;
    p1.setPlayerMor(15);
    EXPECT_EQ(p1.getPlayerMor(), 15);
}

TEST(playerManagerTests, popularRepTest) {
    PlayerManager p1;
    p1.setPopularRep(10);
    EXPECT_EQ(p1.getPopularRep(), 10);
}

TEST(playerManagerTests, normieRepTest) {
    PlayerManager p1;
    p1.setNormieRep(10);
    EXPECT_EQ(p1.getNormieRep(), 10);
}

TEST(playerManagerTests, outcastRepTest) {
    PlayerManager p1;
    p1.setOutcastRep(10);
    EXPECT_EQ(p1.getOutcastRep(), 10);
}