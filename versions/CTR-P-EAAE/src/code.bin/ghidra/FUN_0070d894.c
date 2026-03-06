/**
 * FUN_0070d894.c
 * Source line: 1065160
 * Body lines: 14
 */
#include "../../../include/types.h"

undefined * FUN_0070d894(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x2c))(*(int **)(param_1 + 0x4c),param_2);
  if (iVar1 != 0) {
          // WARNING: Could not recover jumptable at 0x0070d8d0. Too many branches
          // WARNING: Treating indirect jump as call
    puVar2 = (undefined *)
             (**(code **)(**(int **)(param_1 + 0x4c) + 0x34))(*(int **)(param_1 + 0x4c),param_2);
    return puVar2;
  }
  iVar1 = FUN_00718c0c(param_1 + 0x50,param_2);
  if (iVar1 != 0) {
    puVar2 = (undefined *)FUN_00724400(param_1 + 0x50,param_2);
    return puVar2;
  }
  return &DAT_0095bfdc;
}
