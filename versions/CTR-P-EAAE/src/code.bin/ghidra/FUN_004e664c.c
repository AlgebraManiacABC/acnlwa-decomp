/**
 * FUN_004e664c.c
 * Source line: 729246
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_004e664c(undefined1 *param_1)

{
  if ((param_1[2] & 2) != 0) {
    FUN_0017d2ac();
    return;
  }
  FUN_0017fc48(*param_1,param_1[1] & 0xf,(byte)param_1[1] >> 4,param_1[2] & 1,1);
  return;
}
