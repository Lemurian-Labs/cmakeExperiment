#include "city_names.hpp"

const char *city_name(DenmarkCity city)
{
    switch (city) {
        case DenmarkCity::COPENHAGEN: return "Copenhagen";
        case DenmarkCity::AARHUS:     return "Aarhus";
        case DenmarkCity::ODENSE:     return "Odense";
        default:                      return "Danmark";
    }
}
