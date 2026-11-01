#ifndef ACNLWA_SEAD_CONTROLLERWRAPPERBASE_H
#define ACNLWA_SEAD_CONTROLLERWRAPPERBASE_H

#include "acnlwa/sead/ControllerBase.h"
#include "acnlwa/sead/IDisposer.h"

namespace sead {

class ControllerWrapperBase : public ::sead::ControllerBase, public ::sead::IDisposer {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~ControllerWrapperBase();
    virtual void VF04() = 0;
    virtual void VF05();
    virtual void VF06();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_CONTROLLERWRAPPERBASE_H
