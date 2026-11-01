#ifndef ACNLWA_DUCKINGFADER_H
#define ACNLWA_DUCKINGFADER_H

#include "acnlwa/SoundFaderEx.h"

class DuckingFader : public ::SoundFaderEx {
public:
    virtual ~DuckingFader();
    virtual void VF03();
};

#endif  // ACNLWA_DUCKINGFADER_H
