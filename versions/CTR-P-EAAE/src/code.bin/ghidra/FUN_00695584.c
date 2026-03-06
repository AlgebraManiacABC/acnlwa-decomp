/**
 * FUN_00695584.c
 * Source line: 998898
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_00695584(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_0057b9dc(param_2,param_1,param_3,param_4,param_5);
  if (iVar1 != 0) {
    if (*(int **)(param_1 + 0xeb58) != NULL) {
      **(int **)(param_1 + 0xeb58) = iVar1;
    }
    *(int *)(param_1 + 0xeb58) = *(int *)(param_1 + 0xeb58) + 4;
  }
  return;
}
