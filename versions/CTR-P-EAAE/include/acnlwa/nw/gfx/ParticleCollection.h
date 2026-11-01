#ifndef ACNLWA_NW_GFX_PARTICLECOLLECTION_H
#define ACNLWA_NW_GFX_PARTICLECOLLECTION_H

#include "acnlwa/nw/gfx/GfxObject.h"

namespace nw {
namespace gfx {

class ParticleCollection : public ::nw::gfx::GfxObject {
public:
    virtual ~ParticleCollection();
    virtual void VF02();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_PARTICLECOLLECTION_H
