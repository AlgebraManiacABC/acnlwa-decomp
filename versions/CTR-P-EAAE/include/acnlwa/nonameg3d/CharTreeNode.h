#ifndef ACNLWA_NONAMEG3D_CHARTREENODE_H
#define ACNLWA_NONAMEG3D_CHARTREENODE_H

#include "acnlwa/sead/TreeMapNode.h"
#include "acnlwa/nonameg3d/Char.h"

namespace nonameg3d {

class CharTreeNode : public ::sead::TreeMapNode< ::nonameg3d::Char> {
public:
    virtual ~CharTreeNode();
    virtual void VF02();
};

}  // namespace nonameg3d

#endif  // ACNLWA_NONAMEG3D_CHARTREENODE_H
