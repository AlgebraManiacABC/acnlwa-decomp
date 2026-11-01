#ifndef ACNLWA_NW_GFX_ANIMOVERRIDER_H
#define ACNLWA_NW_GFX_ANIMOVERRIDER_H

#include "acnlwa/nw/gfx/AnimBlender.h"

namespace nw {
namespace gfx {

class AnimOverrider : public ::nw::gfx::AnimBlender {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual ~AnimOverrider();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_ANIMOVERRIDER_H
