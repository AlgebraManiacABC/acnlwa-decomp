#ifndef ACNLWA_NW_GFX_SCENETRAVERSER_H
#define ACNLWA_NW_GFX_SCENETRAVERSER_H

#include "acnlwa/nw/gfx/ISceneVisitor.h"

namespace nw {
namespace gfx {

class SceneTraverser : public ::nw::gfx::ISceneVisitor {
public:
    virtual void VF00();
    virtual void VF01();
    virtual ~SceneTraverser();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
    virtual void VF11();
    virtual void VF12();
    virtual void VF13();
    virtual void VF14();
    virtual void VF15();
    virtual void VF16();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_SCENETRAVERSER_H
