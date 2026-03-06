/**
 * FUN_005f2a5c.c
 * Source line: 904276
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_005f2a5c(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  
  if (param_5 != 7) {
    *(short *)(param_1 + 0x6a) = (short)param_5;
  }
  if (**(byte **)(param_3 + 0x10) < 10) {
    uVar1 = (**(code **)(**(int **)(param_2 + 4) + 0x2ac))(*(int **)(param_2 + 4),param_4);
    FUN_005fd4b8(param_1 + 100,uVar1,param_3);
    return;
  }
  return;
}
