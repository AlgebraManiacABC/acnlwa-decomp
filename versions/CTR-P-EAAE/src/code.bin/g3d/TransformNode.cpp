#include "acnlwa/g3d/TransformNode.h"
#include "types.h"

extern "C" {
int FUN_004f03d0(...);
}

namespace g3d {

TransformNode::~TransformNode() {}

// was FUN_004ee4b8
void TransformNode::VF02()
{
  int param_1 = (int)this;
  FUN_004f03d0(*(undefined4 *)(param_1 + 4));
  return;
}

void TransformNode::VF03() {}

}  // namespace g3d
