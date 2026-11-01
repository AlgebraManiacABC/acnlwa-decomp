#ifndef ACNLWA_WAITICON_H
#define ACNLWA_WAITICON_H

#include "acnlwa/state/Mode.h"

class WaitIcon : public ::state::Mode< ::WaitIcon> {
public:
    virtual ~WaitIcon();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_WAITICON_H
