#include "../lang_lookup.hpp"

//                           FRENCH      SPANISH   ITALIAN
static const char *const table[2][3] = {
    /* HEY  */ { "Bonjour",  "Hola",  "Ciao" },
    /* FROM */ { "de",       "de",    "da"   },
};

const char *lang_lookup(int phrase, int lang)
{
    return table[phrase][lang];
}
