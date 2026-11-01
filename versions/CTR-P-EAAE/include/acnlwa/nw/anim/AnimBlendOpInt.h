#ifndef ACNLWA_NW_ANIM_ANIMBLENDOPINT_H
#define ACNLWA_NW_ANIM_ANIMBLENDOPINT_H

#include "acnlwa/nw/anim/AnimBlendOp.h"

namespace nw {
namespace anim {

class AnimBlendOpInt : public ::nw::anim::AnimBlendOp {
public:
    virtual ~AnimBlendOpInt();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace anim
}  // namespace nw

#endif  // ACNLWA_NW_ANIM_ANIMBLENDOPINT_H
