/**
 * FUN_0049b874.c
 * Source line: 673671
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0049b874(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,8,4);
  if (puVar1 != NULL) {
    *puVar1 = &UNK_009015e0;
    puVar1[1] = param_2;
  }
  return;
}
