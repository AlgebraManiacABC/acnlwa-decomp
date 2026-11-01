#ifndef ACNLWA_BSMENUBBSEDITER_H
#define ACNLWA_BSMENUBBSEDITER_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuBbsEditer : public ::MenuBase, public ::state::Mode< ::BsMenuBbsEditer> {
public:
    virtual ~BsMenuBbsEditer();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUBBSEDITER_H
