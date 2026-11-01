#ifndef ACNLWA_G3D_DIRECTIONALFRAGMENTLIGHT_H
#define ACNLWA_G3D_DIRECTIONALFRAGMENTLIGHT_H

#include "acnlwa/g3d/FragmentLight.h"

namespace g3d {

class DirectionalFragmentLight : public ::g3d::FragmentLight {
public:
    virtual ~DirectionalFragmentLight();
    virtual void VF05();
};

}  // namespace g3d

#endif  // ACNLWA_G3D_DIRECTIONALFRAGMENTLIGHT_H
