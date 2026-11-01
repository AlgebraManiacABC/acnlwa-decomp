#ifndef ACNLWA_SOUNDFADERPLAYER_H
#define ACNLWA_SOUNDFADERPLAYER_H

#include "acnlwa/SoundFader.h"

class SoundFaderPlayer : public ::SoundFader {
public:
    virtual ~SoundFaderPlayer();
    virtual void VF03();
};

#endif  // ACNLWA_SOUNDFADERPLAYER_H
