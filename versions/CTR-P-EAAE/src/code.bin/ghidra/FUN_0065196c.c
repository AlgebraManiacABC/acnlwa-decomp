/**
 * FUN_0065196c.c
 * Source line: 962614
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_0065196c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_2 + 0x1a9) != '\x06') {
    iVar1 = FUN_00656c20(param_2);
    FUN_005d4180(param_1,iVar1 + 0xe);
    uVar2 = FUN_0064d0b8(param_2,6,iVar1,0);
    return uVar2;
  }
  return 1;
}
