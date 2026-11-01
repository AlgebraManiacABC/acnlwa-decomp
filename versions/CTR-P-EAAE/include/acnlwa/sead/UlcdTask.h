#ifndef ACNLWA_SEAD_ULCDTASK_H
#define ACNLWA_SEAD_ULCDTASK_H

#include "acnlwa/sead/DualScreenTask.h"

namespace sead {

class UlcdTask : public ::sead::DualScreenTask {
public:
    virtual ~UlcdTask();
    virtual void VF02();
    virtual void VF03();
    virtual void VF05();
    virtual void VF07();
    virtual void VF16();
    virtual void VF18();
    virtual void VF19();
    virtual void VF20();
    virtual void VF23();
    virtual void VF25();
    virtual void VF26();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_ULCDTASK_H
