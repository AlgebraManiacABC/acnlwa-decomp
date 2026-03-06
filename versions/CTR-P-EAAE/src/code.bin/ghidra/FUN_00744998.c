/**
 * FUN_00744998.c
 * Source line: 1100965
 * Body lines: 12
 */
#include "../../../include/types.h"

uint FUN_00744998(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))();
  iVar2 = (**(code **)(**(int **)(param_1 + 8) + 8))();
  if (iVar1 < iVar2) {
    local_10 = (**(code **)(**(int **)(param_1 + 8) + 0x28))();
  }
  else {
    local_10 = (**(code **)(**(int **)(param_1 + 4) + 0x28))();
  }
  return local_10 & 0xffffff;
}
