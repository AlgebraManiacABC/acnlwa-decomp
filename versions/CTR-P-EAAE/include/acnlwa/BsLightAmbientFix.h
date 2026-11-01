#ifndef ACNLWA_BSLIGHTAMBIENTFIX_H
#define ACNLWA_BSLIGHTAMBIENTFIX_H

#include "acnlwa/BsLightBase.h"
#include "acnlwa/sead/hostio/Node.h"

class BsLightAmbientFix : public ::BsLightBase {
public:
    class AmbientFixLightHioNode : public ::sead::hostio::Node {
    public:
        virtual void VF00();
    };

    virtual ~BsLightAmbientFix();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void VF16();
    virtual void VF17();
    virtual void VF18();
    virtual void VF19();
};

#endif  // ACNLWA_BSLIGHTAMBIENTFIX_H
