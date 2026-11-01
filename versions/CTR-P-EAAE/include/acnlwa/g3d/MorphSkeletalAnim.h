#ifndef ACNLWA_G3D_MORPHSKELETALANIM_H
#define ACNLWA_G3D_MORPHSKELETALANIM_H

#include "acnlwa/g3d/SkeletalAnim.h"

namespace g3d {

class MorphSkeletalAnim : public ::g3d::SkeletalAnim {
public:
    virtual ~MorphSkeletalAnim();
    virtual void VF04();
    virtual void VF06();
};

}  // namespace g3d

#endif  // ACNLWA_G3D_MORPHSKELETALANIM_H
