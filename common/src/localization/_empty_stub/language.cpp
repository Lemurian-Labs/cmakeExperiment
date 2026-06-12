#include "lang_lookup.hpp"
#include <cassert>

// Empty stub used when no real localization exists for LANGUAGE_GROUP.
// Satisfies the linker so the build succeeds; asserts at runtime so any code
// path that actually calls lang_lookup will be caught by product-level tests.
// Replace this directory with a real localization/${LANGUAGE_GROUP}/ directory.
const char *lang_lookup(int /*phrase*/, int /*lang*/)
{
    assert(false && "lang_lookup called but no localization defined for this LANGUAGE_GROUP");
    return nullptr;
}
