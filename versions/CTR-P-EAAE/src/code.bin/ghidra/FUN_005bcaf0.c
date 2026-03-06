/**
 * FUN_005bcaf0.c
 * Source line: 867918
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_005bcaf0(int param_1)

{
  byte bVar1;
  
  bVar1 = *(char *)(param_1 + 0xa9) + 1;
  *(byte *)(param_1 + 0xa9) = bVar1;
  if (2 < bVar1) {
    *(undefined1 *)(param_1 + 0xa7) = 1;
    *(undefined1 *)(param_1 + 0xa9) = 3;
  }
  return;
}
