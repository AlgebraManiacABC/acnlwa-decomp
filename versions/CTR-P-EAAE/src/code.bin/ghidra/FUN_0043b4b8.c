/**
 * FUN_0043b4b8.c
 * Source line: 603738
 * Body lines: 4
 */
#include "../../../include/types.h"

void FUN_0043b4b8(int param_1,uint param_2)

{
  if ((param_2 < 0xc) && ((uint)*(byte *)(param_2 + param_1 + 0x60) < *(uint *)(param_1 + 0x6c))) {
    *(undefined1 *)(param_2 + param_1 + 0x60) = 0xff;
  }
  return;
}
