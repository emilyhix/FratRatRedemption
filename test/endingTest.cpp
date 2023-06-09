#include <gtest/gtest.h>
#include <string>
#include "../src/EndingManager.cpp"


TEST(EndingManagerTests, lowMoralityEnding) {
    EndingManager *end = new EndingManager(10,5,5,4,3,"Popular");
    EXPECT_NO_THROW(end->printEnding());
}


TEST(EndingManagerTests, lowReputationEnding) {
    EndingManager *end = new EndingManager(10,20,-2,-3,-4,"Popular");
    EXPECT_NO_THROW(end->printEnding());
}


// note: tests named in the format <playerType>_<npc type player gained most rep with>


TEST(EndingManagerTests, popular_popular) {
    EndingManager *end = new EndingManager(10,20,5,4,3,"Popular");
    EXPECT_NO_THROW(end->printEnding());
}

TEST(EndingManagerTests, popular_normie) {
    EndingManager *end = new EndingManager(10,20,4,5,3,"Popular");
    EXPECT_NO_THROW(end->printEnding());
}

TEST(EndingManagerTests, popular_outcast) {
    EndingManager *end = new EndingManager(10,20,4,3,5,"Popular");
    EXPECT_NO_THROW(end->printEnding());
}



TEST(EndingManagerTests, normie_popular) {
    EndingManager *end = new EndingManager(10,20,5,4,3,"Normie");
    EXPECT_NO_THROW(end->printEnding());
}

TEST(EndingManagerTests, normie_normie) {
    EndingManager *end = new EndingManager(10,20,4,5,3,"Normie");
    EXPECT_NO_THROW(end->printEnding());
}

TEST(EndingManagerTests, normie_outcast) {
    EndingManager *end = new EndingManager(10,20,4,3,5,"Normie");
    EXPECT_NO_THROW(end->printEnding());
}



TEST(EndingManagerTests, outcast_popular) {
    EndingManager *end = new EndingManager(10,20,5,4,3,"Outcast");
    EXPECT_NO_THROW(end->printEnding());
}

TEST(EndingManagerTests, outcast_normie) {
    EndingManager *end = new EndingManager(10,20,4,5,3,"Outcast");
    EXPECT_NO_THROW(end->printEnding());
}

TEST(EndingManagerTests, outcast_outcast) {
    EndingManager *end = new EndingManager(10,20,4,3,5,"Outcast");
    EXPECT_NO_THROW(end->printEnding());
}
