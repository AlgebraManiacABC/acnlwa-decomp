#ifndef ACNLWA_BSMENUTAB_H
#define ACNLWA_BSMENUTAB_H

#include "acnlwa/Base.h"
#include "acnlwa/state/Mode.h"

class BsMenuTab : public ::Base, public ::state::Mode< ::BsMenuTab> {
public:
    virtual ~BsMenuTab();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUTAB_H
