/**
 * FUN_005dda74.c
 * Source line: 889028
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005dda74(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (**(byte **)(param_2 + 0x10) < 10) {
    uVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x90) + 8) + 4) + 0x25c))();
    FUN_005fd4b8(param_1 + 100,uVar1,param_2);
    return;
  }
  return;
}
