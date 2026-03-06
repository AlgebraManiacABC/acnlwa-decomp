/**
 * FUN_005bbdf8.c
 * Source line: 867543
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_005bbdf8(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 8) = 0x21;
  FUN_00303cdc();
  *(undefined1 *)(param_1 + 9) = 0xff;
  *(undefined1 *)(param_1 + 10) = 9;
  uVar1 = FUN_002fb378();
  FUN_005cddb4(param_1,uVar1);
  *(undefined1 *)(param_1 + 8) = 0x21;
  *(undefined1 *)(param_1 + 0xb) = 0xff;
  *(undefined1 *)(param_1 + 9) = 2;
  return;
}
