CMAKE_MINIMUM_REQUIRED(VERSION 3.2)

project(FratRatRedemption)

ADD_SUBDIRECTORY(googletest)

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

ADD_EXECUTABLE(movement
    test/test.cpp
)

TARGET_LINK_LIBRARIES (movement gtest gtest_main)
