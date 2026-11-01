#ifndef ACNLWA_SEAD_AUDIOFXCTR_H
#define ACNLWA_SEAD_AUDIOFXCTR_H

#include "acnlwa/sead/AudioFx.h"

namespace sead {

class AudioFxCtr : public ::sead::AudioFx {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~AudioFxCtr();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_AUDIOFXCTR_H
