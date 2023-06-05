CMAKE_MINIMUM_REQUIRED(VERSION 3.2)

project(FratRatRedemption)

ADD_EXECUTABLE(run 
src/coord.cpp
src/gameClock.cpp
src/mapManager.cpp
gameManager.cpp
src/playerActor.cpp
src/userInput.cpp
)