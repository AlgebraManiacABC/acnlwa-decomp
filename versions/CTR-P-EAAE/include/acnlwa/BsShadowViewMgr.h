#ifndef ACNLWA_BSSHADOWVIEWMGR_H
#define ACNLWA_BSSHADOWVIEWMGR_H

#include "acnlwa/Base.h"

class BsShadowViewMgr : public ::Base {
public:
    virtual ~BsShadowViewMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSSHADOWVIEWMGR_H
