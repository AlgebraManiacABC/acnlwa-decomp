#ifndef ACNLWA_BSMENUMIISELECT_H
#define ACNLWA_BSMENUMIISELECT_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuMiiSelect : public ::MenuBase, public ::state::Mode< ::BsMenuMiiSelect> {
public:
    virtual ~BsMenuMiiSelect();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUMIISELECT_H
