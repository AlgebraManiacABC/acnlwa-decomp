#ifndef ACNLWA_PALETTE_H
#define ACNLWA_PALETTE_H

#include "acnlwa/state/Mode.h"

class Palette : public ::state::Mode< ::Palette> {
public:
    virtual ~Palette();
    virtual void Mode_VF02();
    virtual void VF03();
};

#endif  // ACNLWA_PALETTE_H
