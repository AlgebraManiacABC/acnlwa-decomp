/**
 * FUN_004c74b0.c
 * Source line: 707148
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004c74b0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00140f54();
  iVar2 = FUN_004c885c(iVar1,6);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
  *(undefined1 *)(iVar2 + 4) = 0x11;
  *(int *)(iVar2 + 0x10) = param_2 + 0x128;
  *(undefined4 *)(iVar2 + 0x14) = param_1;
  FUN_004c8b24(iVar1,iVar2);
  return;
}
