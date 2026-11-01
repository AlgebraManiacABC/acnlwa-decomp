#ifndef ACNLWA_BSLIGHTPOINTFIX_H
#define ACNLWA_BSLIGHTPOINTFIX_H

#include "acnlwa/BsLightPointBase.h"

class BsLightPointFix : public ::BsLightPointBase {
public:
    virtual ~BsLightPointFix();
    virtual unsigned int Process_VF03();
    virtual void VF18();
};

#endif  // ACNLWA_BSLIGHTPOINTFIX_H
