/**
 * FUN_006d2964.c
 * Source line: 1032436
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_006d2964(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (((uint)DAT_0094fd34 & 1 << (uVar1 & 0xff)) != 0) {
      Item_Copy((Item_t *)(uVar1 * 4 + 0x98c514),(Item_t *)&DAT_0095bfdc);
    }
    uVar1 += 1;
  } while (uVar1 < 0x10);
  FUN_002fb94c();
  return;
}
