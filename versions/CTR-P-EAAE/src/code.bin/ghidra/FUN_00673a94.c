/**
 * FUN_00673a94.c
 * Source line: 980475
 * Body lines: 5
 */
#include "../../../include/types.h"

void FUN_00673a94(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00656c20();
  *(undefined4 *)(iVar1 + 0xe) = *param_2;
  FUN_0064d0b8(param_1,0x8e,iVar1,0);
  return;
}
