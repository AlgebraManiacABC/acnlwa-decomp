/**
 * FUN_005f5f80.c
 * Source line: 907541
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_005f5f80(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x8c) + 8) + 4);
  uVar2 = (**(code **)(*piVar1 + 0x2a8))(piVar1,0xe);
  FUN_005fd4b8(param_1 + 100,uVar2,param_2);
  return;
}
