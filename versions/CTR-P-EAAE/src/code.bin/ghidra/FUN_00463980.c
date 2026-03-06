/**
 * FUN_00463980.c
 * Source line: 630697
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_00463980(uint param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  
  FUN_00350d9c();
  iVar1 = FUN_0012f374();
  if (iVar1 != 0) {
    puVar2 = *(uint **)(param_2 + (*(ushort *)(param_2 + 0x131e) & 1) * 0x60 + param_3 * 4 + 0x10b4)
    ;
    puVar2[0xd] = param_1;
    *puVar2 = *puVar2 | 0x40000;
    FUN_00350e88();
    return 1;
  }
  FUN_00350e88();
  return 0;
}
