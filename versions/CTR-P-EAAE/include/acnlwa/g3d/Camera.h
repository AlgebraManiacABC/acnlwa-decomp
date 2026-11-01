#ifndef ACNLWA_G3D_CAMERA_H
#define ACNLWA_G3D_CAMERA_H

#include "acnlwa/g3d/TransformNode.h"

namespace g3d {

class Camera : public ::g3d::TransformNode {
public:
    virtual ~Camera();
    virtual void VF02();
};

}  // namespace g3d

#endif  // ACNLWA_G3D_CAMERA_H
