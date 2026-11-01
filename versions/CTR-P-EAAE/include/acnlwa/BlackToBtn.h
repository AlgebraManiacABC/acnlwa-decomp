#ifndef ACNLWA_BLACKTOBTN_H
#define ACNLWA_BLACKTOBTN_H

#include "acnlwa/state/Mode.h"

class BlackToBtn : public ::state::Mode< ::BlackToBtn> {
public:
    virtual ~BlackToBtn();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_BLACKTOBTN_H
