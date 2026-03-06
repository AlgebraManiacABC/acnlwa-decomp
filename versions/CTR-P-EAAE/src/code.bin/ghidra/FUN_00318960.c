/**
 * FUN_00318960.c
 * Source line: 419236
 * Body lines: 9
 */
#include "../../../include/types.h"

uint FUN_00318960(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((int)(uint)*(byte *)(param_1 + 8) < *(int *)(&UNK_0088f364 + uVar1 * 4)) {
      return uVar1 & 0xff;
    }
    uVar1 += 1;
  } while ((int)uVar1 < 0xc);
  return 0xc;
}
