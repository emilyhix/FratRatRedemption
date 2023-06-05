CMAKE_MINIMUM_REQUIRED(VERSION 3.2)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(testing
    test/test.cpp 
    src/npc.cpp
)

TARGET_LINK_LIBRARIES(testing gtest gtest_main)

