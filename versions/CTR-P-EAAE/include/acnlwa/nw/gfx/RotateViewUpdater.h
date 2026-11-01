#ifndef ACNLWA_NW_GFX_ROTATEVIEWUPDATER_H
#define ACNLWA_NW_GFX_ROTATEVIEWUPDATER_H

#include "acnlwa/nw/gfx/CameraViewUpdater.h"

namespace nw {
namespace gfx {

class RotateViewUpdater : public ::nw::gfx::CameraViewUpdater {
public:
    virtual ~RotateViewUpdater();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_ROTATEVIEWUPDATER_H
