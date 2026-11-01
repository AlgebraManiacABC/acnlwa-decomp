#ifndef ACNLWA_NW_GFX_AMBIENTLIGHT_H
#define ACNLWA_NW_GFX_AMBIENTLIGHT_H

#include "acnlwa/nw/gfx/Light.h"

namespace nw {
namespace gfx {

class AmbientLight : public ::nw::gfx::Light {
public:
    virtual ~AmbientLight();
    virtual void VF02();
    virtual void VF04();
    virtual void VF09();
    virtual void VF11();
    virtual void VF12();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_AMBIENTLIGHT_H
