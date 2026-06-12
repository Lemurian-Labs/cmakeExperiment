#include "sweden.hpp"
#include <cassert>
#include <cstdio>

int main()
{
    assert(sweden_city_greeting(SwedenCity::STOCKHOLM)  == "Bonjour de Stockholm");
    assert(sweden_city_greeting(SwedenCity::GOTHENBURG) == "Bonjour de Gothenburg");
    assert(sweden_city_greeting(SwedenCity::MALMO)      == "Bonjour de Malmo");
    std::printf("sweden tests passed\n");
    return 0;
}
