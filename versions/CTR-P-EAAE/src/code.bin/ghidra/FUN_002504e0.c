/**
 * FUN_002504e0.c
 * Source line: 302324
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_002504e0(int param_1)

{
  if (*(char *)(param_1 + 0x5c) != '\0') {
    FUN_00136cc8(param_1 + 0x44);
    FUN_0020aedc(param_1);
    *(undefined1 *)(param_1 + 0x5c) = 0;
  }
  return;
}
