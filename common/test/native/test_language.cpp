#include "language.hpp"
#include <cassert>
#include <cstdio>
#include <cstring>

int main()
{
    Language &lang = Language::instance();

    assert(std::strcmp(lang.translate(Phrase::HEY,  0), "Hej")  == 0);  // SWEDISH
    assert(std::strcmp(lang.translate(Phrase::FROM, 0), "fran") == 0);
    assert(std::strcmp(lang.translate(Phrase::HEY,  1), "Hej")  == 0);  // DANISH
    assert(std::strcmp(lang.translate(Phrase::FROM, 1), "fra")  == 0);

    std::printf("language tests passed\n");
    return 0;
}
