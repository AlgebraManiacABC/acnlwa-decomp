/**
 * thunk_FUN_005bd974.c
 * Source line: 405158
 * Body lines: 15
 */
#include "../../../include/types.h"

void thunk_FUN_005bd974(int param_1)

{
  Item_t *src;
  
  if (*(char *)(param_1 + 9) == '\x02') {
    FUN_002fae84();
    return;
  }
  *(undefined1 *)(param_1 + 8) = 0x21;
  FUN_00303cdc(param_1);
  *(undefined1 *)(param_1 + 9) = 0xff;
  *(undefined1 *)(param_1 + 10) = 9;
  src = (Item_t *)Item_Copy((Item_t *)(param_1 + 0x10),(Item_t *)&DAT_0095bfdc);
  Item_Copy((Item_t *)(param_1 + 0xc),src);
  *(undefined1 *)(param_1 + 0x14) = 0xff;
  *(undefined1 *)(param_1 + 0x15) = 7;
  *(undefined1 *)(param_1 + 0x16) = 0xff;
  return;
}
