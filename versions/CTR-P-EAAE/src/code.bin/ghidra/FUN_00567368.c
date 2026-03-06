/**
 * FUN_00567368.c
 * Source line: 809097
 * Body lines: 10
 */
#include "../../../include/types.h"

bool FUN_00567368(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  if (*(int **)(param_1 + 4) != NULL) {
    (**(code **)(**(int **)(param_1 + 4) + 0x10))();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  iVar1 = FUN_005615e4(param_2,param_4,param_3,param_5,0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 4) = iVar1;
  }
  return iVar1 != 0;
}
