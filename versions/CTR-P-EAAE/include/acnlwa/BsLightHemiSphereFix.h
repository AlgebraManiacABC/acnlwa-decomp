#ifndef ACNLWA_BSLIGHTHEMISPHEREFIX_H
#define ACNLWA_BSLIGHTHEMISPHEREFIX_H

#include "acnlwa/BsLightHemiSphereBase.h"

class BsLightHemiSphereFix : public ::BsLightHemiSphereBase {
public:
    virtual ~BsLightHemiSphereFix();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF09();
    virtual void VF18();
    virtual void VF19();
};

#endif  // ACNLWA_BSLIGHTHEMISPHEREFIX_H
