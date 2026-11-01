#ifndef ACNLWA_BSMENUMELODY_H
#define ACNLWA_BSMENUMELODY_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuMelody : public ::MenuBase, public ::state::Mode< ::BsMenuMelody> {
public:
    virtual ~BsMenuMelody();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUMELODY_H
