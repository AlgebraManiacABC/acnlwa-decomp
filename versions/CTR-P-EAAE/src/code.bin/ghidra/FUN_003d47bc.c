/**
 * FUN_003d47bc.c
 * Source line: 545979
 * Body lines: 12
 */
#include "../../../include/types.h"

void FUN_003d47bc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *param_1 = &PTR_LAB_008feb08;
  iVar1 = FUN_00355eac(param_1 + 2,param_3);
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined1 *)(iVar1 + 0x84) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + -4) = param_2;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined1 *)(iVar1 + 0x7c) = 0;
  return;
}
