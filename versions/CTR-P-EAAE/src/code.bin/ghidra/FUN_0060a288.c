/**
 * FUN_0060a288.c
 * Source line: 923099
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_0060a288(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = FUN_0075dfdc(DAT_0095362c);
  iVar4 = DAT_0095362c + 0x1c0;
  iVar2 = FUN_0075e858(DAT_0095362c + 0x1c1,0x8d);
  if ((iVar1 == iVar2) && (uVar3 = FUN_0075e2fc(iVar4), 3 < uVar3)) {
    FUN_0061d888(DAT_0095362c + 0x27a0);
    FUN_0081c0a0(param_1);
  }
  return;
}
