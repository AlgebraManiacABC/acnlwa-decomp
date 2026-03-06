/**
 * FUN_00691ae8.c
 * Source line: 996894
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_00691ae8(int *param_1)

{
  if (*param_1 != 0) {
    FUN_005204b0();
    *param_1 = 0;
  }
  Item_Copy((Item_t *)(param_1 + 1),(Item_t *)&DAT_0095bfdc);
  return 1;
}
