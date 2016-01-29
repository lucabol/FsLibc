#ifndef STRMOD_FIXTURE_H
#define STRMOD_FIXTURE_H

#include "fslc_string.h"
#include "stringx.h"


struct StrModFixture
{
    static const int MAXLEN = 100;
    char testString[MAXLEN];
    char expectedString[MAXLEN];

    StrModFixture();
};


#endif /* STRMOD_FIXTURE_H */
