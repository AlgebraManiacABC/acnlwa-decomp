#ifndef ACNLWA_SOUNDTV05QUIZ_H
#define ACNLWA_SOUNDTV05QUIZ_H

#include "acnlwa/SoundTvBase.h"

class SoundTv05Quiz : public ::SoundTvBase {
public:
    virtual ~SoundTv05Quiz();
    virtual void VF02();
    virtual void VF04();
};

#endif  // ACNLWA_SOUNDTV05QUIZ_H
