CMAKE_MINIMUM_REQUIRED(VERSION 3.2)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(ending
    test/test.cpp
)

TARGET_LINK_LIBRARIES(ending gtest gtest_main)