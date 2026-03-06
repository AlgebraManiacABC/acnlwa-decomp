/**
 * FUN_006261b8.c
 * Source line: 939944
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_006261b8(void)

{
  char cVar1;
  
  if (*(char *)(DAT_0095362c + 0x1329d) == '\x02') {
    cVar1 = *(char *)(DAT_0095362c + 0x28e1);
  }
  else {
    cVar1 = *(char *)(DAT_0095362c + 0x2779);
  }
  if (cVar1 != '\0') {
    return 1;
  }
  return 0;
}
