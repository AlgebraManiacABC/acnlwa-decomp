/**
 * FUN_004ed0cc.c
 * Source line: 734445
 * Body lines: 15
 */
#include "../../../include/types.h"

undefined4 FUN_004ed0cc(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x114);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(iVar1 + 0xcc) = *param_2;
  *(undefined4 *)(iVar1 + 0xd0) = uVar2;
  *(undefined4 *)(iVar1 + 0xd4) = uVar3;
  *(undefined4 *)(iVar1 + 0xd8) = uVar4;
  uVar2 = FUN_00736914(*(int *)(param_1 + 0x114) + 0xcc);
  *(undefined4 *)(*(int *)(param_1 + 0x114) + 0x100) = uVar2;
  return 1;
}
