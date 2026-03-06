/**
 * FUN_001cdf44.c
 * Source line: 234738
 * Body lines: 13
 */
#include "../../../include/types.h"

uint FUN_001cdf44(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 8) >> (param_2 * 8 - 8U & 0xff) & 0x7f;
    if (99 < uVar1) {
      uVar1 = 99;
    }
    return uVar1;
  }
  uVar1 = *(ushort *)(param_1 + 0xc) & 0xffff3fff;
  if (9999 < uVar1) {
    uVar1 = 9999;
  }
  return uVar1;
}
