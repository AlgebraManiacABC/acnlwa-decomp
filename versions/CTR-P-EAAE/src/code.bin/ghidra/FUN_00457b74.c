/**
 * FUN_00457b74.c
 * Source line: 621754
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00457b74(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10) - 0x100000U < 0x3ff00000) {
    FUN_00452e4c();
  }
  if (0x3fefffff < *(int *)(param_1 + 0xc) - 0x100000U) {
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x5c);
  if (iVar1 - 1U < 0xfe) {
    uRam00ae61d1 = (undefined1)iVar1;
  }
  else {
    uRam00ae61d1 = 0xff;
  }
  return;
}
