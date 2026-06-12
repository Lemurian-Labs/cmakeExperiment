#include "language.hpp"

// Calls through the public Language interface to trigger the _empty_stub assert.
// Expected to abort — CTest marks this WILL_FAIL so an abort is a pass.
int main()
{
    Language::instance().translate(Phrase::HEY, 0);
    return 0;
}
