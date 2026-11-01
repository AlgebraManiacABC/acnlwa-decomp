#ifndef ACNLWA_NW_GFX_HEMISPHERELIGHT_H
#define ACNLWA_NW_GFX_HEMISPHERELIGHT_H

#include "acnlwa/nw/gfx/Light.h"

namespace nw {
namespace gfx {

class HemiSphereLight : public ::nw::gfx::Light {
public:
    virtual ~HemiSphereLight();
    virtual void VF02();
    virtual void VF04();
    virtual void VF09();
    virtual void VF11();
    virtual void VF12();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_HEMISPHERELIGHT_H
