/**
 * FUN_001f7d78.c
 * Source line: 257856
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_001f7d78(int param_1)

{
  if (*(char *)(param_1 + 5) != '\0') {
    FUN_00136cc8(param_1 + 0x4c);
    FUN_0020aedc(param_1 + 8);
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}
