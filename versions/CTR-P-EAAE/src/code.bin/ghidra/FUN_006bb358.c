/**
 * FUN_006bb358.c
 * Source line: 1017764
 * Body lines: 14
 */
#include "../../../include/types.h"

bool FUN_006bb358(int param_1,short param_2)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  
  iVar2 = FUN_007684a4();
  if ((iVar2 == 0) ||
     (uVar1 = (uint)*(ushort *)(param_1 + 2) << 0x12, uVar3 = (ushort)(uVar1 >> 0x1c),
     0xd < uVar1 >> 0x1c)) {
    uVar3 = 0;
  }
  iVar2 = FUN_007684a4(param_1);
  if (iVar2 != 0) {
    *(ushort *)(param_1 + 2) = param_2 + uVar3 * 0x400 & 0x3fff | *(ushort *)(param_1 + 2) & 0xc000;
  }
  return iVar2 != 0;
}
