#include "denmark.hpp"
#include "city_names.hpp"
#include "language.hpp"
#include <string>

std::string denmark_city_greeting(DenmarkCity city)
{
    Language &lang = Language::instance();
    return std::string(lang.translate(Phrase::HEY,  1))
         + " " + lang.translate(Phrase::FROM, 1)
         + " " + city_name(city);
}
