#include "acnlwa/sead/TreeNode.h"
#include "types.h"

namespace sead {

// TODO: verify FUN_0012c528
TreeNode::TreeNode()
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

}  // namespace sead
