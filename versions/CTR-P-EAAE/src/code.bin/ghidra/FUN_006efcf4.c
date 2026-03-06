/**
 * FUN_006efcf4.c
 * Source line: 1048696
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_006efcf4(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2 & 0xff;
  uVar1 = (undefined1)((uint)param_2[1] >> 8);
  *(undefined1 *)((int)param_1 + 9) = uVar1;
  if (param_3 != 0) {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 2) = 0;
  if (param_3 != 0) {
    *(undefined1 *)(param_1 + 2) = uVar1;
  }
  return;
}
