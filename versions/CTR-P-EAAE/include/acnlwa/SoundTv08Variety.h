#ifndef ACNLWA_SOUNDTV08VARIETY_H
#define ACNLWA_SOUNDTV08VARIETY_H

#include "acnlwa/SoundTvBase.h"

class SoundTv08Variety : public ::SoundTvBase {
public:
    virtual ~SoundTv08Variety();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

#endif  // ACNLWA_SOUNDTV08VARIETY_H
