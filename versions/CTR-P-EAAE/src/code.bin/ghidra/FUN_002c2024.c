/**
 * FUN_002c2024.c
 * Source line: 362293
 * Body lines: 9
 */
#include "../../../include/types.h"

void FUN_002c2024(undefined1 *param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0011d258();
  if (iVar1 == 0) {
    *param_1 = 1;
    *(undefined2 *)(param_1 + 2) = param_2;
    FUN_0011e340();
    return;
  }
  return;
}
