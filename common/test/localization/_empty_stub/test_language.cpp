#include "language.hpp"
#include <gtest/gtest.h>

TEST(EmptyStub, TranslateAborts) {
    EXPECT_DEATH(Language::instance().translate(Phrase::HEY, 0), "");
}
