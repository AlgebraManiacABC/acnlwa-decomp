/**
 * FUN_002d5aac.c
 * Source line: 373820
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_002d5aac(int param_1)

{
  if (*(char *)(param_1 + 0x7c) != '\0') {
    FUN_00136cc8(param_1 + 0x44);
    FUN_0020aedc(param_1);
    *(undefined1 *)(param_1 + 0x7c) = 0;
  }
  return;
}
