#ifndef ACNLWA_G3D_AMBIENTLIGHT_H
#define ACNLWA_G3D_AMBIENTLIGHT_H

#include "acnlwa/g3d/BaseLight.h"

namespace g3d {

class AmbientLight : public ::g3d::BaseLight {
public:
    virtual ~AmbientLight();
    virtual void VF02();
    virtual void VF04();
};

}  // namespace g3d

#endif  // ACNLWA_G3D_AMBIENTLIGHT_H
