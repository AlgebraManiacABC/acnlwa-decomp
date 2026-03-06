/**
 * FUN_0049cd24.c
 * Source line: 674600
 * Body lines: 7
 */
#include "../../../include/types.h"

void FUN_0049cd24(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,8,4);
  if (puVar1 != NULL) {
    *puVar1 = &UNK_0090168c;
    puVar1[1] = param_1;
  }
  return;
}
