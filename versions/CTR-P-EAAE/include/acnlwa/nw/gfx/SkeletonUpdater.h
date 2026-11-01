#ifndef ACNLWA_NW_GFX_SKELETONUPDATER_H
#define ACNLWA_NW_GFX_SKELETONUPDATER_H

#include "acnlwa/nw/gfx/GfxObject.h"

namespace nw {
namespace gfx {

class SkeletonUpdater : public ::nw::gfx::GfxObject {
public:
    virtual void VF00();
    virtual void VF01();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_SKELETONUPDATER_H
