#ifndef ACNLWA_BSSKB_H
#define ACNLWA_BSSKB_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/script/ITalkRecept.h"
#include "acnlwa/state/Mode.h"

class BsSkb : public ::MenuBase, public ::script::ITalkRecept, public ::state::Mode< ::BsSkb> {
public:
    virtual ~BsSkb();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void MenuBase_VF17();
};

#endif  // ACNLWA_BSSKB_H
