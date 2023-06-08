CMAKE_MINIMUM_REQUIRED(VERSION 3.2)
project(FratRatRedemption)
ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(runAllTests
    test/dialogueTest.cpp
    test/npcTest.cpp
    test/endingTest.cpp
    test/StatManagerTest.cpp
    test/playerManagerTest.cpp
    test/playerCustTest.cpp
    test/clockTest.cpp
    test/coordTest.cpp

    src/npc.cpp 
    src/mapManager.cpp 
    src/coord.cpp 
    src/titlePrint.cpp
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
    src/playerCustomization.cpp
    src/titlePrint.cpp
)
TARGET_LINK_LIBRARIES (runAllTests gtest gtest_main)