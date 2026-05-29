#pragma once
#include <string>

enum class DenmarkCity {
    COPENHAGEN = 0,
    AARHUS,
    ODENSE
};

std::string denmark_city_greeting(DenmarkCity city);

