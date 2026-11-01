#include "../../../include/types.h"

void FUN_00131280(undefined4 param_1,int *param_2,undefined4 param_3)

{
  if (DAT_00975338 == 0) {
    FUN_002f75a0(param_1,0,param_3,1);
    return;
  }
  if ((param_2 == NULL) && (param_2 = (int *)FUN_003045a8(DAT_00975338), param_2 == NULL)) {
    return;
  }
  (**(code **)(*param_2 + 0x18))(param_2,param_1,param_3);
  return;
}
