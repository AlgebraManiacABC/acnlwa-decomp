#ifndef ACNLWA_BSLIGHTDIFFUSEBASE_H
#define ACNLWA_BSLIGHTDIFFUSEBASE_H

#include "acnlwa/BsLightBase.h"
#include "acnlwa/sead/hostio/Node.h"

class BsLightDiffuseBase : public ::BsLightBase {
public:
    class DiffuseLightHioNode : public ::sead::hostio::Node {
    public:
        virtual void VF00();
    };

    virtual ~BsLightDiffuseBase();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void VF16();
    virtual void VF17();
    virtual void VF19();
    virtual void VF20();
    virtual void VF21();
    virtual void VF22();
    virtual void VF23() = 0;
    virtual void VF24() = 0;
    virtual void VF25();
};

#endif  // ACNLWA_BSLIGHTDIFFUSEBASE_H
