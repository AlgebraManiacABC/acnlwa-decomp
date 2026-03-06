/**
 * FUN_00733b1c.c
 * Source line: 1089403
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined1 FUN_00733b1c(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0xa4) == '\x02') &&
     (cVar1 = *(char *)(param_1 + 0x90), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}
