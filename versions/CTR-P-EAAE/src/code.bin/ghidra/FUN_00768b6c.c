/**
 * FUN_00768b6c.c
 * Source line: 1126409
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_00768b6c(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_007684a4();
  if (((iVar2 == 0) || (uVar1 = ((uint)*(ushort *)(param_1 + 2) << 0x12) >> 0x1c, 0xd < uVar1)) ||
     (uVar1 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
