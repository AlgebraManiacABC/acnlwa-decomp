#ifndef ACNLWA_SOUNDTV06TRAVEL_H
#define ACNLWA_SOUNDTV06TRAVEL_H

#include "acnlwa/SoundTvBase.h"

class SoundTv06Travel : public ::SoundTvBase {
public:
    virtual ~SoundTv06Travel();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

#endif  // ACNLWA_SOUNDTV06TRAVEL_H
