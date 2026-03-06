/**
 * FUN_00346bbc.c
 * Source line: 443596
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00346bbc(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x40))
            (*(int **)(param_1 + 4),param_2,param_3 + *(uint *)(param_1 + 8),
             param_4 + *(int *)(param_1 + 0xc) + (uint)CARRY4(param_3,*(uint *)(param_1 + 8)),
             param_5,param_6);
  return;
}
