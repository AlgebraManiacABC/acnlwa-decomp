/**
 * FUN_004ed098.c
 * Source line: 734422
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_004ed098(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x114);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(iVar1 + 0xbc) = *param_2;
  *(undefined4 *)(iVar1 + 0xc0) = uVar2;
  *(undefined4 *)(iVar1 + 0xc4) = uVar3;
  *(undefined4 *)(iVar1 + 200) = uVar4;
  uVar2 = FUN_00736914(*(int *)(param_1 + 0x114) + 0xbc);
  *(undefined4 *)(*(int *)(param_1 + 0x114) + 0xfc) = uVar2;
  return 1;
}
