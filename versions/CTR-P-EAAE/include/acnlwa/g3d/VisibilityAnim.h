#ifndef ACNLWA_G3D_VISIBILITYANIM_H
#define ACNLWA_G3D_VISIBILITYANIM_H

#include "acnlwa/g3d/BaseAnim.h"

namespace g3d {

class VisibilityAnim : public ::g3d::BaseAnim {
public:
    virtual ~VisibilityAnim();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace g3d

#endif  // ACNLWA_G3D_VISIBILITYANIM_H
