#ifndef ACNLWA_NW_GFX_PARTICLESHAPE_H
#define ACNLWA_NW_GFX_PARTICLESHAPE_H

#include "acnlwa/nw/gfx/SceneObject.h"

namespace nw {
namespace gfx {

class ParticleShape : public ::nw::gfx::SceneObject {
public:
    virtual ~ParticleShape();
    virtual void VF02();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_PARTICLESHAPE_H
