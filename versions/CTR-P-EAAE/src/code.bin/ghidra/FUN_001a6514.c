/**
 * FUN_001a6514.c
 * Source line: 212777
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_001a6514(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1b9) = param_2;
  *(undefined1 *)(param_1 + 0x1bb) = 1;
  if (*(char *)(param_1 + 0xf2) == '\x16') {
    *(undefined1 *)(param_1 + 0x136) = 0xff;
  }
  else {
    *(undefined1 *)(param_1 + 0xf3) = 0x16;
    *(undefined1 *)(param_1 + 0x136) = 0xff;
  }
  return;
}
