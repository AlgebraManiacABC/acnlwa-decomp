/**
 * FUN_0076adf4.c
 * Source line: 1128408
 * Body lines: 15
 */
#include "../../../include/types.h"

ushort FUN_0076adf4(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *param_1 & 0xffff7fff;
  iVar3 = 0;
  if (uVar2 != 0x334d) {
    iVar3 = uVar2 - 0x3300;
  }
  if (uVar2 != 0x334d && iVar3 != 0x4e) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_1[1] & 0xf;
  }
  return uVar1;
}
