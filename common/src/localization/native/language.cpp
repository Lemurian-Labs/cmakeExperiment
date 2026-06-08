#include "../lang_lookup.hpp"

//                          SWEDISH  DANISH
static const char *const table[2][2] = {
    /* HEY  */ { "Hej",  "Hej" },
    /* FROM */ { "fran", "fra" },
};

const char *lang_lookup(int phrase, int lang)
{
    return table[phrase][lang];
}
