#ifndef ACNLWA_BSMENUPASSPORTFORGHOST_H
#define ACNLWA_BSMENUPASSPORTFORGHOST_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuPassportForGhost : public ::MenuBase, public ::state::Mode< ::BsMenuPassportForGhost> {
public:
    virtual ~BsMenuPassportForGhost();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUPASSPORTFORGHOST_H
