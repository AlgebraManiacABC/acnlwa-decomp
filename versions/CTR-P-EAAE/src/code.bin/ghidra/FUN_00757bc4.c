/**
 * FUN_00757bc4.c
 * Source line: 1113170
 * Body lines: 8
 */
#include "../../../include/types.h"

undefined4 FUN_00757bc4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00757cc0(param_1 + 0x80);
  uVar2 = 0;
  if ((iVar1 != 0) && (iVar1 = FUN_00757cd8(param_1 + 0x80), uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}
