#include "lang_lookup.hpp"
#include "lang.hpp"
#include <cassert>

static const char *const table[2][2] = {
    /* HEY  */ { "Hej",  "Hej" },
    /* FROM */ { "fran", "fra" },
};

const char *lang_lookup(int phrase, int lang)
{
    switch (static_cast<Lang>(lang)) {
        case Lang::SWEDISH: return table[phrase][0];
        case Lang::DANISH:  return table[phrase][1];
        default: assert(false && "Lang value not supported by native group"); return nullptr;
    }
}
