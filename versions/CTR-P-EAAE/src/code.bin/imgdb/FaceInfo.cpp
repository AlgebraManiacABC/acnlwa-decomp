#include "acnlwa/imgdb/FaceInfo.h"
#include "types.h"

namespace imgdb {

// TODO: verify FUN_005afe90
void FaceInfo::Initialize()
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  return;
}

}  // namespace imgdb
