#ifndef ACNLWA_SOUNDTV04SONG_H
#define ACNLWA_SOUNDTV04SONG_H

#include "acnlwa/SoundTvBase.h"

class SoundTv04Song : public ::SoundTvBase {
public:
    virtual ~SoundTv04Song();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

#endif  // ACNLWA_SOUNDTV04SONG_H
