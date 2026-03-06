/**
 * FUN_005664d8.c
 * Source line: 808437
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_005664d8(undefined4 *param_1,undefined1 param_2,int param_3)

{
  *param_1 = &UNK_00906030;
  *(undefined1 *)(param_1 + 1) = param_2;
  param_1[2] = 0x14;
  param_1[3] = 0;
  *(undefined1 *)((int)param_1 + 6) = 2;
  if (param_3 == 0) {
    *(undefined1 *)((int)param_1 + 5) = 0;
  }
  else if (param_3 == 1) {
    *(undefined1 *)((int)param_1 + 5) = 1;
  }
  return;
}
