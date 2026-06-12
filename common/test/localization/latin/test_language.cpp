#include "language.hpp"
#include "lang.hpp"
#include <gtest/gtest.h>

TEST(Language, French) {
    Language &lang = Language::instance();
    const int fr = static_cast<int>(Lang::FRENCH);
    EXPECT_STREQ(lang.translate(Phrase::HEY,  fr), "Bonjour");
    EXPECT_STREQ(lang.translate(Phrase::FROM, fr), "de");
}

TEST(Language, Spanish) {
    Language &lang = Language::instance();
    const int es = static_cast<int>(Lang::SPANISH);
    EXPECT_STREQ(lang.translate(Phrase::HEY,  es), "Hola");
    EXPECT_STREQ(lang.translate(Phrase::FROM, es), "de");
}

TEST(Language, Italian) {
    Language &lang = Language::instance();
    const int it = static_cast<int>(Lang::ITALIAN);
    EXPECT_STREQ(lang.translate(Phrase::HEY,  it), "Ciao");
    EXPECT_STREQ(lang.translate(Phrase::FROM, it), "da");
}
