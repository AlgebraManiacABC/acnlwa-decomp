#ifndef ACNLWA_SEAD_METHODTREENODE_H
#define ACNLWA_SEAD_METHODTREENODE_H

#include "acnlwa/sead/TTreeNode.h"
#include "acnlwa/sead/INamable.h"
#include "acnlwa/sead/IDisposer.h"

namespace sead {

class MethodTreeNode : private sead::TTreeNode<sead::MethodTreeNode*>, public ::sead::INamable, public ::sead::IDisposer {
public:
    virtual ~MethodTreeNode();
    virtual void VF02();
    virtual void VF03();
};

}  // namespace sead

#endif  // ACNLWA_SEAD_METHODTREENODE_H
