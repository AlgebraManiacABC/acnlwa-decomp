#ifndef ACNLWA_NW_GFX_PARTICLESET_H
#define ACNLWA_NW_GFX_PARTICLESET_H

#include "acnlwa/nw/gfx/SceneNode.h"

namespace nw {
namespace gfx {

class ParticleSet : public ::nw::gfx::SceneNode {
public:
    virtual ~ParticleSet();
    virtual void VF02();
    virtual void VF04();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_PARTICLESET_H
