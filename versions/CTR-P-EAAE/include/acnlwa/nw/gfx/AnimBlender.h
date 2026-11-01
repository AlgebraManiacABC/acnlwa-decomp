#ifndef ACNLWA_NW_GFX_ANIMBLENDER_H
#define ACNLWA_NW_GFX_ANIMBLENDER_H

#include "acnlwa/nw/gfx/AnimObject.h"

namespace nw {
namespace gfx {

class AnimBlender : public ::nw::gfx::AnimObject {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual ~AnimBlender();
    virtual void VF07();
    virtual void VF08();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_ANIMBLENDER_H
