#ifndef ACNLWA_NW_GFX_SCENEENVIRONMENTSETTING_H
#define ACNLWA_NW_GFX_SCENEENVIRONMENTSETTING_H

#include "acnlwa/nw/gfx/SceneObject.h"

namespace nw {
namespace gfx {

class SceneEnvironmentSetting : public ::nw::gfx::SceneObject {
public:
    virtual ~SceneEnvironmentSetting();
    virtual void VF02();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_SCENEENVIRONMENTSETTING_H
