#include <gtest/gtest.h>
#include <string>
#include "../src/EndingManager.cpp"


TEST(EndingManagerTests, lowMoralityEnding) {
    EndingManager *end = new EndingManager(10,5,5,4,3,"popular");
    EXPECT_NO_THROW(end->printEnding());
}


TEST(EndingManagerTests, lowReputationEnding) {
    EndingManager *end = new EndingManager(10,10,-2,-3,-4,"popular");
    EXPECT_NO_THROW(end->printEnding());
}


// note: tests named in the format <playerType>_<npc type player gained most rep with>


TEST(EndingManagerTests, popular_popular) {
    EndingManager *end = new EndingManager(10,10,5,4,3,"popular");
    EXPECT_NO_THROW(end->printEnding());
}

TEST(EndingManagerTests, popular_normie) {
    EndingManager *end = new EndingManager(10,10,4,5,3,"popular");
    EXPECT_NO_THROW(end->printEnding());
}

TEST(EndingManagerTests, popular_outcast) {
    EndingManager *end = new EndingManager(10,10,4,3,5,"popular");
    EXPECT_NO_THROW(end->printEnding());
}



TEST(EndingManagerTests, normie_popular) {
    EndingManager *end = new EndingManager(10,10,5,4,3,"normie");
    EXPECT_NO_THROW(end->printEnding());
}

TEST(EndingManagerTests, normie_normie) {
    EndingManager *end = new EndingManager(10,10,4,5,3,"normie");
    EXPECT_NO_THROW(end->printEnding());
}

TEST(EndingManagerTests, normie_outcast) {
    EndingManager *end = new EndingManager(10,10,4,3,5,"normie");
    EXPECT_NO_THROW(end->printEnding());
}



TEST(EndingManagerTests, outcast_popular) {
    EndingManager *end = new EndingManager(10,10,5,4,3,"outcast");
    EXPECT_NO_THROW(end->printEnding());
}

TEST(EndingManagerTests, outcast_normie) {
    EndingManager *end = new EndingManager(10,10,4,5,3,"outcast");
    EXPECT_NO_THROW(end->printEnding());
}

TEST(EndingManagerTests, outcast_outcast) {
    EndingManager *end = new EndingManager(10,10,4,3,5,"outcast");
    EXPECT_NO_THROW(end->printEnding());
}