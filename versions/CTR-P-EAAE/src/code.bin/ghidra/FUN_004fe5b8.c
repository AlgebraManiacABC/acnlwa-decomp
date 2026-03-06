/**
 * FUN_004fe5b8.c
 * Source line: 745300
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_004fe5b8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_006d40d4(DAT_0094fd3c,0x400);
  if (((((iVar1 != 0) || (iVar1 = FUN_006d40d4(DAT_0094fd3c,0x4000), iVar1 != 0)) ||
       (iVar1 = FUN_006d40d4(DAT_0094fd3c,0x800), iVar1 != 0)) ||
      ((iVar1 = FUN_006d40d4(DAT_0094fd3c,0x10000), iVar1 != 0 ||
       (iVar1 = FUN_006d40d4(DAT_0094fd3c,0x1000), iVar1 != 0)))) ||
     ((iVar1 = FUN_006d40d4(DAT_0094fd3c,0x20000), iVar1 != 0 ||
      ((iVar1 = FUN_006d40d4(DAT_0094fd3c,0x2000), iVar1 != 0 ||
       (iVar1 = FUN_006d40d4(DAT_0094fd3c,0x40000), uVar2 = 0, iVar1 != 0)))))) {
    uVar2 = 1;
  }
  return uVar2;
}
