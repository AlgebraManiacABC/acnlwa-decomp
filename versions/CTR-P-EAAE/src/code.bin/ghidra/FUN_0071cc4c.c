/**
 * FUN_0071cc4c.c
 * Source line: 1074669
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_0071cc4c(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((((int)param_2 < 0) || (8 < param_2)) ||
      (iVar2 = param_1 + param_2 * 4, *(int *)(iVar2 + 0x38) != param_3)) ||
     (*(char *)(*(int *)(param_1 + 0x14 + param_2 * 4) + 0x2c) != '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(iVar2 + 0x14);
  }
  return uVar1;
}
