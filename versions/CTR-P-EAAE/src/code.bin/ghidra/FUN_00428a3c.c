/**
 * FUN_00428a3c.c
 * Source line: 592373
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_00428a3c(undefined4 *param_1)

{
  *param_1 = 0x6498ab32;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  param_1[0x16e] = 0xc;
  *(undefined1 *)(param_1 + 0x16f) = 0xfd;
  param_1[0x170] = 0;
  FUN_00426830(param_1 + 0x171);
  *(undefined1 *)(param_1 + 0x175) = 0;
  *(undefined1 *)((int)param_1 + 0x5d5) = 0;
  FUN_00426830(param_1 + 0x176);
  *(undefined1 *)(param_1 + 0x17a) = 0;
  return;
}
