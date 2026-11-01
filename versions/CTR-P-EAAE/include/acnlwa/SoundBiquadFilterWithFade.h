#ifndef ACNLWA_SOUNDBIQUADFILTERWITHFADE_H
#define ACNLWA_SOUNDBIQUADFILTERWITHFADE_H

#include "acnlwa/nw/snd/BiquadFilterCallback.h"

class SoundBiquadFilterWithFade : public ::nw::snd::BiquadFilterCallback {
public:
    virtual ~SoundBiquadFilterWithFade();
    virtual void VF02();
};

#endif  // ACNLWA_SOUNDBIQUADFILTERWITHFADE_H
