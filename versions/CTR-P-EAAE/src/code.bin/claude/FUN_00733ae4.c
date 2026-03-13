/**
 * FUN_00733ae4.c
 * Source line: 1089371
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined1 FUN_00733ae4(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0xa4) == '\x05') &&
     (cVar1 = *(char *)(param_1 + 0x90), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}
