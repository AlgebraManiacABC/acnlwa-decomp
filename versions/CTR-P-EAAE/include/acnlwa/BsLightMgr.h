#ifndef ACNLWA_BSLIGHTMGR_H
#define ACNLWA_BSLIGHTMGR_H

#include "acnlwa/Base.h"
#include "acnlwa/sead/hostio/Node.h"

class BsLightMgr : public ::Base {
public:
    class LightMgrHioNode : public ::sead::hostio::Node {
    public:
        virtual void VF00();
    };

    virtual ~BsLightMgr();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
};

#endif  // ACNLWA_BSLIGHTMGR_H
