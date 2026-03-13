/**
 * FUN_00448c74.c
 * Source line: 610432
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined1 FUN_00448c74(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x9c) == '\x04') &&
     (cVar1 = *(char *)(param_1 + 0x88), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}
