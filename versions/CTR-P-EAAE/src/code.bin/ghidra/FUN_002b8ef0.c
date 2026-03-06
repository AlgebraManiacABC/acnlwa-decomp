/**
 * FUN_002b8ef0.c
 * Source line: 355595
 * Body lines: 15
 */
#include "../../../include/types.h"

void FUN_002b8ef0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + param_2 * 4 + 0x284);
  *(int *)(param_1 + 0x294) = iVar1;
  if (iVar1 != 0) {
    param_2 = *(int *)(iVar1 + 0x18);
  }
  if (iVar1 == 0 || param_2 == 0) {
    return;
  }
  FUN_00569b44(*(undefined4 *)(iVar1 + 4),0x3f800000,0,iVar1,3);
  FUN_00569b44(*(undefined4 *)(*(int *)(param_1 + 0x290) + 4),0x3f800000,0,*(int *)(param_1 + 0x290)
               ,1);
  FUN_004b9b64(param_1 + 0x134,*(undefined4 *)(param_1 + 0x290));
  (**(code **)(**(int **)(param_1 + 0x290) + 8))(0);
          // WARNING: Subroutine does not return
  FUN_00568c10(param_1 + 0x134);
}
