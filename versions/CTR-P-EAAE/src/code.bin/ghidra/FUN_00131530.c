/**
 * FUN_00131530.c
 * Source line: 137973
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00131530(byte *param_1,byte *param_2)

{
  if (*param_1 < *param_2) {
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
  }
  return;
}
