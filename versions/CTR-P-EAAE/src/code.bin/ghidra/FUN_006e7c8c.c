/**
 * FUN_006e7c8c.c
 * Source line: 1044527
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_006e7c8c(int param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0x500) = *param_2;
  if (*(byte *)(param_1 + 0x474) < 0x1d) {
    *(undefined2 *)(param_1 + 0x498) = *param_2;
  }
  return;
}
