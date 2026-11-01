#ifndef ACNLWA_G3D_SKELETALMODEL_H
#define ACNLWA_G3D_SKELETALMODEL_H

#include "acnlwa/g3d/Model.h"

namespace g3d {

class SkeletalModel : public ::g3d::Model {
public:
    virtual ~SkeletalModel();
    virtual void VF02();
};

}  // namespace g3d

#endif  // ACNLWA_G3D_SKELETALMODEL_H
