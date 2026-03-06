/**
 * FUN_00353244.c
 * Source line: 454661
 * Body lines: 13
 */
#include "../../../include/types.h"

bool FUN_00353244(int *param_1,undefined2 *param_2)

{
  int iVar1;
  int local_18 [4];
  
  local_18[2] = 0xffffffff;
  local_18[3] = 0xffffffff;
  local_18[1] = 0xffffffff;
  FUN_00483f34(*(undefined4 *)(*param_1 + 4),param_2,1,local_18,local_18 + 2,local_18 + 1);
  iVar1 = FUN_0011fd50();
  if ((iVar1 != 0) && (iVar1 = FUN_00124f70(), iVar1 == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return 0 < local_18[0];
}
