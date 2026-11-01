#ifndef ACNLWA_G3D_SKELETALANIM_H
#define ACNLWA_G3D_SKELETALANIM_H

#include "acnlwa/g3d/BaseAnim.h"

namespace g3d {

class SkeletalAnim : public ::g3d::BaseAnim {
public:
    virtual ~SkeletalAnim();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace g3d

#endif  // ACNLWA_G3D_SKELETALANIM_H
