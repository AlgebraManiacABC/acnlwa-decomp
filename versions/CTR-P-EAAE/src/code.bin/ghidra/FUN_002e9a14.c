/**
 * FUN_002e9a14.c
 * Source line: 383760
 * Body lines: 8
 */
#include "../../../include/types.h"

uint * FUN_002e9a14(uint *param_1)

{
  if (*param_1 < 0x30) {
    FUN_002a4c30(param_1[2]);
    param_1[2] = 0;
    *param_1 = 0xffffffff;
    param_1[1] = 0;
  }
  FUN_00136cc8(param_1 + 3);
  return param_1;
}
