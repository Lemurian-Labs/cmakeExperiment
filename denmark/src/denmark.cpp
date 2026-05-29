#include "denmark.hpp"

static const char *city_name(DenmarkCity city)
{
    switch (city) {
        case DenmarkCity::COPENHAGEN: return "Hej fra Copenhagen";
        case DenmarkCity::AARHUS:     return "Hej fra Aarhus";
        case DenmarkCity::ODENSE:     return "Hej fra Odense";
        default:                      return "Hej fra Danmark";
    }
}

const char *denmark_capital_greeting(DenmarkCity city)
{
    return city_name(city);
}
