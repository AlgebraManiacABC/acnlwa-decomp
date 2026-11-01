#ifndef ACNLWA_BSMENUMYDESIGN_H
#define ACNLWA_BSMENUMYDESIGN_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/script/ITalkRecept.h"
#include "acnlwa/state/Mode.h"

class BsMenuMyDesign : public ::MenuBase, public ::script::ITalkRecept, public ::state::Mode< ::BsMenuMyDesign> {
public:
    virtual ~BsMenuMyDesign();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void MenuBase_VF17();
};

#endif  // ACNLWA_BSMENUMYDESIGN_H
