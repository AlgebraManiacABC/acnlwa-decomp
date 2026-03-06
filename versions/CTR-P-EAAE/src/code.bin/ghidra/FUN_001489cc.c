/**
 * FUN_001489cc.c
 * Source line: 161072
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_001489cc(int *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[0x1c];
  *(char *)((int)param_1 + 0x2a) = (char)LZCOUNT(uVar1 & -uVar1);
  param_1[0x14] = uVar1 >> (0x20U - LZCOUNT(uVar1 & -uVar1) & 0xff);
  param_1[0x15] = param_1[0x1b] - *param_1;
  return;
}
