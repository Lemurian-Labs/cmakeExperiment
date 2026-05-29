#include "scandinavia.hpp"
#include <cstdio>

int main()
{
    std::printf("%s\n", scandinavia_greet_sweden(0).c_str());
    std::printf("%s\n", scandinavia_greet_denmark(0).c_str());
    return 0;
}
