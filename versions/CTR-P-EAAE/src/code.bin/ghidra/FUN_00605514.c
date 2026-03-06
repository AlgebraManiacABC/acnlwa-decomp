/**
 * FUN_00605514.c
 * Source line: 920817
 * Body lines: 6
 */
#include "../../../include/types.h"

void FUN_00605514(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_001db118(*param_1);
  if (iVar1 != 0) {
    *(undefined1 *)((int)param_1 + 5) = 1;
  }
  return;
}
