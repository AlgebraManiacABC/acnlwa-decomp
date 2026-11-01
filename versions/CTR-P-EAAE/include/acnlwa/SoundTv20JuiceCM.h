#ifndef ACNLWA_SOUNDTV20JUICECM_H
#define ACNLWA_SOUNDTV20JUICECM_H

#include "acnlwa/SoundTvBase.h"

class SoundTv20JuiceCM : public ::SoundTvBase {
public:
    virtual ~SoundTv20JuiceCM();
    virtual void VF02();
    virtual void VF04();
};

#endif  // ACNLWA_SOUNDTV20JUICECM_H
