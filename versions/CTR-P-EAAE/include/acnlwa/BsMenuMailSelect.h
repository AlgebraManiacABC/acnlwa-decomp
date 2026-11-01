#ifndef ACNLWA_BSMENUMAILSELECT_H
#define ACNLWA_BSMENUMAILSELECT_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuMailSelect : public ::MenuBase, public ::state::Mode< ::BsMenuMailSelect> {
public:
    virtual ~BsMenuMailSelect();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUMAILSELECT_H
