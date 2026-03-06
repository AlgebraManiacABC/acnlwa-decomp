/**
 * FUN_005ec4e4.c
 * Source line: 901061
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_005ec4e4(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x8c) + 4) + 4);
  uVar2 = (**(code **)(*piVar1 + 0x2a8))(piVar1,3);
  FUN_005fd4b8(param_1 + 100,uVar2,param_2);
  return;
}
