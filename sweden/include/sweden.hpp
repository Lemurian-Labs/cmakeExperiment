#ifndef SWEDEN_HPP
#define SWEDEN_HPP

enum class SwedenCity {
    STOCKHOLM = 0,
    GOTHENBURG,
    MALMO
};

const char *sweden_capital_greeting(SwedenCity city);

#endif /* SWEDEN_HPP */
