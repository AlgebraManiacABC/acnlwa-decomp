/**
 * FUN_004c94d8.c
 * Source line: 708879
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 * FUN_004c94d8(undefined4 *param_1)

{
  *param_1 = &UNK_00902250;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_0012eeec(param_1 + 3,1);
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  FUN_00128b54(param_1 + 3);
  return param_1;
}
