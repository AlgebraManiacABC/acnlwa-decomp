#ifndef ACNLWA_NW_GFX_ORTHOPROJECTIONUPDATER_H
#define ACNLWA_NW_GFX_ORTHOPROJECTIONUPDATER_H

#include "acnlwa/nw/gfx/CameraProjectionUpdater.h"

namespace nw {
namespace gfx {

class OrthoProjectionUpdater : public ::nw::gfx::CameraProjectionUpdater {
public:
    virtual ~OrthoProjectionUpdater();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_ORTHOPROJECTIONUPDATER_H
