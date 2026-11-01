#ifndef ACNLWA_BSLIGHTSPOT_H
#define ACNLWA_BSLIGHTSPOT_H

#include "acnlwa/BsLightBase.h"

class BsLightSpot : public ::BsLightBase {
public:
    virtual ~BsLightSpot();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void VF16();
    virtual void VF17();
    virtual void VF18();
};

#endif  // ACNLWA_BSLIGHTSPOT_H
