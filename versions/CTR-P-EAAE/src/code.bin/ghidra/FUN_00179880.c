/**
 * FUN_00179880.c
 * Source line: 193472
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00179880(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_18 [3];
  
  iVar1 = FUN_0013f28c(param_1 + 0x138,local_18);
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 4) = 0xb;
    *(undefined4 *)(param_1 + 8) = 0xffffff80;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *param_2 = local_18[0];
  }
  return *(undefined4 *)(param_1 + 4);
}
