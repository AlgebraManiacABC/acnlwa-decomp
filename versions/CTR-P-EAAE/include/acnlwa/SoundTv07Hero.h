#ifndef ACNLWA_SOUNDTV07HERO_H
#define ACNLWA_SOUNDTV07HERO_H

#include "acnlwa/SoundTvBase.h"

class SoundTv07Hero : public ::SoundTvBase {
public:
    virtual ~SoundTv07Hero();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

#endif  // ACNLWA_SOUNDTV07HERO_H
