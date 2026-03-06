/**
 * FUN_0049f3e4.c
 * Source line: 676025
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0049f3e4(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,8,4);
  if (puVar1 != NULL) {
    *puVar1 = &UNK_009016dc;
    puVar1[1] = param_2;
  }
  return;
}
