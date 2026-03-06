/**
 * FUN_00282c44.c
 * Source line: 328396
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00282c44(uint param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = (byte)(1 << (param_1 & 0xff));
  if (param_2 == 0) {
    bRam0094ddfc &= ~bVar1;
  }
  else {
    bRam0094ddfc |= bVar1;
  }
  return;
}
