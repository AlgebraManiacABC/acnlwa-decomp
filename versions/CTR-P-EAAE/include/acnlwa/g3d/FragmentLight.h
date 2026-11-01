#ifndef ACNLWA_G3D_FRAGMENTLIGHT_H
#define ACNLWA_G3D_FRAGMENTLIGHT_H

#include "acnlwa/g3d/BaseLight.h"

namespace g3d {

class FragmentLight : public ::g3d::BaseLight {
public:
    virtual ~FragmentLight();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace g3d

#endif  // ACNLWA_G3D_FRAGMENTLIGHT_H
