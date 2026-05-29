#include "sweden.hpp"

static const char *city_name(SwedenCity city)
{
    switch (city) {
        case SwedenCity::STOCKHOLM:  return "Hej fran Stockholm";
        case SwedenCity::GOTHENBURG: return "Hej fran Gothenburg";
        case SwedenCity::MALMO:      return "Hej fran Malmo";
        default:                     return "Hej fran Sverige";
    }
}

const char *sweden_capital_greeting(SwedenCity city)
{
    return city_name(city);
}
