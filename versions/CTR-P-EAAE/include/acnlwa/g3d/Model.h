#ifndef ACNLWA_G3D_MODEL_H
#define ACNLWA_G3D_MODEL_H

#include "acnlwa/g3d/TransformNode.h"

namespace g3d {

class Model : public ::g3d::TransformNode {
public:
    virtual ~Model();
    virtual void VF03();
};

}  // namespace g3d

#endif  // ACNLWA_G3D_MODEL_H
