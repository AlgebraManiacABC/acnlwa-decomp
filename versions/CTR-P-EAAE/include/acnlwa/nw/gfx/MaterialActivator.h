#ifndef ACNLWA_NW_GFX_MATERIALACTIVATOR_H
#define ACNLWA_NW_GFX_MATERIALACTIVATOR_H

#include "acnlwa/nw/gfx/IMaterialActivator.h"

namespace nw {
namespace gfx {

class MaterialActivator : public ::nw::gfx::IMaterialActivator {
public:
    virtual void VF00();
    virtual void VF01();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_MATERIALACTIVATOR_H
