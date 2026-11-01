#ifndef ACNLWA_G3D_FUNCNODE_H
#define ACNLWA_G3D_FUNCNODE_H

#include "acnlwa/nw/gfx/TransformNode.h"

namespace g3d {

class FuncNode : public ::nw::gfx::TransformNode {
public:
    virtual ~FuncNode();
    virtual void VF02();
};

}  // namespace g3d

#endif  // ACNLWA_G3D_FUNCNODE_H
