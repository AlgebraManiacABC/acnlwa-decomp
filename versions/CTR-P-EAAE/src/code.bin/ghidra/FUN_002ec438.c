/**
 * FUN_002ec438.c
 * Source line: 384834
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_002ec438(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x10) + -1;
  *(short *)(param_1 + 0x10) = sVar1;
  if (sVar1 < 1) {
    FUN_0068ec64(&DAT_00ae5658,0x42,0xc,0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}
