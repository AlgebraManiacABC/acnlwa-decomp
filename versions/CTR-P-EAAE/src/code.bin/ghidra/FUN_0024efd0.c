/**
 * FUN_0024efd0.c
 * Source line: 301041
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0024efd0(int param_1)

{
  if (*(int *)(param_1 * 4 + 0x9845b8) != 0) {
    thunk_FUN_008b1b88();
    thunk_FUN_008b1b88(*(undefined4 *)(param_1 * 4 + 0x9845b8));
    OnUnresolved(*(undefined4 *)(param_1 * 4 + 0x9845b8),0x1000581);
    return;
  }
  return;
}
