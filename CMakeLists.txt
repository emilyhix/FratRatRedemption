CMAKE_MINIMUM_REQUIRED(VERSION 3.2)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(runAllTests
    test/endingTest.cpp
)

TARGET_LINK_LIBRARIES(runAllTests gtest gtest_main)