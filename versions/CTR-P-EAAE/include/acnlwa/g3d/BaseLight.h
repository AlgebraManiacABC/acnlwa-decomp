#ifndef ACNLWA_G3D_BASELIGHT_H
#define ACNLWA_G3D_BASELIGHT_H

#include "acnlwa/g3d/TransformNode.h"

namespace g3d {

class BaseLight : public ::g3d::TransformNode {
public:
    virtual ~BaseLight();
};

}  // namespace g3d

#endif  // ACNLWA_G3D_BASELIGHT_H
