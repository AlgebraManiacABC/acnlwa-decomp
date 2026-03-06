/**
 * FUN_006e307c.c
 * Source line: 1041361
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_006e307c(int param_1)

{
  if ((*(int *)(param_1 + 0x2760) == 0) &&
     (((*(uint *)(param_1 + 0x2764) & 1) == 0 || (*(uint *)(param_1 + 0x2764) == 0)))) {
    *(code **)(param_1 + 0x2760) = FUN_006e2a90;
    *(undefined4 *)(param_1 + 0x2764) = 0;
    *(undefined4 *)(param_1 + 0x27a8) = 0;
    *(undefined1 *)(param_1 + 0x27c6) = 0;
    return 1;
  }
  return 0;
}
