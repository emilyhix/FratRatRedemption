#include <gtest/gtest.h>
#include <string>
#include "../header/PlayerManager.hpp"
#include "../src/StatManager.cpp"

TEST(StatManagerTests, moralityGained) {
    PlayerManager *player = new PlayerManager("x", "Popular");
    StatManager *stat = new StatManager();
    stat->updateStats(*player, "Harper", "Outcast", 3, 2);

    EXPECT_EQ(player->getPlayerMor(), 36);
}

TEST(StatManagerTests, moralityLost) {
    PlayerManager *player = new PlayerManager("x", "Popular");
    StatManager *stat = new StatManager();
    stat->updateStats(*player, "Harper", "Outcast", 0, 2);

    EXPECT_EQ(player->getPlayerMor(), 28);
}

TEST(StatManagerTests, sameType_response1) {
    PlayerManager *player = new PlayerManager("x", "Popular");
    StatManager *stat = new StatManager();
    stat->updateStats(*player, "Bethany", "Popular", 0, 1);

    EXPECT_EQ(player->getPlayerRep(), 3);
    EXPECT_EQ(player->getPopularRep(), 3);
}

TEST(StatManagerTests, sameType_response2) {
    PlayerManager *player = new PlayerManager("x", "Popular");
    StatManager *stat = new StatManager();
    stat->updateStats(*player, "Bethany", "Popular", 1, 1);

    EXPECT_EQ(player->getPlayerRep(), 2);
    EXPECT_EQ(player->getPopularRep(), 2);
}

TEST(StatManagerTests, sameType_response3) {
    PlayerManager *player = new PlayerManager("x", "Popular");
    StatManager *stat = new StatManager();
    stat->updateStats(*player, "Bethany", "Popular", 2, 1);

    EXPECT_EQ(player->getPlayerRep(), -1);
    EXPECT_EQ(player->getPopularRep(), -1);
}

TEST(StatManagerTests, sameType_response4) {
    PlayerManager *player = new PlayerManager("x", "Popular");
    StatManager *stat = new StatManager();
    stat->updateStats(*player, "Bethany", "Popular", 3, 1);

    EXPECT_EQ(player->getPlayerRep(), -2);
    EXPECT_EQ(player->getPopularRep(), -2);
}

TEST(StatManagerTests, diffType_response1) {
    PlayerManager *player = new PlayerManager("x", "Normie");
    StatManager *stat = new StatManager();
    stat->updateStats(*player, "Bethany", "Popular", 0, 1);

    EXPECT_EQ(player->getPlayerRep(), 2);
    EXPECT_EQ(player->getPopularRep(), 2);
}

TEST(StatManagerTests, diffType_response2) {
    PlayerManager *player = new PlayerManager("x", "Normie");
    StatManager *stat = new StatManager();
    stat->updateStats(*player, "Bethany", "Popular", 1, 1);

    EXPECT_EQ(player->getPlayerRep(), 1);
    EXPECT_EQ(player->getPopularRep(), 1);
}

TEST(StatManagerTests, diffType_response3) {
    PlayerManager *player = new PlayerManager("x", "Normie");
    StatManager *stat = new StatManager();
    stat->updateStats(*player, "Bethany", "Popular", 2, 1);

    EXPECT_EQ(player->getPlayerRep(), -2);
    EXPECT_EQ(player->getPopularRep(), -2);
}

TEST(StatManagerTests, diffType_response4) {
    PlayerManager *player = new PlayerManager("x", "Normie");
    StatManager *stat = new StatManager();
    stat->updateStats(*player, "Bethany", "Popular", 3, 1);

    EXPECT_EQ(player->getPlayerRep(), -3);
    EXPECT_EQ(player->getPopularRep(), -3);
}

TEST(StatManagerTests, updatePopularRep) {
    PlayerManager *player = new PlayerManager("x", "Popular");
    StatManager *stat = new StatManager();
    stat->updateStats(*player, "Bethany", "Popular", 0, 1);

    EXPECT_EQ(player->getPopularRep(), 3);
}

TEST(StatManagerTests, updateNormieRep) {
    PlayerManager *player = new PlayerManager("x", "Normie");
    StatManager *stat = new StatManager();
    stat->updateStats(*player, "Trevor", "Normie", 0, 1);

    EXPECT_EQ(player->getNormieRep(), 3);
}

TEST(StatManagerTests, updateOutcastRep) {
    PlayerManager *player = new PlayerManager("x", "Outcast");
    StatManager *stat = new StatManager();
    stat->updateStats(*player, "Harper", "Outcast", 0, 1);

    EXPECT_EQ(player->getOutcastRep(), 3);
}