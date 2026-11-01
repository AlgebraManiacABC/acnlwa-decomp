#ifndef ACNLWA_G3D_BASEANIM_H
#define ACNLWA_G3D_BASEANIM_H

#include "acnlwa/g3d/FrameController.h"

namespace g3d {

class BaseAnim : public ::g3d::FrameController {
public:
    virtual ~BaseAnim();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06() = 0;
    virtual void VF07() = 0;
};

}  // namespace g3d

#endif  // ACNLWA_G3D_BASEANIM_H
