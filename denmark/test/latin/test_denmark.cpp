#include "denmark.hpp"
#include <cassert>
#include <cstdio>

int main()
{
    assert(denmark_city_greeting(DenmarkCity::COPENHAGEN) == "Hola de Copenhagen");
    assert(denmark_city_greeting(DenmarkCity::AARHUS)     == "Hola de Aarhus");
    assert(denmark_city_greeting(DenmarkCity::ODENSE)     == "Hola de Odense");
    std::printf("denmark tests passed\n");
    return 0;
}
