#pragma once

enum class Phrase {
    HEY = 0,
    FROM
};

enum class Lang {
    SWEDISH = 0,
    DANISH
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
