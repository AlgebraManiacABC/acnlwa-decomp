/**
 * FUN_005ea8dc.c
 * Source line: 899290
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_005ea8dc(int param_1)

{
  if (*(int *)(param_1 + 0x24) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x24) + 4) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  *(undefined4 *)(param_1 + 0xb34) = 0;
  return;
}
