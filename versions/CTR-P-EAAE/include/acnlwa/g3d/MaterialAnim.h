#ifndef ACNLWA_G3D_MATERIALANIM_H
#define ACNLWA_G3D_MATERIALANIM_H

#include "acnlwa/g3d/BaseAnim.h"

namespace g3d {

class MaterialAnim : public ::g3d::BaseAnim {
public:
    virtual ~MaterialAnim();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace g3d

#endif  // ACNLWA_G3D_MATERIALANIM_H
