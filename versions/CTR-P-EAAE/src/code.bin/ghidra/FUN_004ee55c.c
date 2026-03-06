/**
 * FUN_004ee55c.c
 * Source line: 736420
 * Body lines: 7
 */
#include "../../../include/types.h"

int FUN_004ee55c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0056aa98(param_1 + 0x1c);
  if ((iVar1 != 0) && (*(int *)(param_1 + 4) == 0)) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0xec);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xec);
  }
  return iVar1;
}
