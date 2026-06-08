#include "denmark.hpp"
#include <cassert>
#include <cstdio>

int main()
{
    std::string msg = denmark_city_greeting(DenmarkCity::COPENHAGEN);
    assert(msg == "Hej fra Copenhagen");
    std::printf("denmark tests passed\n");
    return 0;
}
