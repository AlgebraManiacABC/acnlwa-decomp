/**
 * FUN_00165570.c
 * Source line: 180497
 * Body lines: 9
 */
#include "../../../include/types.h"

undefined4 FUN_00165570(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005c2d50();
  uVar2 = 0;
  if ((iVar1 != 0) && (iVar1 = FUN_005c2a54(), uVar2 = 0, iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x1a) = 4;
    uVar2 = 1;
  }
  return uVar2;
}
