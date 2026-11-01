#ifndef ACNLWA_SOUNDTV18UFOCM_H
#define ACNLWA_SOUNDTV18UFOCM_H

#include "acnlwa/SoundTvBase.h"

class SoundTv18UfoCM : public ::SoundTvBase {
public:
    virtual ~SoundTv18UfoCM();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

#endif  // ACNLWA_SOUNDTV18UFOCM_H
