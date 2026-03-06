/**
 * FUN_005c3904.c
 * Source line: 873115
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_005c3904(ushort *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005c33d0(4,0);
  if ((iVar1 != 0) && (-1 < (int)((uint)*(byte *)(iVar1 + 0x8c5) << 0x1a))) {
    iVar2 = FUN_00656c20();
    FUN_005d41b8(iVar2 + 0xe,iVar1 + 0x14);
    *(char *)(iVar2 + 0x12) = (char)((uint)*(ushort *)(iVar1 + 0x2e) + (uint)*param_1 >> 8);
    if (param_2 != 0) {
      FUN_005d41b8(iVar2 + 0xe,param_2);
    }
    FUN_0064d0b8(iVar1,0xe1,iVar2,0);
    return;
  }
  return;
}
