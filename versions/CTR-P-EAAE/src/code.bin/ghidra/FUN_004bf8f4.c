/**
 * FUN_004bf8f4.c
 * Source line: 701691
 * Body lines: 10
 */
#include "../../../include/types.h"

undefined4 FUN_004bf8f4(undefined1 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00140f54();
  iVar2 = FUN_004c885c(iVar1,6);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
  *(undefined1 *)(iVar2 + 4) = 0x36;
  *(undefined1 *)(iVar2 + 0x10) = param_1;
  *(undefined4 *)(iVar2 + 0x14) = param_2;
  FUN_004c8b24(iVar1,iVar2);
  return 1;
}
