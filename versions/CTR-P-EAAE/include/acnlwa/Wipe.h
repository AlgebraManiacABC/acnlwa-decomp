#ifndef ACNLWA_WIPE_H
#define ACNLWA_WIPE_H

#include "acnlwa/state/Mode.h"

class Wipe : public ::state::Mode< ::Wipe> {
public:
    virtual ~Wipe();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_WIPE_H
