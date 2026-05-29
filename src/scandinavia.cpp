#include "scandinavia.hpp"
#include "sweden.hpp"
#include "denmark.hpp"

const char *scandinavia_greet_sweden(int city_code)
{
    return sweden_capital_greeting(static_cast<SwedenCity>(city_code));
}

const char *scandinavia_greet_denmark(int city_code)
{
    return denmark_capital_greeting(static_cast<DenmarkCity>(city_code));
}
