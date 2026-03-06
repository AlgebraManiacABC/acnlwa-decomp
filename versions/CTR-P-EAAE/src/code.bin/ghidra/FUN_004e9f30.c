/**
 * FUN_004e9f30.c
 * Source line: 731782
 * Body lines: 7
 */
#include "../../../include/types.h"

undefined4 * FUN_004e9f30(undefined4 *param_1)

{
  *(undefined1 *)((int)param_1 + 9) = 0xff;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0xff;
  FUN_007796a0((int)param_1 + 10,0xffffffff);
  FUN_007796a0((int)param_1 + 0x12,0xffffffff);
  return param_1;
}
