#include <gtest/gtest.h>
#include <string>
#include "../header/coord.hpp"
//#include "../src/coord.cpp"

TEST(coordTests, runningConstructor) {
    EXPECT_NO_THROW(coord *testCoord = new coord());
}

TEST(coordTests, constructorInitialValues) {
    coord *testCoord = new coord(); 

    EXPECT_EQ(testCoord->getCoordCharacter(),' ');
    EXPECT_EQ(testCoord->getCoordColor(),"\033[37m");
    EXPECT_EQ(testCoord->getWalkable(),1);
    EXPECT_EQ(testCoord->getPlayerActive(),0);
    EXPECT_EQ(testCoord->getContainsNPC(),0);
}

TEST(coordTests, colorFunctions) {
    coord *testCoord = new coord(); 

    EXPECT_NO_THROW(testCoord->setCoordColor("poop"));
    EXPECT_EQ(testCoord->getCoordColor(),"poop"); 
}

TEST(coordTests, characterFunctions) {
    coord *testCoord = new coord(); 

    EXPECT_NO_THROW(testCoord->setCoordCharacter('#'));
    EXPECT_EQ(testCoord->getCoordCharacter(),'#');  
}

TEST(coordTests, walkableFunctions) {
    coord *testCoord = new coord(); 

    EXPECT_NO_THROW(testCoord->toggleWalkable());
    EXPECT_EQ(testCoord->getWalkable(),0);  
}

TEST(coordTests, playerFunctions) {
    coord *testCoord = new coord(); 

    EXPECT_NO_THROW(testCoord->togglePlayerActive());
    EXPECT_EQ(testCoord->getPlayerActive(),1); 
}

TEST(coordTests, npcFunctions) {
    coord *testCoord = new coord(); 

    EXPECT_NO_THROW(testCoord->toggleContainsNPC());
    EXPECT_EQ(testCoord->getContainsNPC(),1); 
}