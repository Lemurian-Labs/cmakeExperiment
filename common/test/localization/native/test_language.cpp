#include "language.hpp"
#include "lang.hpp"
#include <gtest/gtest.h>

TEST(Language, Swedish) {
    Language &lang = Language::instance();
    const int sw = static_cast<int>(Lang::SWEDISH);
    EXPECT_STREQ(lang.translate(Phrase::HEY,  sw), "Hej");
    EXPECT_STREQ(lang.translate(Phrase::FROM, sw), "fran");
}

TEST(Language, Danish) {
    Language &lang = Language::instance();
    const int da = static_cast<int>(Lang::DANISH);
    EXPECT_STREQ(lang.translate(Phrase::HEY,  da), "Hej");
    EXPECT_STREQ(lang.translate(Phrase::FROM, da), "fra");
}
