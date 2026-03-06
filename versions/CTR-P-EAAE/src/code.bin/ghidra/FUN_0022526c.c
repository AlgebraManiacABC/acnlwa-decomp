/**
 * FUN_0022526c.c
 * Source line: 280156
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_0022526c(int param_1,undefined1 param_2)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x38) + 0xabc) = param_2;
  }
  return;
}
