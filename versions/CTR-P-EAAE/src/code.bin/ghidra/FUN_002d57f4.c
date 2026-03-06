/**
 * FUN_002d57f4.c
 * Source line: 373624
 * Body lines: 12
 */
#include "../../../include/types.h"

Item_t * FUN_002d57f4(void)

{
  Item_t *src;
  Item_t in_r3;
  int iVar1;
  Item_t IStack_18;
  
  iVar1 = 0;
  IStack_18 = in_r3;
  do {
    src = (Item_t *)Item_Set(&IStack_18,(uint)*(ushort *)(&UNK_0084514c + iVar1 * 2));
    Item_Copy((Item_t *)(iVar1 * 4 + 0x985a10),src);
    iVar1 += 1;
  } while (iVar1 < 8);
  return &IStack_18;
}
