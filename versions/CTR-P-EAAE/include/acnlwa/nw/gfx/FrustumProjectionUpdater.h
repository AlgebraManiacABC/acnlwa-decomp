#ifndef ACNLWA_NW_GFX_FRUSTUMPROJECTIONUPDATER_H
#define ACNLWA_NW_GFX_FRUSTUMPROJECTIONUPDATER_H

#include "acnlwa/nw/gfx/CameraProjectionUpdater.h"

namespace nw {
namespace gfx {

class FrustumProjectionUpdater : public ::nw::gfx::CameraProjectionUpdater {
public:
    virtual ~FrustumProjectionUpdater();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_FRUSTUMPROJECTIONUPDATER_H
