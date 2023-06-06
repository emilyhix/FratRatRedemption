CMAKE_MINIMUM_REQUIRED(VERSION 3.2)

project(FratRatRedemption)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(player
    test/test.cpp
    src/PlayerManager.cpp 
    src/characterCustomization.cpp
)

ADD_EXECUTABLE(run 
    src/coord.cpp
    src/gameClock.cpp
    src/mapManager.cpp
    gameManager.cpp
    src/playerActor.cpp
    src/userInput.cpp
    src/npc.cpp
)

ADD_EXECUTABLE(runAllTests

)

TARGET_LINK_LIBRARIES (player gtest gtest_main)
