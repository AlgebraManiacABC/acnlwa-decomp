/**
 * FUN_004c4744.c
 * Source line: 705045
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_004c4744(int *param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00140f54();
  iVar2 = FUN_004c885c(iVar1,6);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
  *(undefined1 *)(iVar2 + 4) = 0xb;
  uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined4 *)(iVar2 + 0x10) = uVar3;
  *(undefined1 *)(iVar2 + 0x14) = param_2;
  FUN_004c8b24(iVar1,iVar2);
  return;
}
