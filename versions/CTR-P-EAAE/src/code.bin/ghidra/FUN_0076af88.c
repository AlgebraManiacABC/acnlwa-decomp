/**
 * FUN_0076af88.c
 * Source line: 1128523
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_0076af88(ushort *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1 & 0x7fff;
  if (((uVar1 == 0x3e || uVar1 == 0x43) || (uVar1 == 0x4d || uVar1 == 0x48)) || (uVar1 == 0x52)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
