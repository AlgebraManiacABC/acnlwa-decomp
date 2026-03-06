/**
 * FUN_0020d328.c
 * Source line: 269209
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_0020d328(int param_1)

{
  int iVar1;
  Item_t *dst;
  
  __rt_memclr_w(param_1,0x54);
  iVar1 = 0;
  do {
    dst = (Item_t *)(param_1 + iVar1 * 4);
    Item_Copy(dst,(Item_t *)&DAT_0095bfdc);
    Item_Copy(dst + 4,(Item_t *)&DAT_0095bfdc);
    *(undefined1 *)(param_1 + iVar1 + 0x20) = 0;
    FUN_00303cdc(param_1 + iVar1 * 8 + 0x24);
    iVar1 += 1;
    dst[0x11].raw_item_id = 0;
    dst[0x11]._x2 = 0;
  } while (iVar1 < 4);
  return;
}
