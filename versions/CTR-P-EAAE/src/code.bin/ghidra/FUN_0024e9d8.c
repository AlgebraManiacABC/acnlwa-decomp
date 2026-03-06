/**
 * FUN_0024e9d8.c
 * Source line: 300813
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0024e9d8(ushort *param_1,uint param_2,undefined1 param_3,undefined1 param_4)

{
  if ((0xfb < *param_1) && (param_2 < 0xfc)) {
    *(undefined1 *)(param_1 + 1) = param_3;
    *param_1 = (ushort)param_2;
    *(undefined1 *)((int)param_1 + 3) = param_4;
  }
  return;
}
