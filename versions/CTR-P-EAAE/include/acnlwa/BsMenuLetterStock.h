#ifndef ACNLWA_BSMENULETTERSTOCK_H
#define ACNLWA_BSMENULETTERSTOCK_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuLetterStock : public ::MenuBase, public ::state::Mode< ::BsMenuLetterStock> {
public:
    virtual ~BsMenuLetterStock();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENULETTERSTOCK_H
