/**
 * FUN_00602350.c
 * Source line: 918264
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00602350(int param_1,undefined1 param_2,int param_3)

{
  if (0 < param_3) {
    *(int *)(param_1 + 0x18) = param_3;
    *(undefined1 *)(param_1 + 0x14) = param_2;
  }
  return;
}
