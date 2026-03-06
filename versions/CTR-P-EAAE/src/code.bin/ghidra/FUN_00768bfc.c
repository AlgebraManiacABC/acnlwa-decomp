/**
 * FUN_00768bfc.c
 * Source line: 1126449
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_00768bfc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_002fccdc();
  if ((iVar1 == 10) && ((*(ushort *)(param_1 + 2) & 0x3fff) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
