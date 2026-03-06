/**
 * FUN_00683b30.c
 * Source line: 988262
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00683b30(undefined4 param_1,undefined1 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(undefined1 *)(iVar1 + 0xe) = param_2;
  *(undefined4 *)(iVar1 + 0xf) = *param_3;
  FUN_0064d0b8(param_1,0x74,iVar1,0);
  return;
}
