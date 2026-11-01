#ifndef ACNLWA_SOUNDFADEREX_H
#define ACNLWA_SOUNDFADEREX_H

#include "acnlwa/SoundFader.h"

class SoundFaderEx : public ::SoundFader {
public:
    virtual ~SoundFaderEx();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

#endif  // ACNLWA_SOUNDFADEREX_H
