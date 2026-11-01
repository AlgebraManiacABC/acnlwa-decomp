#ifndef ACNLWA_BSMENUWHATTREEISTHISTREE_H
#define ACNLWA_BSMENUWHATTREEISTHISTREE_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuWhatTreeIsThisTree : public ::MenuBase, public ::state::Mode< ::BsMenuWhatTreeIsThisTree> {
public:
    virtual ~BsMenuWhatTreeIsThisTree();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUWHATTREEISTHISTREE_H
