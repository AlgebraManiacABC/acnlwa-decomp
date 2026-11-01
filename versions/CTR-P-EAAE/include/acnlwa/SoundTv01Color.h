#ifndef ACNLWA_SOUNDTV01COLOR_H
#define ACNLWA_SOUNDTV01COLOR_H

#include "acnlwa/SoundTvBase.h"

class SoundTv01Color : public ::SoundTvBase {
public:
    virtual ~SoundTv01Color();
    virtual void VF02();
    virtual void VF03();
};

#endif  // ACNLWA_SOUNDTV01COLOR_H
