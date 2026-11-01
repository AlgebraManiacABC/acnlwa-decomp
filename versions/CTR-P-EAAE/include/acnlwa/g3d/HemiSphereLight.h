#ifndef ACNLWA_G3D_HEMISPHERELIGHT_H
#define ACNLWA_G3D_HEMISPHERELIGHT_H

#include "acnlwa/g3d/BaseLight.h"

namespace g3d {

class HemiSphereLight : public ::g3d::BaseLight {
public:
    virtual ~HemiSphereLight();
    virtual void VF02();
    virtual void VF04();
};

}  // namespace g3d

#endif  // ACNLWA_G3D_HEMISPHERELIGHT_H
