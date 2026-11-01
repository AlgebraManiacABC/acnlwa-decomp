#ifndef ACNLWA_SEAD_TASKBASE_H
#define ACNLWA_SEAD_TASKBASE_H

#include "types.h"
#include "acnlwa/sead/TTreeNode.h"
#include "acnlwa/sead/IDisposer.h"
#include "acnlwa/sead/INamable.h"

namespace sead {

class TaskBase : public sead::TTreeNode<sead::TaskBase*>, public ::sead::IDisposer, public ::sead::INamable {
public:
    virtual ~TaskBase();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04() = 0;
    virtual void VF05() = 0;
    virtual void VF06() = 0;
    virtual void VF07() = 0;
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15() = 0;
    virtual void VF16() = 0;
    virtual void VF17() = 0;
    virtual void VF18() = 0;
    virtual void VF19() = 0;
    virtual void VF20() = 0;
    virtual void VF21();

    undefined4 getMethodTreeMgr() const;
};

}  // namespace sead

#endif  // ACNLWA_SEAD_TASKBASE_H
