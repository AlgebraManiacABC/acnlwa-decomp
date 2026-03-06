/**
 * FUN_002cd284.c
 * Source line: 367801
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_002cd284(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  if (*(char *)(param_1 + 0x6b69) == '\0') {
    iVar1 = FUN_006d1e64();
    FUN_006953b8(*(undefined4 *)(iVar1 + 0x1dc),1,2);
    param_4 = extraout_r3;
  }
  FUN_00818fa0(param_1 + 0x60e8,FUN_002ccca4,0,param_4,unaff_r4,unaff_lr);
  return 1;
}
