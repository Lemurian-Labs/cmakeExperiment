#pragma once
#include <string>

enum class SwedenCity {
    STOCKHOLM = 0,
    GOTHENBURG,
    MALMO
};

std::string sweden_city_greeting(SwedenCity city);

