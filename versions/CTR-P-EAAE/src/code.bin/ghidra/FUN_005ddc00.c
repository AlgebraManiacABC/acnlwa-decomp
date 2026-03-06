/**
 * FUN_005ddc00.c
 * Source line: 889109
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005ddc00(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (**(byte **)(param_2 + 0x10) < 10) {
    uVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x90) + 8) + 4) + 600))();
    FUN_005fd4b8(param_1 + 100,uVar1,param_2);
    return;
  }
  return;
}
