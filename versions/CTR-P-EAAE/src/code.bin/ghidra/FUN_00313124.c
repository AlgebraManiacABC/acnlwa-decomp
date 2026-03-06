/**
 * FUN_00313124.c
 * Source line: 415761
 * Body lines: 11
 */
#include "../../../include/types.h"

undefined4 FUN_00313124(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_007684a4();
  if (((iVar1 == 0) || ((*(ushort *)(param_1 + 2) & 0x3fff) == 0)) ||
     (iVar1 = FUN_0076bb34(param_1), iVar1 != 8)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
