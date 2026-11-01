#ifndef ACNLWA_NW_GFX_LIGHTSET_H
#define ACNLWA_NW_GFX_LIGHTSET_H

#include "acnlwa/nw/gfx/GfxObject.h"

namespace nw {
namespace gfx {

class LightSet : public ::nw::gfx::GfxObject {
public:
    virtual ~LightSet();
    virtual void VF02();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_LIGHTSET_H
