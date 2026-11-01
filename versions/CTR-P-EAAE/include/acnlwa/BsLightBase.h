#ifndef ACNLWA_BSLIGHTBASE_H
#define ACNLWA_BSLIGHTBASE_H

#include "acnlwa/Base.h"

class BsLightBase : public ::Base {
public:
    virtual ~BsLightBase();
    virtual unsigned int Process_VF03();
    virtual unsigned int Process_VF06();
    virtual unsigned int Process_VF09();
    virtual unsigned int Process_VF12();
    virtual void Base_VF15();
    virtual void VF16() = 0;
    virtual void VF17() = 0;
    virtual void VF18();
};

#endif  // ACNLWA_BSLIGHTBASE_H
