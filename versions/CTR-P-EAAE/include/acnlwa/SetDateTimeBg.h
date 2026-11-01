#ifndef ACNLWA_SETDATETIMEBG_H
#define ACNLWA_SETDATETIMEBG_H

#include "acnlwa/state/Mode.h"

class SetDateTimeBg : public ::state::Mode< ::SetDateTimeBg> {
public:
    virtual ~SetDateTimeBg();
    virtual void Mode_VF02();
};

#endif  // ACNLWA_SETDATETIMEBG_H
