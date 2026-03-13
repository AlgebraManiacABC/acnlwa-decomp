/**
 * FUN_00448d84.c
 * Source line: 610494
 * Body lines: 6
 */
#include "../../../include/types.h"

undefined4 FUN_00448d84(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x9c) == '\x02') &&
     (cVar1 = *(char *)(param_1 + 0x88), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return *(undefined4 *)(param_1 + 0x8c);
  }
  return 0xe0a14827;
}
