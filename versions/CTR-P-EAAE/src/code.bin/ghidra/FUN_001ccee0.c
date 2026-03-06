/**
 * FUN_001ccee0.c
 * Source line: 234053
 * Body lines: 15
 */
#include "../../../include/types.h"

bool FUN_001ccee0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_001ccc58(param_1,2,param_2,param_4,param_5);
  if (iVar1 != 0) {
    uVar4 = param_3[2];
    iVar2 = *(int *)(param_1 + 8) +
            ((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8)) / 0x28) * 0x28;
    uVar3 = param_3[1];
    *(undefined4 *)(iVar2 + -0x18) = *param_3;
    *(undefined4 *)(iVar2 + -0x14) = uVar3;
    *(undefined4 *)(iVar2 + -0x10) = uVar4;
  }
  return iVar1 != 0;
}
