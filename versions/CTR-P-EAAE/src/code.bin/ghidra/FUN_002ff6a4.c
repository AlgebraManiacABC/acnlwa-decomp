/**
 * FUN_002ff6a4.c
 * Source line: 397568
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_002ff6a4(ushort *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1 & 0x7fff;
  if ((((uVar1 == 0x3e || uVar1 == 0x43) || (uVar1 == 0x4d || uVar1 == 0x48)) ||
      (uVar1 == 0x52 || uVar1 == 0x57)) ||
     ((uVar1 == 0x5c || uVar1 == 0x66 || (uVar1 == 0x61 || uVar1 == 0x6b)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
