CMAKE_MINIMUM_REQUIRED(VERSION 3.2)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(player
    test/test.cpp
)

TARGET_LINK_LIBRARIES(player gtest gtest_main)