#ifndef ACNLWA_SOUNDTV02NEWS_H
#define ACNLWA_SOUNDTV02NEWS_H

#include "acnlwa/SoundTvBase.h"

class SoundTv02News : public ::SoundTvBase {
public:
    virtual ~SoundTv02News();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

#endif  // ACNLWA_SOUNDTV02NEWS_H
