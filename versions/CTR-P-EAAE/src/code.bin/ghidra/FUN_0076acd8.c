/**
 * FUN_0076acd8.c
 * Source line: 1128333
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_0076acd8(ushort *param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  
  uVar2 = *param_1 & 0x7fff;
  if (((uVar2 == 0x334d || uVar2 == 0x334e) &&
      (uVar2 = *param_1 & 0x7fff, uVar2 == 0x334d || uVar2 == 0x334e)) && (7 < (param_1[1] & 0xf)))
  {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
