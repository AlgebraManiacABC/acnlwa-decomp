/**
 * FUN_006ccd54.c
 * Source line: 1029159
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_006ccd54(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    Item_Copy((Item_t *)(param_1 + uVar1 * 4),(Item_t *)&DAT_0095bfdc);
    uVar1 += 1;
  } while (uVar1 < 0xb4);
  return;
}
