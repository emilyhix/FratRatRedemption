CMAKE_MINIMUM_REQUIRED(VERSION 3.2)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(runAllTests
    test/playerManagerTest.cpp

)

TARGET_LINK_LIBRARIES(runAllTests gtest gtest_main)