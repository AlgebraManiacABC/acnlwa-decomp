#ifndef ACNLWA_BSLIGHTAMBIENTCLUB_H
#define ACNLWA_BSLIGHTAMBIENTCLUB_H

#include "acnlwa/BsLightBase.h"
#include "acnlwa/sead/hostio/Node.h"

class BsLightAmbientClub : public ::BsLightBase {
public:
    class AmbientClubLightHioNode : public ::sead::hostio::Node {
    public:
        virtual void VF00();
    };

    virtual ~BsLightAmbientClub();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void VF16();
    virtual void VF17();
    virtual void VF18();
    virtual void VF19();
};

#endif  // ACNLWA_BSLIGHTAMBIENTCLUB_H
