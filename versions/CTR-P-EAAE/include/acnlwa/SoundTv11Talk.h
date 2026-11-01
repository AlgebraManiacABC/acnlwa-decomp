#ifndef ACNLWA_SOUNDTV11TALK_H
#define ACNLWA_SOUNDTV11TALK_H

#include "acnlwa/SoundTvBase.h"

class SoundTv11Talk : public ::SoundTvBase {
public:
    virtual ~SoundTv11Talk();
    virtual void VF02();
    virtual void VF04();
};

#endif  // ACNLWA_SOUNDTV11TALK_H
