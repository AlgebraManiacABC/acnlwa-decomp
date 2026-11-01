#ifndef ACNLWA_BSMENUBOOK_H
#define ACNLWA_BSMENUBOOK_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuBook : public ::MenuBase, public ::state::Mode< ::BsMenuBook> {
public:
    virtual ~BsMenuBook();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUBOOK_H
