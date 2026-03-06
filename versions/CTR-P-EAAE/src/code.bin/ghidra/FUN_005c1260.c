/**
 * FUN_005c1260.c
 * Source line: 870599
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_005c1260(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005c33d0(4,0);
  if ((iVar1 != 0) && (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a))) {
    iVar2 = FUN_00656c20();
    FUN_005d41b8(iVar2 + 0xe,param_1);
    *(char *)(iVar2 + 0x12) = (char)((uint)param_2 >> 8);
    FUN_0064d0b8(iVar1,0x8b,iVar2,0);
    return;
  }
  return;
}
