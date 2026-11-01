#ifndef ACNLWA_SEAD_CONTROLLERWRAPPER_H
#define ACNLWA_SEAD_CONTROLLERWRAPPER_H

#include "acnlwa/sead/ControllerWrapperBase.h"

namespace sead {

class ControllerWrapper : public ::sead::ControllerWrapperBase {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~ControllerWrapper();
    virtual void VF04();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_CONTROLLERWRAPPER_H
