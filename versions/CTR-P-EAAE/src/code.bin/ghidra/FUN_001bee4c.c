/**
 * FUN_001bee4c.c
 * Source line: 226172
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_001bee4c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x168))(param_1);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x77a) = 0;
    uVar2 = FUN_00308340();
    FUN_005b4ce8(uVar2,(int)(char)param_1[0x77a]);
    return;
  }
  return;
}
