/**
 * FUN_0012e904.c
 * Source line: 135252
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_0012e904(int param_1)

{
  if (cRam0094cd06 != '\0') {
    *(undefined4 *)(param_1 + 4) = 0;
    cRam0094cd06 = '\0';
    FUN_00136e4c(*(int *)(DAT_0094d080 + 0xc0c) + 4,0);
    if (*(int *)(param_1 + 0x1c) != 0) {
      FUN_00136e58(*(int *)(param_1 + 0x1c),0);
      return;
    }
  }
  return;
}
