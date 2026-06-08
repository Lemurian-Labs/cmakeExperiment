#include "../test_utilities.hpp"

INSTANTIATE_TEST_SUITE_P(Native, SwedenGreetingTest, testing::Values(
    GreetingCase{0, "Hej fran Stockholm"},
    GreetingCase{1, "Hej fran Gothenburg"},
    GreetingCase{2, "Hej fran Malmo"}
));

INSTANTIATE_TEST_SUITE_P(Native, DenmarkGreetingTest, testing::Values(
    GreetingCase{0, "Hej fra Copenhagen"},
    GreetingCase{1, "Hej fra Aarhus"},
    GreetingCase{2, "Hej fra Odense"}
));
