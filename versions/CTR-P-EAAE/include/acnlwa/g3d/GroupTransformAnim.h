#ifndef ACNLWA_G3D_GROUPTRANSFORMANIM_H
#define ACNLWA_G3D_GROUPTRANSFORMANIM_H

#include "acnlwa/nw/gfx/AnimObject.h"

namespace g3d {

class GroupTransformAnim : public ::nw::gfx::AnimObject {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual ~GroupTransformAnim();
    virtual void VF07();
    virtual void VF08();
};

}  // namespace g3d

#endif  // ACNLWA_G3D_GROUPTRANSFORMANIM_H
