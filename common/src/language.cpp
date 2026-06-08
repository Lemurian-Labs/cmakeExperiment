#include "language.hpp"
#include "localization/lang_lookup.hpp"

Language &Language::instance()
{
    static Language inst;
    return inst;
}

const char *Language::translate(Phrase phrase, Lang lang) const
{
    return lang_lookup(static_cast<int>(phrase), static_cast<int>(lang));
}
