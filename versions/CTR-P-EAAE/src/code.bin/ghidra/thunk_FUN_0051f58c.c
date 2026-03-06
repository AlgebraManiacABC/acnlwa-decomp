/**
 * thunk_FUN_0051f58c.c
 * Source line: 412204
 * Body lines: 7
 */
#include "../../../include/types.h"

void thunk_FUN_0051f58c(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1 >> 1;
  if (0x20 < bVar1) {
    bVar1 = 0x20;
  }
  *param_1 = bVar1;
  return;
}
