#ifndef ACNLWA_NW_GFX_WORLDMATRIXUPDATER_H
#define ACNLWA_NW_GFX_WORLDMATRIXUPDATER_H

#include "acnlwa/nw/gfx/GfxObject.h"

namespace nw {
namespace gfx {

class WorldMatrixUpdater : public ::nw::gfx::GfxObject {
public:
    virtual void VF00();
    virtual void VF01();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_WORLDMATRIXUPDATER_H
