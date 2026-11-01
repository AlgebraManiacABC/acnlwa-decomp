#ifndef ACNLWA_NW_GFX_FRAGMENTLIGHT_H
#define ACNLWA_NW_GFX_FRAGMENTLIGHT_H

#include "acnlwa/nw/gfx/Light.h"

namespace nw {
namespace gfx {

class FragmentLight : public ::nw::gfx::Light {
public:
    virtual ~FragmentLight();
    virtual void VF02();
    virtual void VF04();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_FRAGMENTLIGHT_H
