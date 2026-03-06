/**
 * FUN_00448e2c.c
 * Source line: 610542
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined1 FUN_00448e2c(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x9c) == '\x01') &&
     (cVar1 = *(char *)(param_1 + 0x88), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}
