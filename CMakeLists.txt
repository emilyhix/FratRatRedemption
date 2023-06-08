CMAKE_MINIMUM_REQUIRED(VERSION 3.2)
project(FratRatRedemption)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(customize
    test/playerCustTest.cpp
    src/playerCustomization.cpp 
    src/PlayerManager.cpp
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

TARGET_LINK_LIBRARIES (customize gtest gtest_main)
