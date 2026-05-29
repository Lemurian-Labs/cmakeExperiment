#include "scandinavia.hpp"
#include "sweden.hpp"
#include "denmark.hpp"

std::string scandinavia_greet_sweden(int city_code)
{
    return sweden_city_greeting(static_cast<SwedenCity>(city_code));
}

std::string scandinavia_greet_denmark(int city_code)
{
    return denmark_city_greeting(static_cast<DenmarkCity>(city_code));
}
