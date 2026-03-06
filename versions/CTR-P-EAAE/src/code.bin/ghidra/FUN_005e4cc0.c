/**
 * FUN_005e4cc0.c
 * Source line: 894803
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_005e4cc0(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 200) = 1;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  FUN_0060184c(param_1 + 0x60,0x95df14);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(char *)(param_1 + 0xc9) == '\0') {
    *(undefined1 *)(param_1 + 0xcc) = 0;
  }
  return;
}
