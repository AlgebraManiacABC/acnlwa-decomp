/**
 * FUN_004c5b98.c
 * Source line: 706068
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004c5b98(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00140f54();
  iVar2 = FUN_004c885c(iVar1,7);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
  *(undefined1 *)(iVar2 + 4) = 0x2f;
  *(int *)(iVar2 + 0x10) = param_2 + 0x118;
  *(undefined4 *)(iVar2 + 0x14) = param_3;
  *(undefined4 *)(iVar2 + 0x18) = param_1;
  FUN_004c8b24(iVar1,iVar2);
  return;
}
