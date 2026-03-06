/**
 * FUN_00693570.c
 * Source line: 997932
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_00693570(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    Item_Copy((Item_t *)(uVar1 * 4 + 0x98b080),(Item_t *)&DAT_0095bfdc);
    uVar1 += 1;
  } while (uVar1 < 0x80);
  uRam0098b280 = 0;
  return;
}
