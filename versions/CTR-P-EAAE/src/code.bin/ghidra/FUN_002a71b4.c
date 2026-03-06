/**
 * FUN_002a71b4.c
 * Source line: 346570
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_002a71b4(int param_1)

{
  Item_t *dst;
  uint uVar1;
  
  uVar1 = 0;
  do {
    dst = (Item_t *)(param_1 + uVar1 * 0x18);
    Item_Copy(dst,(Item_t *)&DAT_0095bfdc);
    Item_Copy(dst + 1,(Item_t *)&DAT_0095bfdc);
    Item_Copy(dst + 2,(Item_t *)&DAT_0095bfdc);
    Item_Copy(dst + 3,(Item_t *)&DAT_0095bfdc);
    Item_Copy(dst + 4,(Item_t *)&DAT_0095bfdc);
    Item_Copy(dst + 5,(Item_t *)&DAT_0095bfdc);
    uVar1 += 1;
  } while (uVar1 < 4);
  *(undefined1 *)(param_1 + 0x60) = 0;
  return;
}
