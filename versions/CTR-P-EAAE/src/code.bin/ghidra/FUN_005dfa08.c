/**
 * FUN_005dfa08.c
 * Source line: 890938
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005dfa08(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (**(byte **)(param_2 + 0x10) < 10) {
    uVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x90) + 0x354) + 4) + 0x264))();
    FUN_005fd4b8(param_1 + 100,uVar1,param_2);
    return;
  }
  return;
}
