/**
 * FUN_0013a414.c
 * Source line: 147075
 * Body lines: 11
 */
#include "../../../include/types.h"

uint FUN_0013a414(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 8);
  }
  uVar1 = FUN_0013a5a4(0xffff8001,param_1);
  if ((uVar1 & 0x80000000) == 0) {
    FUN_0013a62c(iVar2);
  }
  return uVar1;
}
