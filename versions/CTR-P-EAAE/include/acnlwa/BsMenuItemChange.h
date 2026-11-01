#ifndef ACNLWA_BSMENUITEMCHANGE_H
#define ACNLWA_BSMENUITEMCHANGE_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/script/ITalkRecept.h"
#include "acnlwa/state/Mode.h"

class BsMenuItemChange : public ::MenuBase, public ::script::ITalkRecept, public ::state::Mode< ::BsMenuItemChange> {
public:
    virtual ~BsMenuItemChange();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUITEMCHANGE_H
