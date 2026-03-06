/**
 * FUN_004c76ac.c
 * Source line: 707274
 * Body lines: 10
 */
#include "../../../include/types.h"

void FUN_004c76ac(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00140f54();
  iVar2 = FUN_004c885c(iVar1,8);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0x184);
  *(undefined1 *)(iVar2 + 4) = 0x14;
  *(undefined4 *)(iVar2 + 0x18) = param_1;
  *(undefined4 *)(iVar2 + 0x1c) = param_2;
  FUN_004c8b24(iVar1,iVar2);
  return;
}
