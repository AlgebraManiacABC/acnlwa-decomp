#ifndef ACNLWA_SOUNDTV16SINGCM_H
#define ACNLWA_SOUNDTV16SINGCM_H

#include "acnlwa/SoundTvBase.h"

class SoundTv16SingCM : public ::SoundTvBase {
public:
    virtual ~SoundTv16SingCM();
    virtual void VF02();
    virtual void VF03();
};

#endif  // ACNLWA_SOUNDTV16SINGCM_H
