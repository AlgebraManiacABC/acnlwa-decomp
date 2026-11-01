#ifndef ACNLWA_SOUNDTV17SNOWCM_H
#define ACNLWA_SOUNDTV17SNOWCM_H

#include "acnlwa/SoundTvBase.h"

class SoundTv17SnowCM : public ::SoundTvBase {
public:
    virtual ~SoundTv17SnowCM();
    virtual void VF02();
    virtual void VF03();
};

#endif  // ACNLWA_SOUNDTV17SNOWCM_H
