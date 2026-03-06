/**
 * FUN_00154728.c
 * Source line: 168288
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_00154728(undefined4 *param_1,int param_2)

{
  if (param_2 < 6) {
    *param_1 = 0x80;
    param_1[1] = 0xd282ffec;
    *(undefined2 *)(param_1 + 2) = 0;
    *(char *)((int)param_1 + 3) = (char)param_2;
  }
  return;
}
