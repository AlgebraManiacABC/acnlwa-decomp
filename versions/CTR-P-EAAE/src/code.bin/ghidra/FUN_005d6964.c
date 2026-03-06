/**
 * FUN_005d6964.c
 * Source line: 885074
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 * FUN_005d6964(undefined4 *param_1)

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
  return param_1;
}
