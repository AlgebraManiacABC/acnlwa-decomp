/**
 * FUN_005d6908.c
 * Source line: 885056
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_005d6908(undefined4 *param_1)

{
  *param_1 = &DAT_00908854;
  FUN_002f88b8(param_1[0xc]);
  param_1[0xc] = 0;
  *param_1 = &DAT_0090883c;
  FUN_002f88b8(param_1[9]);
  if (param_1[8] != 0) {
    FUN_002f88b8(param_1[8] + -8);
  }
  FUN_002f88b8(param_1[5]);
  FUN_002ffb64(param_1);
  return;
}
