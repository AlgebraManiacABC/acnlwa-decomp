/**
 * FUN_005eb8cc.c
 * Source line: 900569
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005eb8cc(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (**(byte **)(param_2 + 0x10) < 10) {
    uVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0x8c) + 4) + 4) + 0x1fc))();
    FUN_005fd4b8(param_1 + 100,uVar1,param_2);
    return;
  }
  return;
}
