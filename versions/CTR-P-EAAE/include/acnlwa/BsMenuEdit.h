#ifndef ACNLWA_BSMENUEDIT_H
#define ACNLWA_BSMENUEDIT_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuEdit : public ::MenuBase, public ::state::Mode< ::BsMenuEdit> {
public:
    virtual ~BsMenuEdit();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUEDIT_H
