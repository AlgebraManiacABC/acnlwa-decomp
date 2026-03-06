/**
 * FUN_004c5258.c
 * Source line: 705611
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_004c5258(float param_1,undefined1 *param_2)

{
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined2 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 8) = 0x477fff00;
  param_2[0x18] = 0x7f;
  *(undefined4 *)(param_2 + 0xc) = 0x477fff00;
  *param_2 = 0;
  *(float *)(param_2 + 4) = param_1 * 10.0;
  return;
}
