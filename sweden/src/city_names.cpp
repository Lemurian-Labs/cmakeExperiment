#include "city_names.hpp"

const char *city_name(SwedenCity city)
{
    switch (city) {
        case SwedenCity::STOCKHOLM:  return "Stockholm";
        case SwedenCity::GOTHENBURG: return "Gothenburg";
        case SwedenCity::MALMO:      return "Malmo";
        default:                     return "Sverige";
    }
}
