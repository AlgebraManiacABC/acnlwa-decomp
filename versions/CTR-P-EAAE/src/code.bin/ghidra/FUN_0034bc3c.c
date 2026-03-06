/**
 * FUN_0034bc3c.c
 * Source line: 448376
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0034bc3c(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 0x10) {
    if ((uRam00974f74 >> (uVar1 & 0xff) & 1) != 0) {
      uRam00974f74 &= ~(ushort)(1 << (uVar1 & 0xff));
    }
  }
  return;
}
