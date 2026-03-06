/**
 * FUN_001343e4.c
 * Source line: 140210
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_001343e4(undefined4 *param_1)

{
  param_1[1] = param_1 + 3;
  *param_1 = &DAT_0090558c;
  param_1[2] = 0x100;
  *(undefined1 *)(param_1[1] + 0xff) = 0;
  *param_1 = &UNK_009050f8;
  *(undefined1 *)param_1[1] = 0;
  *param_1 = &UNK_009048b0;
  return;
}
