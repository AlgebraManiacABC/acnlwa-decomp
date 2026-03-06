/**
 * FUN_005ffa58.c
 * Source line: 916467
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005ffa58(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (**(byte **)(param_2 + 0x10) < 10) {
    uVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x8c) + 4) + 0x2e0))();
    FUN_005fd4b8(param_1 + 100,uVar1,param_2);
    return;
  }
  return;
}
