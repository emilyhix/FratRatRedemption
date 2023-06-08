#include <gtest/gtest.h>
#include <string>
#include "../header/PlayerManager.hpp"
#include "../header/playerCustomization.hpp"

TEST(playerCustomization, creatingClassObj){
    EXPECT_NO_THROW(playerCustom pc;);
}
