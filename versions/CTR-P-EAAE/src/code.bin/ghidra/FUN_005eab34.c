/**
 * FUN_005eab34.c
 * Source line: 899406
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005eab34(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (**(byte **)(param_2 + 0x10) < 10) {
    uVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x8c) + 4) + 4) + 0x288))();
    FUN_005fd4b8(param_1 + 100,uVar1,param_2);
    return;
  }
  return;
}
