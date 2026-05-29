#include "sweden.hpp"
#include "city_names.hpp"
#include "language.hpp"
#include <string>

std::string sweden_city_greeting(SwedenCity city)
{
    Language &lang = Language::instance();
    return std::string(lang.translate(Phrase::HEY,  Lang::SWEDISH))
         + " " + lang.translate(Phrase::FROM, Lang::SWEDISH)
         + " " + city_name(city);
}
