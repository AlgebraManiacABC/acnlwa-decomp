#ifndef ACNLWA_G3D_FOG_H
#define ACNLWA_G3D_FOG_H

#include "acnlwa/g3d/TransformNode.h"

namespace g3d {

class Fog : public ::g3d::TransformNode {
public:
    virtual ~Fog();
    virtual void VF02();
};

}  // namespace g3d

#endif  // ACNLWA_G3D_FOG_H
