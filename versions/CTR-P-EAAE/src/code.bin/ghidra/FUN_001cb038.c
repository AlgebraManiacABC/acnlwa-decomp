/**
 * FUN_001cb038.c
 * Source line: 232951
 * Body lines: 14
 */
#include "../../../include/types.h"

void FUN_001cb038(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x4c) + 0x68);
    FUN_0070ac68(iVar2,param_1 + 0xc,*(undefined4 *)(iVar2 + 0xa4),1);
    FUN_0014f394(param_1 + 0x18,param_1,param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x3c) = 9;
  }
  return;
}
