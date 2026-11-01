#ifndef ACNLWA_SEAD_TEXTURECTR_H
#define ACNLWA_SEAD_TEXTURECTR_H

#include "acnlwa/sead/Texture.h"

namespace sead {

class TextureCtr : public ::sead::Texture {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~TextureCtr();
    virtual void VF04() = 0;
    virtual void VF05() = 0;
    virtual void VF06() = 0;
    virtual void VF07() = 0;
    virtual void VF08() = 0;
};

}  // namespace sead

#endif  // ACNLWA_SEAD_TEXTURECTR_H
