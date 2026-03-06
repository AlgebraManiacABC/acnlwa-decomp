/**
 * FUN_004eead8.c
 * Source line: 736722
 * Body lines: 13
 */
#include "../../../include/types.h"

undefined4 FUN_004eead8(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(iVar1 + 0xb8) = *param_2;
  *(undefined4 *)(iVar1 + 0xbc) = uVar2;
  *(undefined4 *)(iVar1 + 0xc0) = uVar3;
  *(undefined4 *)(iVar1 + 0xc4) = uVar4;
  return 1;
}
