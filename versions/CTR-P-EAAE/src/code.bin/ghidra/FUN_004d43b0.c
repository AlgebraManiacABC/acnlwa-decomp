/**
 * FUN_004d43b0.c
 * Source line: 717160
 * Body lines: 7
 */
#include "../../../include/types.h"

int FUN_004d43b0(int param_1)

{
  FUN_004c6c34();
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  return param_1;
}
