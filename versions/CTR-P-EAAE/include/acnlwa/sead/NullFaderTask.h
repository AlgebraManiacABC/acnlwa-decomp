#ifndef ACNLWA_SEAD_NULLFADERTASK_H
#define ACNLWA_SEAD_NULLFADERTASK_H

#include "acnlwa/sead/FaderTaskBase.h"

namespace sead {

class NullFaderTask : public ::sead::FaderTaskBase {
public:
    virtual ~NullFaderTask();
    virtual void VF05();
    virtual void VF07();
    virtual void VF09();
    virtual void VF16();
    virtual void VF18();
    virtual void VF19();
    virtual void VF20();
    virtual void VF25();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_NULLFADERTASK_H
