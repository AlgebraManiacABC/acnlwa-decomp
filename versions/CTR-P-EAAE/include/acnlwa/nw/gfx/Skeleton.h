#ifndef ACNLWA_NW_GFX_SKELETON_H
#define ACNLWA_NW_GFX_SKELETON_H

#include "acnlwa/nw/gfx/SceneObject.h"

namespace nw {
namespace gfx {

class Skeleton : public ::nw::gfx::SceneObject {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~Skeleton();
    virtual void VF04() = 0;
    virtual void VF05() = 0;
    virtual void VF06() = 0;
    virtual void VF07() = 0;
    virtual void VF08() = 0;
    virtual void VF09() = 0;
    virtual void VF10() = 0;
    virtual void VF11() = 0;
    virtual void VF12() = 0;
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_SKELETON_H
