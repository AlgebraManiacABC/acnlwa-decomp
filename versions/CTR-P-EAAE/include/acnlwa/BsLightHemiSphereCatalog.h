#ifndef ACNLWA_BSLIGHTHEMISPHERECATALOG_H
#define ACNLWA_BSLIGHTHEMISPHERECATALOG_H

#include "acnlwa/BsLightHemiSphereBase.h"

class BsLightHemiSphereCatalog : public ::BsLightHemiSphereBase {
public:
    virtual ~BsLightHemiSphereCatalog();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void VF18();
    virtual void VF19();
};

#endif  // ACNLWA_BSLIGHTHEMISPHERECATALOG_H
