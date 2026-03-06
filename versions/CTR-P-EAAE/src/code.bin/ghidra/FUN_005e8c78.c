/**
 * FUN_005e8c78.c
 * Source line: 898019
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_005e8c78(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc4) = param_2;
  *(undefined1 *)(param_1 + 200) = 1;
  *(undefined1 *)(param_1 + 0xca) = 1;
  FUN_0060184c(param_1 + 0x60,0x95df14);
  *(undefined4 *)(param_1 + 0xc4) = 0;
  if (*(char *)(param_1 + 0xc9) != '\0') {
    *(undefined1 *)(param_1 + 0xcc) = 0;
  }
  if (*(char *)(param_1 + 0xca) == '\0') {
    *(undefined1 *)(param_1 + 0xcd) = 0;
    *(undefined1 *)(param_1 + 0xcc) = 0;
  }
  return;
}
