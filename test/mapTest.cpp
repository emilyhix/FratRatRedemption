#include <gtest/gtest.h>
#include <string>
#include "../header/mapManager.hpp"
#include "../header/coord.hpp"

TEST(mapTests, runningConstructor) {
    EXPECT_NO_THROW(mapManager *testMap = new mapManager());
}

TEST(mapTests, initializingMap) {
    mapManager *testMap = new mapManager();

    EXPECT_NO_THROW(testMap->initializeMap("../map.txt"));
}

TEST(mapTests, initializingPlayer) {
    mapManager *testMap = new mapManager();

    EXPECT_NO_THROW(testMap->initializePlayer(61,6));
    EXPECT_EQ(testMap->getXYCoord(61,6).getPlayerActive(),1);
}

TEST(mapTests, initializingNPC) {
    mapManager *testMap = new mapManager();

    EXPECT_NO_THROW(testMap->initalizeNPC(61,6,"POOP"));
    EXPECT_EQ(testMap->getXYCoord(61,6).getContainsNPC(),1);
    EXPECT_EQ(testMap->getXYCoord(61,6).getCoordColor(),"POOP");
}

TEST(mapTests, removingNPC) {
    mapManager *testMap = new mapManager();
    testMap->initalizeNPC(61,6,"POOP");
    EXPECT_NO_THROW(testMap->deactivateNPC(61,6));
    EXPECT_EQ(testMap->getXYCoord(61,6).getContainsNPC(),0);
}

TEST(mapTests, movingPlayer) {
    mapManager *testMap = new mapManager();
    EXPECT_NO_THROW(testMap->movePlayer(5,5));
    EXPECT_EQ(testMap->getXYCoord(5,5).getPlayerActive(),1);
}

TEST(mapTests, removingPlayer) {
    mapManager *testMap = new mapManager();
    testMap->movePlayer(5,5); 
    EXPECT_NO_THROW(testMap->removePlayer(5,5); );
    EXPECT_EQ(testMap->getXYCoord(5,5).getPlayerActive(),0);
}

TEST(mapTests, settingMorality) {
    mapManager *testMap = new mapManager();
    EXPECT_NO_THROW(testMap->setMapMoralityRange(10));
}

TEST(mapTests, updatingMorality) {
    mapManager *testMap = new mapManager();
    testMap->setMapMoralityRange(10);
    EXPECT_NO_THROW(testMap->updateMapMorality(5));
}

TEST(mapTests, updatingMorality0) {
    mapManager *testMap = new mapManager();
    testMap->setMapMoralityRange(10);
    EXPECT_NO_THROW(testMap->updateMapMorality(0));
}

TEST(mapTests, settingReputation) {
    mapManager *testMap = new mapManager();
    EXPECT_NO_THROW(testMap->setMapReputationRange(10));
}

TEST(mapTests, updatingReputation) {
    mapManager *testMap = new mapManager();
    testMap->setMapReputationRange(10);
    EXPECT_NO_THROW(testMap->updateMapReputation(5));
}

TEST(mapTests, updatingReputation0) {
    mapManager *testMap = new mapManager();
    testMap->setMapReputationRange(10);
    EXPECT_NO_THROW(testMap->updateMapReputation(0));
}


