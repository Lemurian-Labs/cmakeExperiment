#include "../lang_lookup.hpp"
#include "lang.hpp"
#include <cassert>

static const char *const table[2][3] = {
    /* HEY  */ { "Bonjour",  "Hola",  "Ciao" },
    /* FROM */ { "de",       "de",    "da"   },
};

const char *lang_lookup(int phrase, int lang)
{
    switch (static_cast<Lang>(lang)) {
        case Lang::FRENCH:  return table[phrase][0];
        case Lang::SPANISH: return table[phrase][1];
        case Lang::ITALIAN: return table[phrase][2];
        default: assert(false && "Lang value not supported by latin group"); return nullptr;
    }
}
