#ifndef ACNLWA_BSMENUMYDESIGNSELECT_H
#define ACNLWA_BSMENUMYDESIGNSELECT_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/script/ITalkRecept.h"
#include "acnlwa/state/Mode.h"

class BsMenuMyDesignSelect : public ::MenuBase, public ::script::ITalkRecept, public ::state::Mode< ::BsMenuMyDesignSelect> {
public:
    virtual ~BsMenuMyDesignSelect();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void MenuBase_VF17();
};

#endif  // ACNLWA_BSMENUMYDESIGNSELECT_H
