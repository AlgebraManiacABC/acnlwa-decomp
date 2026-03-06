/**
 * FUN_00415ae4.c
 * Source line: 581422
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined1 FUN_00415ae4(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x74) == '\x02') &&
     (cVar1 = *(char *)(param_1 + 0x60), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}
