#ifndef ACNLWA_TENKEYPAD_H
#define ACNLWA_TENKEYPAD_H

#include "acnlwa/state/Mode.h"

class TenkeyPad : public ::state::Mode< ::TenkeyPad> {
public:
    virtual ~TenkeyPad();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_TENKEYPAD_H
