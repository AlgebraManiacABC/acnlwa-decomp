#ifndef ACNLWA_SOUNDTV21LAUNDRYCM_H
#define ACNLWA_SOUNDTV21LAUNDRYCM_H

#include "acnlwa/SoundTvBase.h"

class SoundTv21LaundryCM : public ::SoundTvBase {
public:
    virtual ~SoundTv21LaundryCM();
    virtual void VF02();
    virtual void VF04();
};

#endif  // ACNLWA_SOUNDTV21LAUNDRYCM_H
