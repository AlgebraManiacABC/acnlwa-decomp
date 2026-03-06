/**
 * FUN_00374000.c
 * Source line: 479482
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00374000(undefined4 *param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 100) = param_3;
  *param_1 = 0x10001;
  param_1[1] = &UNK_0089a66c;
  param_1[2] = 0x71;
  return;
}
