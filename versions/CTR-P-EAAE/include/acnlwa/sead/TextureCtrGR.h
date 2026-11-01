#ifndef ACNLWA_SEAD_TEXTURECTRGR_H
#define ACNLWA_SEAD_TEXTURECTRGR_H

#include "acnlwa/sead/TextureCtr.h"

namespace sead {

class TextureCtrGR : public ::sead::TextureCtr {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~TextureCtrGR();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_TEXTURECTRGR_H
