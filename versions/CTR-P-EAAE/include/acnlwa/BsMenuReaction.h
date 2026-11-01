#ifndef ACNLWA_BSMENUREACTION_H
#define ACNLWA_BSMENUREACTION_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuReaction : public ::MenuBase, public ::state::Mode< ::BsMenuReaction> {
public:
    virtual ~BsMenuReaction();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void MenuBase_VF17();
};

#endif  // ACNLWA_BSMENUREACTION_H
