/**
 * FUN_005ff878.c
 * Source line: 916397
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_005ff878(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((**(ushort **)(param_2 + 0x10) & 0xff) < 10) {
    uVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x8c) + 4) + 0x2c4))();
    FUN_005fd4b8(param_1 + 100,uVar1,param_2);
    return;
  }
  return;
}
