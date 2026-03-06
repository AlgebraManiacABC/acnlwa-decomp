/**
 * FUN_002b8010.c
 * Source line: 354904
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_002b8010(uint param_1)

{
  uint uVar1;
  byte bVar2;
  
  if (param_1 < 0x20) {
    bVar2 = *(byte *)((int)&DAT_00952aec + (param_1 >> 3));
    uVar1 = 1 << (param_1 & 7);
    if ((bVar2 & uVar1) != 0) {
      *(byte *)((int)&DAT_00952aec + (param_1 >> 3)) = bVar2 & ~(byte)uVar1;
    }
  }
  return;
}
