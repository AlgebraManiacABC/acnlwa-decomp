/**
 * FUN_005fb324.c
 * Source line: 911085
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005fb324(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x8c) + 0x354);
  *(undefined2 *)(param_1 + 0x6a) = 2;
  piVar1 = *(int **)(iVar3 + 4);
  uVar2 = (**(code **)(*piVar1 + 0x2a8))(piVar1,1);
  FUN_005fd4b8(param_1 + 100,uVar2,param_2);
  return;
}
