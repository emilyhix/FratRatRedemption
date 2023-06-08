#include <gtest/gtest.h>
#include <string>
#include "../header/PlayerManager.hpp"
#include "../src/playerCustomization.cpp"

TEST(playerCustomization, creatingClassObj){
    EXPECT_NO_THROW(playerCustom pc;);
}
