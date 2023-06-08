CMAKE_MINIMUM_REQUIRED(VERSION 3.2)
project(FratRatRedemption)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(npcAndDialogue
    test/dialogueTest.cpp 
    src/npc.cpp
    src/mapManager.cpp
    src/playerActor.cpp
    src/coord.cpp
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

TARGET_LINK_LIBRARIES (npcAndDialogue gtest gtest_main)

