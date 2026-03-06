/**
 * FUN_0017127c.c
 * Source line: 187649
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0017127c(int param_1,uint *param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x130);
  if (*(uint *)(param_1 + 0x134) < iVar1 + param_3) {
    param_3 = *(uint *)(param_1 + 0x134) - iVar1;
  }
  if (param_3 != 0) {
    __rt_memcpy(param_2,(uint *)(iRam009751a0 + iVar1),param_3);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(uint *)(param_1 + 8) = param_3;
  return;
}
