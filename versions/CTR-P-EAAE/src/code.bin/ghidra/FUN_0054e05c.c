/**
 * FUN_0054e05c.c
 * Source line: 793070
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0054e05c(int param_1)

{
  FUN_00554c20(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x10f54) = 0;
  FUN_0054dc90(param_1,1);
  if ((*(char *)(param_1 + 0x10f5c) == '\0') && (*(char *)(param_1 + 0x10f5d) != '\0')) {
    FUN_0054ded0(param_1,1);
    return;
  }
  return;
}
