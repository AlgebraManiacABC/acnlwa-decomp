/**
 * FUN_004c019c.c
 * Source line: 702231
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_004c019c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00140f54();
  iVar2 = FUN_004c885c(iVar1,5);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
  *(undefined1 *)(iVar2 + 4) = 0x33;
  *(int *)(iVar2 + 0x10) = param_1;
  FUN_004c8b24(iVar1,iVar2);
  uVar3 = FUN_00140fac(iVar1,1);
  FUN_001411ec(iVar1,uVar3);
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  return;
}
