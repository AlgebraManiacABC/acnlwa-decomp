/**
 * FUN_00173d1c.c
 * Source line: 189457
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_00173d1c(int param_1,uint *param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x130);
  if (*(uint *)(param_1 + 0x134) < iVar1 + param_3) {
    param_3 = *(uint *)(param_1 + 0x134) - iVar1;
  }
  if (param_3 != 0) {
    __rt_memcpy((uint *)(iVar1 + iRam009751a0),param_2,param_3);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(uint *)(param_1 + 8) = param_3;
  return;
}
