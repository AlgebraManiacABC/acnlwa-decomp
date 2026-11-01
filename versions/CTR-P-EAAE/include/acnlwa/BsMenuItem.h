#ifndef ACNLWA_BSMENUITEM_H
#define ACNLWA_BSMENUITEM_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/script/ITalkRecept.h"
#include "acnlwa/state/Mode.h"

class BsMenuItem : public ::MenuBase, public ::script::ITalkRecept, public ::state::Mode< ::BsMenuItem> {
public:
    virtual ~BsMenuItem();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void MenuBase_VF17();
    virtual void BsMenuItem_VF25();
};

#endif  // ACNLWA_BSMENUITEM_H
