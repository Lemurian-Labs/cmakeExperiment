#include "scandinavia.hpp"
#include <cassert>
#include <cstdio>

int main()
{
    const char *sw = scandinavia_greet_sweden(0);
    const char *dk = scandinavia_greet_denmark(0);
    assert(sw != nullptr);
    assert(dk != nullptr);
    std::printf("utilities tests passed\n");
    return 0;
}
