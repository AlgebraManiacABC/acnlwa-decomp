/**
 * FUN_0060bf4c.c
 * Source line: 923892
 * Body lines: 13
 */
#include "../../../include/types.h"

void FUN_0060bf4c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = GET_BYTE_00957322();
  iVar2 = FUN_002f74e0(0x80000,uVar1);
  if ((iVar2 == 0) || (iVar2 = FUN_006e0890(), iVar2 == 4)) {
    uVar1 = FUN_005b4120();
    iVar2 = FUN_002f74e0(0x10,uVar1);
    if ((iVar2 == 0) && (cRam009506f1 != '\'')) goto LAB_0060bfb4;
  }
  uRam009506f0 = 0x28;
  cRam009506f1 = '(';
LAB_0060bfb4:
          // WARNING: Subroutine does not return
  FUN_001323b4(param_1 + 0x280);
}
