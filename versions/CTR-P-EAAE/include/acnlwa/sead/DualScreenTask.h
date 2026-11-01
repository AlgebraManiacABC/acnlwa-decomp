#ifndef ACNLWA_SEAD_DUALSCREENTASK_H
#define ACNLWA_SEAD_DUALSCREENTASK_H

#include "acnlwa/sead/TaskBase.h"

namespace sead {

class DualScreenTask : public ::sead::TaskBase {
public:
    virtual ~DualScreenTask();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF15();
    virtual void VF16();
    virtual void VF17();
    virtual void VF18();
    virtual void VF19();
    virtual void VF20();
    virtual void VF22();
    virtual void VF23();
    virtual void VF24();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_DUALSCREENTASK_H
