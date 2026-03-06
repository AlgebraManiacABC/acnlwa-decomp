/**
 * FUN_00625060.c
 * Source line: 938724
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00625060(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  do {
    if ((uVar1 & 0xff) < 4) {
      *(undefined1 *)((int)param_1 + (uVar1 & 0xff) + 0x14) = 0;
    }
    uVar1 += 1;
  } while ((int)uVar1 < 4);
  return;
}
