#ifndef ACNLWA_BSMENUITEMSELECT_H
#define ACNLWA_BSMENUITEMSELECT_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuItemSelect : public ::MenuBase, public ::state::Mode< ::BsMenuItemSelect> {
public:
    virtual ~BsMenuItemSelect();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUITEMSELECT_H
