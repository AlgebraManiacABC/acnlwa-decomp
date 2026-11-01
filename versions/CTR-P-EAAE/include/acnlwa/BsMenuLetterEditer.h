#ifndef ACNLWA_BSMENULETTEREDITER_H
#define ACNLWA_BSMENULETTEREDITER_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuLetterEditer : public ::MenuBase, public ::state::Mode< ::BsMenuLetterEditer> {
public:
    virtual ~BsMenuLetterEditer();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENULETTEREDITER_H
