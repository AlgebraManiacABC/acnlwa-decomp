#ifndef ACNLWA_BSLIGHTFIXBASE_H
#define ACNLWA_BSLIGHTFIXBASE_H

#include "acnlwa/BsLightBase.h"
#include "acnlwa/sead/hostio/Node.h"

class BsLightFixBase : public ::BsLightBase {
public:
    class FixLightHioNode : public ::sead::hostio::Node {
    public:
        virtual void VF00();
    };

    virtual ~BsLightFixBase();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void VF16();
    virtual void VF17();
    virtual void VF18();
    virtual void VF19();
    virtual void VF20();
};

#endif  // ACNLWA_BSLIGHTFIXBASE_H
