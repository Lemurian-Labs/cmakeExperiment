#include "sweden.hpp"
#include <cassert>
#include <cstdio>
#include <cstring>

int main()
{
    const char *msg = sweden_capital_greeting(SwedenCity::STOCKHOLM);
    assert(msg != nullptr);
    assert(std::strcmp(msg, "Hej fran Stockholm") == 0);
    std::printf("sweden tests passed\n");
    return 0;
}
