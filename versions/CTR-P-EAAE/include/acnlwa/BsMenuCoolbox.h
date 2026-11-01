#ifndef ACNLWA_BSMENUCOOLBOX_H
#define ACNLWA_BSMENUCOOLBOX_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuCoolbox : public ::MenuBase, public ::state::Mode< ::BsMenuCoolbox> {
public:
    virtual ~BsMenuCoolbox();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUCOOLBOX_H
