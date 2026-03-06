/**
 * FUN_00646c64.c
 * Source line: 957802
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00646c64(int param_1,char *param_2,undefined4 param_3,Item_t param_4)

{
  Item_t *src;
  Item_t IStack_18;
  
  if (*param_2 != '\x18') {
    return;
  }
  IStack_18 = param_4;
  src = (Item_t *)Item_Set(&IStack_18,0x341c);
  Item_Copy((Item_t *)(param_1 + 0x130),src);
  *(undefined1 *)(param_1 + 0x138) = 0;
  if (*(byte *)(param_1 + 0x271) != 0xffffffff) {
    FUN_002fb94c();
    return;
  }
  FUN_002fae84(&IStack_18);
  return;
}
