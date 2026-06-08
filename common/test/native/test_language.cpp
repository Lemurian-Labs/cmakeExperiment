#include "language.hpp"
#include <cassert>
#include <cstdio>
#include <cstring>

int main()
{
    Language &lang = Language::instance();

    assert(std::strcmp(lang.translate(Phrase::HEY,  Lang::SWEDISH), "Hej")  == 0);
    assert(std::strcmp(lang.translate(Phrase::FROM, Lang::SWEDISH), "fran") == 0);
    assert(std::strcmp(lang.translate(Phrase::HEY,  Lang::DANISH),  "Hej")  == 0);
    assert(std::strcmp(lang.translate(Phrase::FROM, Lang::DANISH),  "fra")  == 0);

    std::printf("language tests passed\n");
    return 0;
}
