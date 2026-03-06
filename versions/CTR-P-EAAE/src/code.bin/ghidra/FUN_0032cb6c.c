/**
 * FUN_0032cb6c.c
 * Source line: 432129
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_0032cb6c(int param_1,int param_2)

{
  *(char *)(param_1 + 0xd) = (char)param_2;
  if (*(char *)(param_1 + 4) == '\0' && param_2 == 1) {
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0x14) = 1;
    *(undefined1 *)(param_1 + 0x15) = 0;
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  return;
}
