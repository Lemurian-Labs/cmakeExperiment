#pragma once
#include "language_native.hpp"

enum class Phrase {
    HEY = 0,
    FROM
};

class Language {
public:
    static Language &instance();
    const char *translate(Phrase phrase, Lang lang) const;

private:
    Language() = default;
    Language(const Language &) = delete;
    Language &operator=(const Language &) = delete;
};
