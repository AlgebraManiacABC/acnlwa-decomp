/**
 * FUN_00712c64.c
 * Source line: 1068201
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00712c64(byte *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *param_1;
  if ((bVar1 < 0x22) && (bVar1 == 0x10 || bVar1 == 0x21)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
