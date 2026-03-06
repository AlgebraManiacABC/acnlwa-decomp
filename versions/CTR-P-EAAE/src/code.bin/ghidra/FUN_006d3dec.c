/**
 * FUN_006d3dec.c
 * Source line: 1033464
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_006d3dec(undefined4 param_1)

{
  int iVar1;
  int extraout_r3;
  
  DAT_0094fd44 = param_1;
  iVar1 = FUN_006d265c(0x72);
  if (iVar1 != 0) {
    *(undefined1 *)(extraout_r3 + 0xf) = 0;
    *(undefined4 *)(extraout_r3 + 0x50) = 0xffffffff;
  }
  return;
}
