#ifndef ACNLWA_BSMENUSETUPTIME_H
#define ACNLWA_BSMENUSETUPTIME_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuSetupTime : public ::MenuBase, public ::state::Mode< ::BsMenuSetupTime> {
public:
    virtual ~BsMenuSetupTime();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUSETUPTIME_H
