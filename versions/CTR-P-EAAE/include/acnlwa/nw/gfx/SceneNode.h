#ifndef ACNLWA_NW_GFX_SCENENODE_H
#define ACNLWA_NW_GFX_SCENENODE_H

#include "acnlwa/nw/gfx/SceneObject.h"

namespace nw {
namespace gfx {

class SceneNode : public ::nw::gfx::SceneObject {
public:
    virtual ~SceneNode();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_SCENENODE_H
