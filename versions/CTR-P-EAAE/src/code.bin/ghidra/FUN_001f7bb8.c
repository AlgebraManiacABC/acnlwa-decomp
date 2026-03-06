/**
 * FUN_001f7bb8.c
 * Source line: 257773
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_001f7bb8(int param_1)

{
  if (*(char *)(param_1 + 5) != '\0') {
    FUN_00136cc8(param_1 + 0x4c);
    FUN_0020aedc(param_1 + 8);
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}
