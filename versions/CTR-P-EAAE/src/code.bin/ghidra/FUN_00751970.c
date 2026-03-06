/**
 * FUN_00751970.c
 * Source line: 1107928
 * Body lines: 7
 */
#include "../../../include/types.h"

byte FUN_00751970(int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if ((*(int *)(param_1 + 0x5f0) != 0) &&
     (bVar1 = *(byte *)(*(int *)(param_1 + 0x5f0) + 0x17) & 0xf, 4 < bVar1)) {
    bVar1 = 0;
  }
  return bVar1;
}
