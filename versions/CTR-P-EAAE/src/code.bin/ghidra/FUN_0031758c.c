/**
 * FUN_0031758c.c
 * Source line: 418500
 * Body lines: 10
 */
#include "../../../include/types.h"

bool FUN_0031758c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  
  if (*(int **)(param_1 + 4) != NULL) {
    (**(code **)(**(int **)(param_1 + 4) + 0x10))();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  iVar1 = FUN_002f6e78(param_2,param_4,param_3,param_5,param_6);
  if (iVar1 != 0) {
    *(int *)(param_1 + 4) = iVar1;
  }
  return iVar1 != 0;
}
