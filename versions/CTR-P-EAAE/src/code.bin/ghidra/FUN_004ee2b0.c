/**
 * FUN_004ee2b0.c
 * Source line: 736117
 * Body lines: 11
 */
#include "../../../include/types.h"

void FUN_004ee2b0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = param_2[1];
  uVar3 = *param_2;
  *(undefined4 *)(iVar1 + 0x78) = param_2[2];
  *(undefined4 *)(iVar1 + 0x68) = uVar2;
  *(undefined4 *)(iVar1 + 0x58) = uVar3;
  *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
  return;
}
