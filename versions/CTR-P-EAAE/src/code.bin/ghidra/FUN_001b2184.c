/**
 * FUN_001b2184.c
 * Source line: 219580
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_001b2184(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    Item_Copy((Item_t *)(param_1 + uVar2 * 4),(Item_t *)&DAT_0095bfdc);
    iVar1 = param_1 + uVar2;
    uVar2 += 1;
    *(undefined1 *)(iVar1 + 0x40) = 0;
  } while (uVar2 < 0x10);
  return;
}
