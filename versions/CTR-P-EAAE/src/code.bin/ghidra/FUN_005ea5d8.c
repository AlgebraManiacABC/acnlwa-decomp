/**
 * FUN_005ea5d8.c
 * Source line: 899127
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_005ea5d8(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x1c))(param_1);
    uVar2 = (**(code **)(*param_1 + 0x10))(param_1);
    if (uVar2 <= param_3) {
      param_3 = uVar2 - 1;
    }
    nnnstdMemCpy(iVar1,param_2,param_3 << 1);
    return;
  }
  return;
}
