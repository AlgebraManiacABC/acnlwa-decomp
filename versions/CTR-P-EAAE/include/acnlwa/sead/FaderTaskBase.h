#ifndef ACNLWA_SEAD_FADERTASKBASE_H
#define ACNLWA_SEAD_FADERTASKBASE_H

#include "acnlwa/sead/TaskBase.h"

namespace sead {

class FaderTaskBase : public ::sead::TaskBase {
public:
    virtual ~FaderTaskBase();
    virtual void VF04();
    virtual void VF06();
    virtual void VF08();
    virtual void VF12();
    virtual void VF15();
    virtual void VF17();
    virtual void VF20();
    virtual void VF22();
    virtual void VF23();
    virtual void VF24();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_FADERTASKBASE_H
