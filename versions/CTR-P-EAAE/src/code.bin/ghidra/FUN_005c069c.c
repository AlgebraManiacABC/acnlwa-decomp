/**
 * FUN_005c069c.c
 * Source line: 869970
 * Body lines: 8
 */
#include "../../../include/types.h"

byte FUN_005c069c(void)

{
  byte bVar1;
  
  if (_DAT_00aaf14c == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = ~*(byte *)(_DAT_00aaf14c + 0x55ba) & 1;
  }
  return bVar1;
}
