#ifndef ACNLWA_G3D_POINTFRAGMENTLIGHT_H
#define ACNLWA_G3D_POINTFRAGMENTLIGHT_H

#include "acnlwa/g3d/FragmentLight.h"

namespace g3d {

class PointFragmentLight : public ::g3d::FragmentLight {
public:
    virtual ~PointFragmentLight();
    virtual void VF05();
};

}  // namespace g3d

#endif  // ACNLWA_G3D_POINTFRAGMENTLIGHT_H
