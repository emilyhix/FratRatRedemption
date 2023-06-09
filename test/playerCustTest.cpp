#include <gtest/gtest.h>
#include <string>
#include "../header/PlayerManager.hpp"
#include "../header/playerCustomization.hpp"

TEST(playerCustomization, creatingClassObj){
    EXPECT_NO_THROW(playerCustom pc;);
}

TEST(playerCustomization, customizationLines_0){
    playerCustom pc;
    
    EXPECT_EQ(pc.getCustomizationLine(0), "Welcome to Frat Rat Redemption! "
              "It's your first frat party of the year, let's get you started.");
}

TEST(playerCustomization, customizationLines_1){
    playerCustom pc;
    
    EXPECT_EQ(pc.getCustomizationLine(1), "First and foremost, how shall we refer to you?");
}

TEST(playerCustomization, customizationLines_2){
    playerCustom pc;
    
    EXPECT_EQ(pc.getCustomizationLine(2), "What a lovely name. What type of person do you "
             "think you are?\nAre you popular? Perhaps a normie? Or how about an Outcast?"
             "\n(Choose 1-3)");
}

TEST(playerCustomization, customizationLines_3){
    playerCustom pc;
    
    EXPECT_EQ(pc.getCustomizationLine(3), "Prepare for your runthrough of Frat Rat Redemption!");
}

TEST(playerCustomization, customizationLines_4){
    playerCustom pc;
    
    EXPECT_EQ(pc.getCustomizationLine(4), "TW/CW: Misogyny/Misogynistic characters, very clique-y "
             "characters, rude interactions, etc.");
}