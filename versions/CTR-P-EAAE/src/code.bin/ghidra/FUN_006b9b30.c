/**
 * FUN_006b9b30.c
 * Source line: 1016526
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_006b9b30(uint param_1,ItemID param_2)

{
  ItemID *pIVar1;
  uint uVar2;
  
  pIVar1 = FUN_005359fc(param_1);
  if (param_2 < pIVar1[1]) {
    uVar2 = (ushort)(short)*pIVar1 + param_2 & 0xffff;
  }
  else {
    uVar2 = 0x7ffe;
  }
  return uVar2;
}
