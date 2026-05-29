#include "sweden.hpp"
#include <cassert>
#include <cstdio>

int main()
{
    std::string msg = sweden_city_greeting(SwedenCity::STOCKHOLM);
    assert(msg == "Hej fran Stockholm");
    std::printf("sweden tests passed\n");
    return 0;
}
