/**
 * FUN_0064c384.c
 * Source line: 959152
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0064c384(int param_1,int param_2)

{
  FUN_0057b0d4();
  if ((param_2 == 2 || param_2 == 4) || param_2 == 8) {
    FUN_00635974(*(undefined4 *)(param_1 + 0x660));
    Item_Copy((Item_t *)(param_1 + 0x1020),(Item_t *)&DAT_0095bfdc);
    return;
  }
  return;
}
