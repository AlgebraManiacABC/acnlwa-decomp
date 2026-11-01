#ifndef ACNLWA_BSLIGHTHEMISPHEREBASE_H
#define ACNLWA_BSLIGHTHEMISPHEREBASE_H

#include "acnlwa/BsLightBase.h"
#include "acnlwa/sead/hostio/Node.h"

class BsLightHemiSphereBase : public ::BsLightBase {
public:
    class HemiSphereLightHioNode : public ::sead::hostio::Node {
    public:
        virtual void VF00();
    };

    virtual ~BsLightHemiSphereBase();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void VF16();
    virtual void VF17();
    virtual void VF19() = 0;
    virtual void VF20();
};

#endif  // ACNLWA_BSLIGHTHEMISPHEREBASE_H
