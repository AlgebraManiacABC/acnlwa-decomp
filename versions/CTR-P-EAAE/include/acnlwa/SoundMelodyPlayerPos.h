#ifndef ACNLWA_SOUNDMELODYPLAYERPOS_H
#define ACNLWA_SOUNDMELODYPLAYERPOS_H

#include "acnlwa/SoundMelodyPlayerBase.h"

class SoundMelodyPlayerPos : public ::SoundMelodyPlayerBase {
public:
    virtual ~SoundMelodyPlayerPos();
    virtual void VF02();
};

#endif  // ACNLWA_SOUNDMELODYPLAYERPOS_H
