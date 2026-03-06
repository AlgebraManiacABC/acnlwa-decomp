/**
 * FUN_002da68c.c
 * Source line: 375588
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_002da68c(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x7a9) == '\x01') {
    FUN_0057d55c();
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x44))();
  }
  *(undefined1 *)(param_1 + 0x7a6) = 1;
  if ((*(char *)(param_1 + 0x7a9) != '\x01') && (*(char *)(param_1 + 0x7a5) == '\x01')) {
    uVar1 = FUN_004b4fc0(param_1 + 0x50,"G_inout",1);
    FUN_00568630(param_1 + 0x50,param_1 + 0x40c,uVar1,0);
    FUN_005697e0(0,param_1 + 0x40c);
          // WARNING: Subroutine does not return
    FUN_00568c10(param_1 + 0x50);
  }
  return;
}
