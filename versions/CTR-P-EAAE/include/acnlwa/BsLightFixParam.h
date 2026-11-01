#ifndef ACNLWA_BSLIGHTFIXPARAM_H
#define ACNLWA_BSLIGHTFIXPARAM_H

#include "acnlwa/BsLightFixBase.h"

class BsLightFixParam : public ::BsLightFixBase {
public:
    virtual ~BsLightFixParam();
    virtual unsigned int Process_VF03();
    virtual void VF18();
};

#endif  // ACNLWA_BSLIGHTFIXPARAM_H
