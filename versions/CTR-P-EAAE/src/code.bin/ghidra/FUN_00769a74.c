/**
 * FUN_00769a74.c
 * Source line: 1127265
 * Body lines: 10
 */
#include "../../../include/types.h"

uint FUN_00769a74(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_002fccdc();
  if ((iVar1 == 10) && ((*(ushort *)(param_1 + 2) & 0x800) != 0)) {
    uVar2 = *(ushort *)(param_1 + 2) & 3;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
