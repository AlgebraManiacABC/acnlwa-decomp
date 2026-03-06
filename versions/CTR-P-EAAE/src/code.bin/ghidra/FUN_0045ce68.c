/**
 * FUN_0045ce68.c
 * Source line: 625585
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_0045ce68(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x2c);
  if ((cVar1 == '\x01' || cVar1 == '\x02') || cVar1 == '\x03') {
    *(undefined1 *)(param_1 + 0x58) = 1;
  }
  return;
}
