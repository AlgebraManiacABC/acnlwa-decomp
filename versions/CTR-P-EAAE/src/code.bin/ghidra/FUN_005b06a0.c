#include "../../../include/types.h"

void FUN_005b06a0(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  param_1[1] = 0;
  *param_1 = uVar1 + 1;
  if (899 < (ushort)(uVar1 + 1)) {
    *param_1 = 0;
  }
  return;
}
