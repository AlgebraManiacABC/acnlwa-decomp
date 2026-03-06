/**
 * FUN_0028c290.c
 * Source line: 332472
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0028c290(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004b4fc0(param_1 + 0x294,"G_inout_00",1);
  FUN_00568630(param_1 + 0x294,param_1 + 0x554,uVar1,0);
  FUN_005697e0(0,param_1 + 0x554);
  if (*(int *)(param_1 + 0x63c) != 0x2e) {
    FUN_0081758c(param_1 + 0x1ea4,FUN_002447b8,0);
    *(undefined1 *)(param_1 + 0x672) = 0;
  }
  FUN_006a40c8(param_1 + 0x2090);
  FUN_002f67ac();
  *(uint *)(param_1 + 0x1804) = *(uint *)(param_1 + 0x1804) | 8;
  return;
}
