#ifndef ACNLWA_SOUNDTV10SOCCER_H
#define ACNLWA_SOUNDTV10SOCCER_H

#include "acnlwa/SoundTvBase.h"

class SoundTv10Soccer : public ::SoundTvBase {
public:
    virtual ~SoundTv10Soccer();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

#endif  // ACNLWA_SOUNDTV10SOCCER_H
