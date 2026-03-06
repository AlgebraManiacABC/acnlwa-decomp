/**
 * FUN_0034aac0.c
 * Source line: 447503
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0034aac0(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = 0;
  uVar1 = 0;
  do {
    *(undefined1 *)((int)param_1 + uVar1 + 4) = 0;
    param_1[uVar1 + 4] = 0;
    uVar2 = uVar1 + 1;
    param_1[uVar1 + 0x10] = 0xffffffff;
    uVar1 = uVar2;
  } while (uVar2 < 0xc);
  return;
}
