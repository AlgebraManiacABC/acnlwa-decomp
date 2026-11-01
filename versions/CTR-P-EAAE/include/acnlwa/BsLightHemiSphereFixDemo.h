#ifndef ACNLWA_BSLIGHTHEMISPHEREFIXDEMO_H
#define ACNLWA_BSLIGHTHEMISPHEREFIXDEMO_H

#include "acnlwa/BsLightHemiSphereFix.h"

class BsLightHemiSphereFixDemo : public ::BsLightHemiSphereFix {
public:
    virtual ~BsLightHemiSphereFixDemo();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual void VF18();
};

#endif  // ACNLWA_BSLIGHTHEMISPHEREFIXDEMO_H
