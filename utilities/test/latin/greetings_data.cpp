#include "../test_utilities.hpp"

INSTANTIATE_TEST_SUITE_P(Latin, SwedenGreetingTest, testing::Values(
    GreetingCase{0, "Bonjour de Stockholm"},
    GreetingCase{1, "Bonjour de Gothenburg"},
    GreetingCase{2, "Bonjour de Malmo"}
));

INSTANTIATE_TEST_SUITE_P(Latin, DenmarkGreetingTest, testing::Values(
    GreetingCase{0, "Hola de Copenhagen"},
    GreetingCase{1, "Hola de Aarhus"},
    GreetingCase{2, "Hola de Odense"}
));
