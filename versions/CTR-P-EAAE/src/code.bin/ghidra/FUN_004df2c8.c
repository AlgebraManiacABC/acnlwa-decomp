/**
 * FUN_004df2c8.c
 * Source line: 724272
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_004df2c8(float param_1,float param_2,float param_3,int param_4)

{
  *(uint *)(param_4 + 0x80) =
       (uint)(0.0 < param_1 * 255.0) * (int)(param_1 * 255.0) & 0xff |
       ((uint)(0.0 < param_2 * 255.0) * (int)(param_2 * 255.0) & 0xff) << 8 |
       ((uint)(0.0 < param_3 * 255.0) * (int)(param_3 * 255.0) & 0xff) << 0x10 | 0xff000000;
  return;
}
