#include "denmark.hpp"
#include <cassert>
#include <cstdio>
#include <cstring>

int main()
{
    const char *msg = denmark_capital_greeting(DenmarkCity::COPENHAGEN);
    assert(msg != nullptr);
    assert(std::strcmp(msg, "Hej fra Copenhagen") == 0);
    std::printf("denmark tests passed\n");
    return 0;
}
