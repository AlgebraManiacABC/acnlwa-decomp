#ifndef ACNLWA_BSMENUSANTABAGVIEW_H
#define ACNLWA_BSMENUSANTABAGVIEW_H

#include "acnlwa/MenuBase.h"

class BsMenuSantaBagView : public ::MenuBase {
public:
    virtual ~BsMenuSantaBagView();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUSANTABAGVIEW_H
