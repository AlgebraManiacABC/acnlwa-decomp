/**
 * FUN_004c765c.c
 * Source line: 707254
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_004c765c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00140f54();
  iVar2 = FUN_004c885c(iVar1,8);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
  *(undefined1 *)(iVar2 + 4) = 0x15;
  *(int *)(iVar2 + 0x10) = param_1 + 0x128;
  *(undefined4 *)(iVar2 + 0x14) = param_2;
  *(undefined4 *)(iVar2 + 0x18) = param_3;
  *(undefined4 *)(iVar2 + 0x1c) = param_4;
  FUN_004c8b24(iVar1,iVar2);
  return;
}
