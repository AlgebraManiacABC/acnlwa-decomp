/**
 * FUN_005fb170.c
 * Source line: 911070
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005fb170(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x8c) + 0x354);
  *(undefined2 *)(param_1 + 0x6a) = 3;
  uVar1 = (**(code **)(**(int **)(iVar2 + 4) + 0x2a0))();
  FUN_005fd4b8(param_1 + 100,uVar1,param_2);
  return;
}
