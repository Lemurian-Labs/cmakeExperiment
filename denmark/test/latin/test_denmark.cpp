#include "denmark.hpp"
#include <gtest/gtest.h>

TEST(Denmark, Cities) {
    EXPECT_EQ(denmark_city_greeting(DenmarkCity::COPENHAGEN), "Hola de Copenhagen");
    EXPECT_EQ(denmark_city_greeting(DenmarkCity::AARHUS),     "Hola de Aarhus");
    EXPECT_EQ(denmark_city_greeting(DenmarkCity::ODENSE),     "Hola de Odense");
}
