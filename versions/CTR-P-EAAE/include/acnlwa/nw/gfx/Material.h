#ifndef ACNLWA_NW_GFX_MATERIAL_H
#define ACNLWA_NW_GFX_MATERIAL_H

#include "acnlwa/nw/gfx/SceneObject.h"

namespace nw {
namespace gfx {

class Material : public ::nw::gfx::SceneObject {
public:
    virtual ~Material();
    virtual void VF02();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_MATERIAL_H
