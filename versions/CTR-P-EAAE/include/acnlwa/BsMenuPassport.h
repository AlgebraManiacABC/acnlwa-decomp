#ifndef ACNLWA_BSMENUPASSPORT_H
#define ACNLWA_BSMENUPASSPORT_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuPassport : public ::MenuBase, public ::state::Mode< ::BsMenuPassport> {
public:
    virtual ~BsMenuPassport();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUPASSPORT_H
