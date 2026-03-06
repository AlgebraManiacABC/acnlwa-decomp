/**
 * FUN_0072f310.c
 * Source line: 1086343
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined4 FUN_0072f310(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(iRam00974a58 + 0x14) + 0x1228;
  thunk_FUN_00135748(iVar2);
  iVar1 = (**(code **)(**(int **)(iRam00974a58 + 0x14) + 0x3c))
                    (*(int **)(iRam00974a58 + 0x14),param_2);
  if (iVar1 != 0) {
    uVar3 = *(undefined4 *)(iVar1 + 4);
    thunk_FUN_001357ec(iVar2);
    return uVar3;
  }
  thunk_FUN_001357ec(iVar2);
  return 0;
}
