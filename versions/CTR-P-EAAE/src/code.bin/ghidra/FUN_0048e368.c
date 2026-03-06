/**
 * FUN_0048e368.c
 * Source line: 663842
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0048e368(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,0xc,4);
  if (puVar1 != NULL) {
    puVar1[2] = 0;
    *puVar1 = &UNK_00901364;
    puVar1[1] = param_1;
  }
  return;
}
