/**
 * FUN_006d926c.c
 * Source line: 1035705
 * Body lines: 7
 */
#include "../../../include/types.h"

byte FUN_006d926c(undefined4 param_1,uint param_2)

{
  byte bVar1;
  
  if (((iRam0095063c == 0) || (*(byte *)(iRam0095063c + 0x2c) != param_2)) ||
     (bVar1 = *(byte *)(iRam0095063c + 0x2d) & 0xf,
     (bVar1 == 4 || bVar1 == 5) || (*(byte *)(iRam0095063c + 0x2d) & 0xf) == 0)) {
    bVar1 = 3;
  }
  return bVar1;
}
