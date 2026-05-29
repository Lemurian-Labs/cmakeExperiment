#ifndef DENMARK_HPP
#define DENMARK_HPP

enum class DenmarkCity {
    COPENHAGEN = 0,
    AARHUS,
    ODENSE
};

const char *denmark_capital_greeting(DenmarkCity city);

#endif /* DENMARK_HPP */
