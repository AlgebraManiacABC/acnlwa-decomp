/**
 * FUN_00448eb0.c
 * Source line: 610578
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined1 FUN_00448eb0(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x9c) == '\x02') &&
     (cVar1 = *(char *)(param_1 + 0x88), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}
