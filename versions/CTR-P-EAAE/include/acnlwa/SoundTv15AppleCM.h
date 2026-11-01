#ifndef ACNLWA_SOUNDTV15APPLECM_H
#define ACNLWA_SOUNDTV15APPLECM_H

#include "acnlwa/SoundTvBase.h"

class SoundTv15AppleCM : public ::SoundTvBase {
public:
    virtual ~SoundTv15AppleCM();
    virtual void VF02();
    virtual void VF03();
};

#endif  // ACNLWA_SOUNDTV15APPLECM_H
