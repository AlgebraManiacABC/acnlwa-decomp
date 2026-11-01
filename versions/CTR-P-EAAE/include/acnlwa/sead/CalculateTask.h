#ifndef ACNLWA_SEAD_CALCULATETASK_H
#define ACNLWA_SEAD_CALCULATETASK_H

#include "acnlwa/sead/TaskBase.h"

namespace sead {

class CalculateTask : public ::sead::TaskBase {
public:
    virtual ~CalculateTask();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF15();
    virtual void VF16();
    virtual void VF17();
    virtual void VF18();
    virtual void VF19();
    virtual void VF20();
    virtual void VF22();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_CALCULATETASK_H
