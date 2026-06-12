#include "sweden.hpp"
#include <gtest/gtest.h>

TEST(Sweden, Stockholm) {
    EXPECT_EQ(sweden_city_greeting(SwedenCity::STOCKHOLM), "Hej fran Stockholm");
}
