/**
 * FUN_0044d43c.c
 * Source line: 613685
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0044d43c(int param_1)

{
  if (*(int *)(param_1 + 0x18) - 0x100000U < 0x3ff00000) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    FUN_0011c0fa(*(int *)(param_1 + 0x18),&UNK_0044e890);
    FUN_004260a4();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}
