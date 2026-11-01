#ifndef ACNLWA_NW_GFX_LOOKATTARGETVIEWUPDATER_H
#define ACNLWA_NW_GFX_LOOKATTARGETVIEWUPDATER_H

#include "acnlwa/nw/gfx/CameraViewUpdater.h"

namespace nw {
namespace gfx {

class LookAtTargetViewUpdater : public ::nw::gfx::CameraViewUpdater {
public:
    virtual ~LookAtTargetViewUpdater();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_LOOKATTARGETVIEWUPDATER_H
