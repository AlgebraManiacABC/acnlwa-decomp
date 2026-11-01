#ifndef ACNLWA_SOUNDTV13COOKING_H
#define ACNLWA_SOUNDTV13COOKING_H

#include "acnlwa/SoundTvBase.h"

class SoundTv13Cooking : public ::SoundTvBase {
public:
    virtual ~SoundTv13Cooking();
    virtual void VF02();
    virtual void VF04();
};

#endif  // ACNLWA_SOUNDTV13COOKING_H
