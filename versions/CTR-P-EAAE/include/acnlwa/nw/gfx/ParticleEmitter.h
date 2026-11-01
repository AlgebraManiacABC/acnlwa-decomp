#ifndef ACNLWA_NW_GFX_PARTICLEEMITTER_H
#define ACNLWA_NW_GFX_PARTICLEEMITTER_H

#include "acnlwa/nw/gfx/TransformNode.h"

namespace nw {
namespace gfx {

class ParticleEmitter : public ::nw::gfx::TransformNode {
public:
    virtual ~ParticleEmitter();
    virtual void VF02();
    virtual void VF04();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_PARTICLEEMITTER_H
