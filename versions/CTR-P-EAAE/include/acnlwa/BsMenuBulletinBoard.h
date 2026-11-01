#ifndef ACNLWA_BSMENUBULLETINBOARD_H
#define ACNLWA_BSMENUBULLETINBOARD_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuBulletinBoard : public ::MenuBase, public ::state::Mode< ::BsMenuBulletinBoard> {
public:
    virtual ~BsMenuBulletinBoard();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void MenuBase_VF17();
};

#endif  // ACNLWA_BSMENUBULLETINBOARD_H
