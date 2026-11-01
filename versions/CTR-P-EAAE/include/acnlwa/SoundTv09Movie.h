#ifndef ACNLWA_SOUNDTV09MOVIE_H
#define ACNLWA_SOUNDTV09MOVIE_H

#include "acnlwa/SoundTvBase.h"

class SoundTv09Movie : public ::SoundTvBase {
public:
    virtual ~SoundTv09Movie();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
};

#endif  // ACNLWA_SOUNDTV09MOVIE_H
