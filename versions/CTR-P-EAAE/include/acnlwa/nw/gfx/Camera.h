#ifndef ACNLWA_NW_GFX_CAMERA_H
#define ACNLWA_NW_GFX_CAMERA_H

#include "acnlwa/nw/gfx/TransformNode.h"

namespace nw {
namespace gfx {

class Camera : public ::nw::gfx::TransformNode {
public:
    virtual ~Camera();
    virtual void VF02();
    virtual void VF04();
    virtual void VF09();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_CAMERA_H
