#ifndef ACNLWA_NW_GFX_SCENEUPDATER_H
#define ACNLWA_NW_GFX_SCENEUPDATER_H

#include "acnlwa/nw/gfx/ISceneUpdater.h"

namespace nw {
namespace gfx {

class SceneUpdater : public ::nw::gfx::ISceneUpdater {
public:
    virtual ~SceneUpdater();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_SCENEUPDATER_H
