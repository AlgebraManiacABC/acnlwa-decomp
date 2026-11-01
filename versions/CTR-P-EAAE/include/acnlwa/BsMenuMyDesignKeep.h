#ifndef ACNLWA_BSMENUMYDESIGNKEEP_H
#define ACNLWA_BSMENUMYDESIGNKEEP_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/script/ITalkRecept.h"
#include "acnlwa/state/Mode.h"

class BsMenuMyDesignKeep : public ::MenuBase, public ::script::ITalkRecept, public ::state::Mode< ::BsMenuMyDesignKeep> {
public:
    virtual ~BsMenuMyDesignKeep();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void MenuBase_VF17();
};

#endif  // ACNLWA_BSMENUMYDESIGNKEEP_H
