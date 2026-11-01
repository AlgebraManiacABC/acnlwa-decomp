#ifndef ACNLWA_NW_LYT_ANIMTRANSFORMBASIC_H
#define ACNLWA_NW_LYT_ANIMTRANSFORMBASIC_H

#include "acnlwa/nw/lyt/AnimTransform.h"

namespace nw {
namespace lyt {

class AnimTransformBasic : public ::nw::lyt::AnimTransform {
public:
    virtual ~AnimTransformBasic();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
};

}  // namespace lyt
}  // namespace nw

#endif  // ACNLWA_NW_LYT_ANIMTRANSFORMBASIC_H
