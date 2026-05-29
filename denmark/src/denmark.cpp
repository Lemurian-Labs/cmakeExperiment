#include "denmark.hpp"
#include "city_names.hpp"
#include "language.hpp"
#include <string>

std::string denmark_city_greeting(DenmarkCity city)
{
    Language &lang = Language::instance();
    return std::string(lang.translate(Phrase::HEY,  Lang::DANISH))
         + " " + lang.translate(Phrase::FROM, Lang::DANISH)
         + " " + city_name(city);
}
