#include "test_utilities.hpp"
#include "scandinavia.hpp"

TEST_P(SwedenGreetingTest, Greeting) {
    EXPECT_EQ(scandinavia_greet_sweden(GetParam().city_code), GetParam().expected);
}

TEST_P(DenmarkGreetingTest, Greeting) {
    EXPECT_EQ(scandinavia_greet_denmark(GetParam().city_code), GetParam().expected);
}
