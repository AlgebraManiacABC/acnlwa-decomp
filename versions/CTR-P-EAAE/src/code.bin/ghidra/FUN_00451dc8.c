/**
 * FUN_00451dc8.c
 * Source line: 617441
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00451dc8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c [2];
  
  local_24 = *(undefined4 *)(param_1 + 0xc);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))
                    (*(int **)(param_1 + 0x10),&local_24,param_3,8,0);
  if (iVar1 - 0x100000U < 0x3ff00000) {
    local_20 = 5;
    local_1c[0] = 0;
    FUN_00426714(local_1c,param_2);
    FUN_00459ce8(iVar1,&local_20);
    FUN_0044e6f8(*(undefined4 *)(param_1 + 0x10));
  }
  return;
}
