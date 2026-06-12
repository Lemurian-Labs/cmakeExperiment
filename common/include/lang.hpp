#pragma once

// All language identifiers across all localization groups.
// Each group's lang_lookup() handles the subset it supports and asserts on others.
enum class Lang {
    SWEDISH = 0,
    DANISH,
    FRENCH,
    SPANISH,
    ITALIAN
};
