/**
 * FUN_007695b0.c
 * Source line: 1126989
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_007695b0(ushort *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1 & 0xffff7fff;
  iVar2 = 0;
  if (uVar1 != 0x28a8) {
    iVar2 = uVar1 - 0x2800;
  }
  return uVar1 == 0x28a8 || iVar2 == 0xa9;
}
