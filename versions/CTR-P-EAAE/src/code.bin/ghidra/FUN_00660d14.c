/**
 * FUN_00660d14.c
 * Source line: 970731
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00660d14(undefined4 param_1,undefined4 *param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(undefined4 *)(iVar1 + 0xe) = *param_2;
  *(undefined1 *)(iVar1 + 0x12) = param_3;
  FUN_0064d0b8(param_1,0x38,iVar1,0);
  return;
}
