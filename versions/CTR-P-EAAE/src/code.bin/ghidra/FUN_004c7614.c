/**
 * FUN_004c7614.c
 * Source line: 707236
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004c7614(int param_1,undefined1 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00140f54();
  iVar2 = FUN_004c885c(iVar1,6);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
  *(undefined1 *)(iVar2 + 4) = 0x12;
  *(int *)(iVar2 + 0x10) = param_1 + 0x128;
  *(undefined1 *)(iVar2 + 0x14) = param_2;
  FUN_004c8b24(iVar1,iVar2);
  return;
}
