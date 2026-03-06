/**
 * FUN_001e8fc4.c
 * Source line: 250788
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_001e8fc4(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  (**(code **)(*(int *)((int)param_1 + *(int *)(*param_1 + -0xc)) + 0x20))
            ((int)param_1 + *(int *)(*param_1 + -0xc));
  iVar1 = FUN_004ed570();
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x220) + 0xc))();
  iVar1 = *(int *)(iVar1 + 4) + param_3 * 0x40;
  FUN_0013451c(iVar1,param_2);
  *(undefined4 *)(iVar1 + 0x3c) = 0x801;
  return;
}
