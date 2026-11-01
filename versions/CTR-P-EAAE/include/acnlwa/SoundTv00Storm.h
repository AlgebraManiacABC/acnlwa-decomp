#ifndef ACNLWA_SOUNDTV00STORM_H
#define ACNLWA_SOUNDTV00STORM_H

#include "acnlwa/SoundTvBase.h"

class SoundTv00Storm : public ::SoundTvBase {
public:
    virtual ~SoundTv00Storm();
    virtual void VF02();
    virtual void VF03();
};

#endif  // ACNLWA_SOUNDTV00STORM_H
