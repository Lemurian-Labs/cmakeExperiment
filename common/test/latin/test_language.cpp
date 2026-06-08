#include "language.hpp"
#include <cassert>
#include <cstdio>
#include <cstring>

int main()
{
    Language &lang = Language::instance();

    assert(std::strcmp(lang.translate(Phrase::HEY,  Lang::FRENCH),  "Bonjour") == 0);
    assert(std::strcmp(lang.translate(Phrase::FROM, Lang::FRENCH),  "de")      == 0);
    assert(std::strcmp(lang.translate(Phrase::HEY,  Lang::SPANISH), "Hola")    == 0);
    assert(std::strcmp(lang.translate(Phrase::FROM, Lang::SPANISH), "de")      == 0);
    assert(std::strcmp(lang.translate(Phrase::HEY,  Lang::ITALIAN), "Ciao")    == 0);
    assert(std::strcmp(lang.translate(Phrase::FROM, Lang::ITALIAN), "da")      == 0);

    std::printf("language tests passed\n");
    return 0;
}
