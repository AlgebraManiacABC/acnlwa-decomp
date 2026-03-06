/**
 * FUN_005f29fc.c
 * Source line: 904257
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_005f29fc(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005d46dc();
  if (iVar1 != 0) {
    uVar2 = (**(code **)(**(int **)(param_2 + 4) + 0x26c))();
    FUN_005fd4b8(param_1 + 100,uVar2,param_3);
    return;
  }
  uVar2 = (**(code **)(**(int **)(param_2 + 4) + 0x270))();
  FUN_005fd4b8(param_1 + 100,uVar2,param_3);
  return;
}
