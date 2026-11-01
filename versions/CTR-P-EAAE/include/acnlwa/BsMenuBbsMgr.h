#ifndef ACNLWA_BSMENUBBSMGR_H
#define ACNLWA_BSMENUBBSMGR_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuBbsMgr : public ::MenuBase, public ::state::Mode< ::BsMenuBbsMgr> {
public:
    virtual ~BsMenuBbsMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUBBSMGR_H
