CMAKE_MINIMUM_REQUIRED(VERSION 3.2)
project(FratRatRedemption)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(runAllTests
    test/test.cpp
    src/PlayerManager.cpp 
    src/characterCustomization.cpp
)

ADD_EXECUTABLE(player
    test/playerCustTest.cpp
    src/PlayerManager.cpp 
    src/playerCustomization.cpp
)

ADD_EXECUTABLE(dialogue
    test/dialogueTest.cpp 
    src/npc.cpp 
    src/mapManager.cpp
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

TARGET_LINK_LIBRARIES (player gtest gtest_main)
TARGET_LINK_LIBRARIES (runAllTests gtest gtest_main)
TARGET_LINK_LIBRARIES (dialogue getest gtest_main)
