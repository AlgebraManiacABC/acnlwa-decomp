/**
 * FUN_00733bc4.c
 * Source line: 1089499
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_00733bc4(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_2 + 100) == 0) {
    puVar1 = (undefined4 *)FUN_003e1f5c();
    uVar2 = puVar1[1];
    *param_1 = *puVar1;
    param_1[1] = uVar2;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x88);
    *param_1 = *(undefined4 *)(param_2 + 0x84);
    param_1[1] = uVar2;
  }
  return;
}
