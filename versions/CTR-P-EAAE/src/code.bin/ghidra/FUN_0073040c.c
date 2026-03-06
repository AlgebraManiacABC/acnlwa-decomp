/**
 * FUN_0073040c.c
 * Source line: 1087036
 * Body lines: 8
 */
#include "../../../include/types.h"

uint FUN_0073040c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0072f1d8(iRam00974a58);
  if (iVar1 != 0) {
    uVar2 = FUN_0073078c(*(undefined4 *)(iRam00974a58 + 0x18),param_2);
    return uVar2;
  }
  return (uint)*(ushort *)(param_1 + param_2 * 2 + 0xe);
}
