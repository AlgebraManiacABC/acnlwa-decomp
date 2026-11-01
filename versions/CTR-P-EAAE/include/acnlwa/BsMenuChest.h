#ifndef ACNLWA_BSMENUCHEST_H
#define ACNLWA_BSMENUCHEST_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuChest : public ::MenuBase, public ::state::Mode< ::BsMenuChest> {
public:
    virtual ~BsMenuChest();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUCHEST_H
