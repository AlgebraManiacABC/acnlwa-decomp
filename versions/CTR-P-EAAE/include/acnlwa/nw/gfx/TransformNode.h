#ifndef ACNLWA_NW_GFX_TRANSFORMNODE_H
#define ACNLWA_NW_GFX_TRANSFORMNODE_H

#include "acnlwa/nw/gfx/SceneNode.h"

namespace nw {
namespace gfx {

class TransformNode : public ::nw::gfx::SceneNode {
public:
    virtual ~TransformNode();
    virtual void VF02();
    virtual void VF03();
    virtual void VF04();
    virtual void VF05();
    virtual void VF06();
    virtual void VF07();
    virtual void VF08();
    virtual void VF09();
    virtual void VF10();
};

}  // namespace gfx
}  // namespace nw

#endif  // ACNLWA_NW_GFX_TRANSFORMNODE_H
