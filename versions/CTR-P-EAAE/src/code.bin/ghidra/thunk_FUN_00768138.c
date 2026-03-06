/**
 * thunk_FUN_00768138.c
 * Source line: 403428
 * Body lines: 3
 */
#include "../../../include/types.h"

bool thunk_FUN_00768138(int param_1,Item_t *param_2,byte param_3)

{
  Item_Copy((Item_t *)(param_1 + 0x274),param_2);
  *(byte *)(param_1 + 0x270) = *(byte *)(param_1 + 0x270) & 0xe7 | (param_3 & 3) << 3;
  return (param_2->raw_item_id & 0x6000) == 0x4000;
}
