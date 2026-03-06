/**
 * FUN_00757c3c.c
 * Source line: 1113220
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00757c3c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00757f78(param_1 + 0x80);
  uVar2 = 0;
  if ((iVar1 != 0) && (iVar1 = FUN_0070efa0(param_1 + 0x71900,param_2), uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
