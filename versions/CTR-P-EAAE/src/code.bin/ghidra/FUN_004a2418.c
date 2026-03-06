/**
 * FUN_004a2418.c
 * Source line: 677777
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_004a2418(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,8,4);
  if (puVar1 != NULL) {
    *puVar1 = &UNK_009017cc;
    puVar1[1] = param_1;
  }
  return;
}
