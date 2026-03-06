/**
 * FUN_005f4bfc.c
 * Source line: 906021
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_005f4bfc(undefined1 *param_1)

{
  *param_1 = 4;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}
