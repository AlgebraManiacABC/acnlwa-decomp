/**
 * FUN_0030baa8.c
 * Source line: 409754
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0030baa8(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_002b6d20(param_1 + 0x84c,1);
    *(undefined1 *)(param_1 + 0x925) = 0;
    FUN_002b6d20(param_1 + 0x92c,0);
    *(undefined1 *)(param_1 + 0xa05) = 1;
    return;
  }
  FUN_002b6d20(param_1 + 0x84c,0);
  *(undefined1 *)(param_1 + 0x925) = 1;
  FUN_002b6d20(param_1 + 0x92c,1);
  *(undefined1 *)(param_1 + 0xa05) = 0;
  return;
}
