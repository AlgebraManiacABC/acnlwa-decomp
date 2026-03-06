/**
 * FUN_00769880.c
 * Source line: 1127158
 * Body lines: 8
 */
#include "../../../include/types.h"

bool FUN_00769880(ushort *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1 & 0xffff7fff;
  iVar2 = 0;
  if (uVar1 != 0x290d) {
    iVar2 = uVar1 - 0x2900;
  }
  return uVar1 == 0x290d || iVar2 == 0xe;
}
