#ifndef ACNLWA_BSLIGHTPOINTBASE_H
#define ACNLWA_BSLIGHTPOINTBASE_H

#include "acnlwa/BsLightBase.h"
#include "acnlwa/sead/hostio/Node.h"

class BsLightPointBase : public ::BsLightBase {
public:
    class PointLightHioNode : public ::sead::hostio::Node {
    public:
        virtual void VF00();
    };

    virtual ~BsLightPointBase();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void VF16();
    virtual void VF17();
    virtual void VF19();
};

#endif  // ACNLWA_BSLIGHTPOINTBASE_H
