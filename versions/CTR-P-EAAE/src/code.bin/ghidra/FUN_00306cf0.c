/**
 * FUN_00306cf0.c
 * Source line: 404773
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00306cf0(int param_1,uint param_2)

{
  *(char *)(param_1 + 0x95e) = (char)param_2;
  if ((param_2 < 0x3f) && (DAT_00953864 != 0)) {
    *(uint *)(param_1 + 0xaa0) = DAT_00953864 + 0x10 + param_2 * 0x10;
    return;
  }
  *(undefined4 *)(param_1 + 0xaa0) = 0;
  return;
}
