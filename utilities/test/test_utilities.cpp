#include "scandinavia.hpp"
#include <cassert>
#include <cstdio>

int main()
{
    std::string sw = scandinavia_greet_sweden(0);
    std::string dk = scandinavia_greet_denmark(0);
    assert(!sw.empty());
    assert(!dk.empty());
    std::printf("utilities tests passed\n");
    return 0;
}
