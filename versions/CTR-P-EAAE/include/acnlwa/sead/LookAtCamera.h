#ifndef ACNLWA_SEAD_LOOKATCAMERA_H
#define ACNLWA_SEAD_LOOKATCAMERA_H

#include "acnlwa/sead/Camera.h"

namespace sead {

class LookAtCamera : public ::sead::Camera {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~LookAtCamera();
    virtual void VF04();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_LOOKATCAMERA_H
