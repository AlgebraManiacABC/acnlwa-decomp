#ifndef ACNLWA_NW_ANIM_ANIMBLENDOPBOOL_H
#define ACNLWA_NW_ANIM_ANIMBLENDOPBOOL_H

#include "acnlwa/nw/anim/AnimBlendOp.h"

namespace nw {
namespace anim {

class AnimBlendOpBool : public ::nw::anim::AnimBlendOp {
public:
    virtual ~AnimBlendOpBool();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace anim
}  // namespace nw

#endif  // ACNLWA_NW_ANIM_ANIMBLENDOPBOOL_H
