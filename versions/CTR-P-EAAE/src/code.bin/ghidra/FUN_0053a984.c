/**
 * FUN_0053a984.c
 * Source line: 780453
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0053a984(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = (uint)(param_4 << 0x15) >> 0x18;
  (**(code **)(*param_2 + 4))(param_2,param_3,uVar1);
  if (param_4 + uVar1 * -8 != 0) {
          // WARNING: Could not recover jumptable at 0x0053a9d8. Too many branches
          // WARNING: Treating indirect jump as call
    (**(code **)(*param_2 + 4))(param_2,param_3 + uVar1,1);
    return;
  }
  return;
}
