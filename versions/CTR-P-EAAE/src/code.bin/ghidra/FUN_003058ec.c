/**
 * FUN_003058ec.c
 * Source line: 403470
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_003058ec(int param_1,uint param_2,Item_t *param_3,uint param_4,undefined4 param_5)

{
  if (param_2 < 8 && param_4 < 10) {
    Item_Copy((Item_t *)(param_1 + param_2 * 4 + 0x14),param_3);
    *(char *)(param_1 + param_2 + 0x34) = (char)param_4 + '\x04';
    FUN_00303534(param_1 + param_2 * 8 + 0x3c,param_5);
    return;
  }
  return;
}
