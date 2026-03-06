/**
 * FUN_007112c8.c
 * Source line: 1067137
 * Body lines: 12
 */
#include "../../../include/types.h"

undefined4 FUN_007112c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_007111b4();
  if (((((iVar1 != 0) || (iVar1 = FUN_0056c0e4(), iVar1 != 0)) ||
       (iVar1 = FUN_00710d50(param_1), iVar1 == 0)) ||
      ((_DAT_00aaf14c != 0 && (-1 < (int)((uint)*(byte *)(_DAT_00aaf14c + 0x5701) << 0x1e))))) ||
     ((iVar1 = FUN_002fb338(param_1 + 8), iVar1 == 0 ||
      ((iVar1 = FUN_007596ac(param_1 + 8,1), iVar1 == 0 ||
       (iVar1 = FUN_0031703c(param_1 + 8), uVar2 = 1, iVar1 != 1)))))) {
    uVar2 = 0;
  }
  return uVar2;
}
