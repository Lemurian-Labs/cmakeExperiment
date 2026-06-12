#include "sweden.hpp"
#include <gtest/gtest.h>

TEST(Sweden, Cities) {
    EXPECT_EQ(sweden_city_greeting(SwedenCity::STOCKHOLM),  "Bonjour de Stockholm");
    EXPECT_EQ(sweden_city_greeting(SwedenCity::GOTHENBURG), "Bonjour de Gothenburg");
    EXPECT_EQ(sweden_city_greeting(SwedenCity::MALMO),      "Bonjour de Malmo");
}
