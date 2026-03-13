/**
 * FUN_00733c50.c
 * Source line: 1089549
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined1 FUN_00733c50(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0xa4) == '\b') &&
     (cVar1 = *(char *)(param_1 + 0x90), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}
