/**
 * FUN_006bb040.c
 * Source line: 1017617
 * Body lines: 11
 */
#include "../../../include/types.h"

bool FUN_006bb040(int param_1,short param_2)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = FUN_007684a4();
  if ((iVar1 == 0) || (uVar2 = *(ushort *)(param_1 + 2) & 0x3ff, 0x3ff < uVar2)) {
    uVar2 = 0;
  }
  iVar1 = FUN_007684a4(param_1);
  if (iVar1 != 0) {
    *(ushort *)(param_1 + 2) = uVar2 + param_2 * 0x400 & 0x3fff | *(ushort *)(param_1 + 2) & 0xc000;
  }
  return iVar1 != 0;
}
