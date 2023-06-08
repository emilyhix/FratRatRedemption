#include <gtest/gtest.h>
#include <string>
#include "../header/gameClock.hpp"
#include "../src/gameClock.cpp"

TEST(gameClockTests, runningConstructor) {
    gameClock *testClock = new gameClock(); 

    EXPECT_EQ(testClock->getTimerStatus(), 1);
}

TEST(gameClockTests, settingTimerOff) {
    gameClock *testClock = new gameClock(); 
    testClock->timerOff();

    EXPECT_EQ(testClock->getTimerStatus(), 0);
}

TEST(gameClockTests, settingTimerOnAfterOff) {
    gameClock *testClock = new gameClock(); 
    testClock->timerOff();
    testClock->timerOn(); 

    EXPECT_EQ(testClock->getTimerStatus(), 1);
}

TEST(gameClockTests, settingTimerPeriod) {
    gameClock *testClock = new gameClock(); 
    
    EXPECT_NO_THROW(testClock->setTimerPeriod(100));
}

TEST(gameClockTests, gettingTimerStatus) {
    gameClock *testClock = new gameClock(); 

    bool findingTimerStatus = testClock->getTimerStatus();

    EXPECT_TRUE(findingTimerStatus);
}

TEST(gameClockTests, runningTimerISR) {
    gameClock *testClock = new gameClock(); 

    EXPECT_NO_THROW(testClock->timerISR());
}