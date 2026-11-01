#ifndef ACNLWA_FADE_H
#define ACNLWA_FADE_H

#include "acnlwa/state/Mode.h"

class Fade : public ::state::Mode< ::Fade> {
public:
    virtual ~Fade();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_FADE_H
