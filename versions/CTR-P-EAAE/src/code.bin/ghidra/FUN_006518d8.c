/**
 * FUN_006518d8.c
 * Source line: 962583
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_006518d8(undefined4 param_1,undefined4 *param_2)

{
  undefined1 extraout_var;
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(undefined4 *)(iVar1 + 0xe) = *param_2;
  *(undefined1 *)(iVar1 + 0x13) = 0;
  FUN_0065473c();
  *(undefined1 *)(iVar1 + 0x12) = extraout_var;
  FUN_0064d0b8(param_1,0x92,iVar1,0);
  return;
}
