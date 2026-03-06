/**
 * FUN_0030f560.c
 * Source line: 413444
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0030f560(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar2 = *(undefined1 *)((int)param_2 + 5);
  *(short *)(param_1 + 0x8f2e) = (short)*param_2;
  *(undefined1 *)(param_1 + 0x8f30) = uVar1;
  *(undefined1 *)(param_1 + 0x8f31) = uVar2;
  return;
}
