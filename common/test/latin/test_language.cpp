#include "language.hpp"
#include <cassert>
#include <cstdio>
#include <cstring>

int main()
{
    Language &lang = Language::instance();

    assert(std::strcmp(lang.translate(Phrase::HEY,  0), "Bonjour") == 0);  // FRENCH
    assert(std::strcmp(lang.translate(Phrase::FROM, 0), "de")      == 0);
    assert(std::strcmp(lang.translate(Phrase::HEY,  1), "Hola")    == 0);  // SPANISH
    assert(std::strcmp(lang.translate(Phrase::FROM, 1), "de")      == 0);
    assert(std::strcmp(lang.translate(Phrase::HEY,  2), "Ciao")    == 0);  // ITALIAN
    assert(std::strcmp(lang.translate(Phrase::FROM, 2), "da")      == 0);

    std::printf("language tests passed\n");
    return 0;
}
