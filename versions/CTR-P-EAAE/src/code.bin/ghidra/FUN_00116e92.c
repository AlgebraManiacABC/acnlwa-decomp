/**
 * FUN_00116e92.c
 * Source line: 115907
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00116e92(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return;
}
