#ifndef ACNLWA_BSCOMMONDIALOG_H
#define ACNLWA_BSCOMMONDIALOG_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsCommonDialog : public ::MenuBase, public ::state::Mode< ::BsCommonDialog> {
public:
    virtual ~BsCommonDialog();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void MenuBase_VF17();
};

#endif  // ACNLWA_BSCOMMONDIALOG_H
