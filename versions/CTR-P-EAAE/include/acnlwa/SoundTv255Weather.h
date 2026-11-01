#ifndef ACNLWA_SOUNDTV255WEATHER_H
#define ACNLWA_SOUNDTV255WEATHER_H

#include "acnlwa/SoundTvBase.h"

class SoundTv255Weather : public ::SoundTvBase {
public:
    virtual ~SoundTv255Weather();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

#endif  // ACNLWA_SOUNDTV255WEATHER_H
