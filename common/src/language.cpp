#include "language.hpp"

Language &Language::instance()
{
    static Language inst;
    return inst;
}

const char *Language::translate(Phrase phrase, Lang lang) const
{
    //                  SWEDISH   DANISH
    static const char *table[2][2] = {
        /* HEY  */  { "Hej",   "Hej"  },
        /* FROM */  { "fran",  "fra"  },
    };
    return table[static_cast<int>(phrase)][static_cast<int>(lang)];
}
