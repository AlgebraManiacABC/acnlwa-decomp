#ifndef ACNLWA_BSMENULETTER_H
#define ACNLWA_BSMENULETTER_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuLetter : public ::MenuBase, public ::state::Mode< ::BsMenuLetter> {
public:
    virtual ~BsMenuLetter();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void MenuBase_VF17();
};

#endif  // ACNLWA_BSMENULETTER_H
