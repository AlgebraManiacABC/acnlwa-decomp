/**
 * FUN_005b1a2c.c
 * Source line: 863225
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_005b1a2c(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}
