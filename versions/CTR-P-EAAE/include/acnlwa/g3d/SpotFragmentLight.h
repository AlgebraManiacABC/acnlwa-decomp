#ifndef ACNLWA_G3D_SPOTFRAGMENTLIGHT_H
#define ACNLWA_G3D_SPOTFRAGMENTLIGHT_H

#include "acnlwa/g3d/FragmentLight.h"

namespace g3d {

class SpotFragmentLight : public ::g3d::FragmentLight {
public:
    virtual ~SpotFragmentLight();
    virtual void VF05();
};

}  // namespace g3d

#endif  // ACNLWA_G3D_SPOTFRAGMENTLIGHT_H
