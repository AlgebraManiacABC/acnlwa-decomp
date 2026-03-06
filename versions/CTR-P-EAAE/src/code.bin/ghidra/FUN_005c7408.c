/**
 * FUN_005c7408.c
 * Source line: 876240
 * Body lines: 6
 */
#include "../../../include/types.h"

byte FUN_005c7408(void)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((_DAT_00aaf14c != 0) && (bVar1 = *(byte *)(_DAT_00aaf14c + 0x6b7a) & 3, 3 < bVar1)) {
    bVar1 = 0;
  }
  return bVar1;
}
