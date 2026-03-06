/**
 * FUN_0068eb10.c
 * Source line: 994169
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_0068eb10(float param_1,int param_2)

{
  if (DAT_00950874 == 0) {
    return 0;
  }
  if ((*(char *)(DAT_00950874 + 0x1b4) != '\0') &&
     (*(float *)(DAT_00950874 + 0xbc) + fRam00950894 < *(float *)(param_2 + 8) - param_1 * 0.5)) {
    return 1;
  }
  return 0;
}
