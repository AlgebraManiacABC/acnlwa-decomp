#ifndef ACNLWA_NW_GFX_LIGHT_H
#define ACNLWA_NW_GFX_LIGHT_H

#include "acnlwa/nw/gfx/TransformNode.h"

namespace nw {
namespace gfx {

class Light : public ::nw::gfx::TransformNode {
public:
    virtual ~Light();
    virtual void VF02();
    virtual void VF04();
    virtual void VF11() = 0;
    virtual void VF12() = 0;
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_LIGHT_H
