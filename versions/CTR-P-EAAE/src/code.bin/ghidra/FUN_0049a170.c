/**
 * FUN_0049a170.c
 * Source line: 672531
 * Body lines: 8
 */
#include "../../../include/types.h"

void FUN_0049a170(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,0xc,4);
  if (puVar1 != NULL) {
    puVar1[2] = 0;
    *puVar1 = &UNK_00901524;
    puVar1[1] = param_2;
  }
  return;
}
