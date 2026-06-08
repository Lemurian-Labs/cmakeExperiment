#include "language.hpp"

Language &Language::instance()
{
    static Language inst;
    return inst;
}

const char *Language::translate(Phrase phrase, Lang lang) const
{
    return table[static_cast<int>(phrase)][static_cast<int>(lang)];
}
