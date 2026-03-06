/**
 * FUN_006019b0.c
 * Source line: 917723
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_006019b0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = iRam0095df14;
  param_1[1] = iRam0095df14;
  param_1[2] = iVar1;
  while (param_1[0x17] != 0) {
    iVar1 = param_1[0x17] + -1;
    param_1[0x17] = iVar1;
    param_1[iVar1 * 2 + 3] = 0;
    (param_1 + iVar1 * 2 + 3)[1] = 0;
  }
  param_1[1] = *param_2;
  param_1[2] = *param_3;
          // WARNING: Could not recover jumptable at 0x00601a0c. Too many branches
          // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 8))();
  return;
}
