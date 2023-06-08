CMAKE_MINIMUM_REQUIRED(VERSION 3.2)


project(FratRatRedemption)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(runAllTests
    src/PlayerManager.cpp 
    src/playerCustomization.cpp
    test/playerManagerTest.cpp
    test/endingTest.cpp
    test/StatManagerTest.cpp
)

ADD_EXECUTABLE(player
    src/PlayerManager.cpp 
    src/playerCustomization.cpp
)

ADD_EXECUTABLE(run 
    src/coord.cpp
    src/gameClock.cpp
    src/mapManager.cpp
    gameManager.cpp
    src/playerActor.cpp
    src/userInput.cpp
    src/npc.cpp
    src/PlayerManager.cpp
    src/StatManager.cpp
    src/EndingManager.cpp
)

TARGET_LINK_LIBRARIES (player gtest gtest_main)
TARGET_LINK_LIBRARIES (runAllTests gtest gtest_main)
