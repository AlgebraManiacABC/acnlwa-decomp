/**
 * FUN_007694c4.c
 * Source line: 1126949
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_007694c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_007684a4();
  if (((iVar1 == 0) || (0x3ff < (*(ushort *)(param_1 + 2) & 0x3ff))) ||
     ((*(ushort *)(param_1 + 2) & 0x3ff) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
