#ifndef ACNLWA_BSMENUCATALOG_H
#define ACNLWA_BSMENUCATALOG_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuCatalog : public ::MenuBase, public ::state::Mode< ::BsMenuCatalog> {
public:
    virtual ~BsMenuCatalog();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void MenuBase_VF24();
};

#endif  // ACNLWA_BSMENUCATALOG_H
