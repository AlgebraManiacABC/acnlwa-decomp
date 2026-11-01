#ifndef ACNLWA_BSMENUATM_H
#define ACNLWA_BSMENUATM_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuAtm : public ::MenuBase, public ::state::Mode< ::BsMenuAtm> {
public:
    virtual ~BsMenuAtm();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUATM_H
