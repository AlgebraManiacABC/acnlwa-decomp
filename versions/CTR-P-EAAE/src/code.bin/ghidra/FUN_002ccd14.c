/**
 * FUN_002ccd14.c
 * Source line: 367504
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_002ccd14(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x44];
  if (iVar1 < param_1[0x43]) {
    do {
      FUN_002e0908(param_1[0x42] + iVar1 * 0x518);
      iVar1 += 1;
    } while (iVar1 < param_1[0x43]);
  }
  (**(code **)(*param_1 + 0xc))(param_1);
  param_1[0x2d] = 0;
  return;
}
