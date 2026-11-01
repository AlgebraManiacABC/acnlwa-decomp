#ifndef ACNLWA_BSMENUSIGNLIST_H
#define ACNLWA_BSMENUSIGNLIST_H

#include "acnlwa/MenuBase.h"
#include "acnlwa/state/Mode.h"

class BsMenuSignList : public ::MenuBase, public ::state::Mode< ::BsMenuSignList> {
public:
    virtual ~BsMenuSignList();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSMENUSIGNLIST_H
