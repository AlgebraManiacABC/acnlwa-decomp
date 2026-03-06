/**
 * FUN_004ed134.c
 * Source line: 734491
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_004ed134(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x114);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(iVar1 + 0xec) = *param_2;
  *(undefined4 *)(iVar1 + 0xf0) = uVar2;
  *(undefined4 *)(iVar1 + 0xf4) = uVar3;
  *(undefined4 *)(iVar1 + 0xf8) = uVar4;
  uVar2 = FUN_00736914(*(int *)(param_1 + 0x114) + 0xec);
  *(undefined4 *)(*(int *)(param_1 + 0x114) + 0x108) = uVar2;
  return 1;
}
