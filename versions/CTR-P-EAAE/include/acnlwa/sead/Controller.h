#ifndef ACNLWA_SEAD_CONTROLLER_H
#define ACNLWA_SEAD_CONTROLLER_H

#include "acnlwa/sead/ControllerBase.h"

namespace sead {

class Controller : public ::sead::ControllerBase {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~Controller();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06() = 0;
    virtual void VF07();
    virtual void VF08();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_CONTROLLER_H
