#ifndef ACNLWA_BSMENUTOURSELECT_H
#define ACNLWA_BSMENUTOURSELECT_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuTourSelect : public ::MenuBase, public ::state::Mode< ::BsMenuTourSelect> {
public:
    virtual ~BsMenuTourSelect();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUTOURSELECT_H
