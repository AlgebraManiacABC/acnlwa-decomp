#ifndef ACNLWA_SEAD_ORTHOCAMERA_H
#define ACNLWA_SEAD_ORTHOCAMERA_H

#include "acnlwa/sead/LookAtCamera.h"

namespace sead {

class OrthoCamera : public ::sead::LookAtCamera {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~OrthoCamera();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_ORTHOCAMERA_H
