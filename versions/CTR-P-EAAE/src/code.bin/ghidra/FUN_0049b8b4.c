/**
 * FUN_0049b8b4.c
 * Source line: 673686
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0049b8b4(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,8,4);
  if (puVar1 != NULL) {
    *puVar1 = &UNK_00901604;
    puVar1[1] = param_1;
  }
  return;
}
