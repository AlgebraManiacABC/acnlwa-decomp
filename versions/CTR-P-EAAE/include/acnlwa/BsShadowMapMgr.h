#ifndef ACNLWA_BSSHADOWMAPMGR_H
#define ACNLWA_BSSHADOWMAPMGR_H

#include "acnlwa/Base.h"

class BsShadowMapMgr : public ::Base {
public:
    virtual ~BsShadowMapMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSSHADOWMAPMGR_H
