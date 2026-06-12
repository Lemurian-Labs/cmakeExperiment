#include "denmark.hpp"
#include <gtest/gtest.h>

TEST(Denmark, Copenhagen) {
    EXPECT_EQ(denmark_city_greeting(DenmarkCity::COPENHAGEN), "Hej fra Copenhagen");
}
